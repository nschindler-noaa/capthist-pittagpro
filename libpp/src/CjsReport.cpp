/*
 *
 */


#include <cmath>
#include <cfloat>

#include <QString>

#include "TaggingData.h"
#include "CjsEstimates.h"
#include "CjsReport.h"
#include "GlobalDefs.h"

#include "portability.h"

using namespace std;

CjsReport::CjsReport(const TaggingData& data, const vector<CjsEstimates*>& cjs) :
    data_(data), cjs_(cjs),
    populationColumn_(0), populationColumnWidth_(15),
    precision_(GlobalDefs::instance()->reportPrecision()),
    columnWidth_(2 + precision_ + 4 + precision_ + 1),
    columnSpacing_(2), dataStartColumn_(populationColumn_ + populationColumnWidth_ + 3),
    overallColumn_(populationColumn_ + populationColumnWidth_ + 3 + \
    (data.numPeriods() - 1)*(columnWidth_ + columnSpacing_) - columnSpacing_ + 3) {
}

void CjsReport::writeObject(ostream& os) const {
    unsigned int pop, per, occ;
    int row = 0;


    RB_.insertLeft(row++, 0, "Cormack/Jolly-Seber Estimates");
    RB_.insertLeft(row++, 0, "(Cormack 1964, Jolly 1965, Seber 1965)");
    //if (profileLikelihood_)
    //{
    //    int col = RB_.insertLeft(row,0,"with profile likelihood ");
    //    col = RB_.insertLeft(row,col,2,alphaLevel_);
    //    RB_.insertLeft(row++,col," confidence intervals");
    //}
    ++row;
    RB_.insertLeft(row++, 0, string("Data: ") + data_.dataDescription());
    RB_.insertLeft(row++, 0, string("File: ") + data_.fileName());
    ++row;

    RB_.insertLeft(row++, 0, "Survival Probabilities");
    ++row;
    RB_.insertLeft(row, dataStartColumn_ - 2, "| Period");
    RB_.insertLeft(row, overallColumn_ - 2, "|");
    ++row;
    RB_.insertLeft(row, populationColumn_, "Population");
    RB_.insertLeft(row, dataStartColumn_ - 2, "|");
    for (per = 0; per < data_.numPeriods() - 1; per++)
        RB_.insertCentered(row, dataStartColumn_ + (columnWidth_ + columnSpacing_) * per, columnWidth_, per + 1);
    RB_.insertLeft(row, overallColumn_ - 2, "| Overall");
    ++row;
    RB_.insertLeft(row, populationColumn_, string(populationColumnWidth_, '-'));
    RB_.insertLeft(row, dataStartColumn_ - 3, "-+-");
    RB_.insertLeft(row, dataStartColumn_, string((data_.numPeriods() - 1)* (columnWidth_ + columnSpacing_) - columnSpacing_, '-'));
    RB_.insertLeft(row, overallColumn_ - 3, "-+-");
    RB_.insertLeft(row, overallColumn_, string(columnWidth_, '-'));
    ++row;
    for (pop = 0; pop < data_.numPopulations(); pop++) {
        insertPopulationName(row, pop);
        for (per = 1; per < data_.numPeriods(); per++) {
            //if (profileLikelihood_)
            //{
            //    pair<double,double> CI = profileLikelihood_->CI(pop,per,alphaLevel_);
            //    double CIlow = CI.first;
            //    double CIhigh = CI.second;
            //    localThis->insertValues( row, dataStartColumn_ + per*(columnWidth_+columnSpacing_),
            //                             cormack_.S(pop,per), sqrt(cormack_.SVar(pop,per)), &CIlow, &CIhigh);
            //}
            //else
            unsigned int phiIndex = cjs_[pop]->phiIndex(per);
            insertValues(row, dataStartColumn_ + (per - 1)*(columnWidth_ + columnSpacing_),
                    cjs_[pop]->phi(per), cjs_[pop]->covariance()(phiIndex, phiIndex));

        }

        double reachSurvival = cjs_[pop]->phi(1);
        for (unsigned int i = 2; i < data_.numPeriods(); ++i)
            reachSurvival *= cjs_[pop]->phi(i);
        RB_.insertLeft(row, overallColumn_ - 2, "|");
        insertValues(row, overallColumn_, reachSurvival, cjs_[pop]->reachVariance(1, data_.numPeriods() - 1));
        ++row;
    }
    ++row;

    RB_.insertLeft(row++, 0, "Capture probabilities");
    ++row;
    RB_.insertLeft(row++, dataStartColumn_ - 2, "| Occasion");
    RB_.insertLeft(row, populationColumn_, "Population");
    RB_.insertLeft(row, dataStartColumn_ - 2, "|");
    for (occ = 1; occ < data_.numPeriods(); occ++)
        RB_.insertCentered(row, dataStartColumn_ + (columnWidth_ + columnSpacing_)*(occ - 1), columnWidth_, occ + 1);
    ++row;
    RB_.insertLeft(row, populationColumn_, string(populationColumnWidth_, '-'));
    RB_.insertLeft(row, dataStartColumn_ - 3, "-+-");
    RB_.insertLeft(row++, dataStartColumn_,
            string((columnWidth_ + columnSpacing_)* (data_.numPeriods() - 1) - columnSpacing_, '-'));
    for (pop = 0; pop < data_.numPopulations(); pop++) {
        insertPopulationName(row, pop);
        for (occ = 2; occ <= data_.numPeriods(); ++occ) {
            const unsigned int pIndex = cjs_[pop]->pIndex(occ);
            insertValues(row, dataStartColumn_ + (occ - 2)*(columnWidth_ + columnSpacing_),
                    cjs_[pop]->p(occ), cjs_[pop]->covariance()(pIndex, pIndex));
        }
        ++row;
    }
    ++row;

    RB_.insertLeft(row++, 0, "Product of final period survival/capture");
    ++row;
    RB_.insertLeft(row, populationColumn_, "Population");
    RB_.insertLeft(row++, dataStartColumn_ - 2, "|");
    RB_.insertLeft(row, populationColumn_, string(populationColumnWidth_, '-'));
    RB_.insertLeft(row, dataStartColumn_ - 3, "-+-");
    RB_.insertLeft(row++, dataStartColumn_, string(columnWidth_, '-'));
    for (pop = 0; pop < data_.numPopulations(); pop++) {
        unsigned int phiIndex = cjs_[pop]->phiIndex(data_.numPeriods());
        insertPopulationName(row, pop);
        insertValues(row++, dataStartColumn_, cjs_[pop]->phi(data_.numPeriods()),
                cjs_[pop]->covariance()(phiIndex, phiIndex));
    }

    RB_.writeObject(os);
}

void CjsReport::insertPopulationName(int row, int pop) const {
    RB_.insertLeft(row, populationColumn_, data_.populationName(pop));
    RB_.insertLeft(row, dataStartColumn_ - 2, "|");
}

void CjsReport::insertValues(int row, int col, double val, double var) const {
    int column = RB_.insertLeft(row, col, 2 + precision_, precision_, val);
    column = RB_.insertLeft(row, column, " (");
    if (_isnanf(var))
        column = RB_.insertLeft(row, column, 2 + precision_, string(2 + precision_, '*'));
    else
        column = RB_.insertLeft(row, column, 2 + precision_, precision_, sqrt(var));
    column = RB_.insertLeft(row, column, ")");
    //if (CIlow)
    //{
    //    column = RB_.insertLeft(row,column," [");
    //    if (*CIlow == -1)
    //        column = RB_.insertLeft(row,column,string('*',precision_+2));
    //    else
    //        column = RB_.insertLeft(row,column,2+precision_,precision_, *CIlow);
    //    column = RB_.insertLeft(row,column," ");
    //    if (*CIhigh == -1)
    //        column = RB_.insertLeft(row,column,string('*',precision_+2));
    //    else
    //        column = RB_.insertLeft(row,column,2+precision_,precision_, *CIhigh);
    //    column = RB_.insertLeft(row,column,"]");
    //}
}

ostream& operator<<(ostream& os, const CjsReport& report) {
    report.writeObject(os);
    return os;
}
