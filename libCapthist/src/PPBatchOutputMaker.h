/*
 *
 */

#ifndef PPBatchOutputMaker_h
#define PPBatchOutputMaker_h

#include <string>
#include <iostream>

#include "PPOutputMaker.h"
#include <PitProSettings.h>

class PPBatchOutputMaker : public PPOutputMaker
{
public:
//    PPBatchOutputMaker() : PPOutputMaker() {out = *this;}
    ~PPBatchOutputMaker() {}

    static PPBatchOutputMaker& getInstance()
    {
        static PPBatchOutputMaker out;
        return out;
    }

    void write (const std::string& msg, OutputType type = Message)
    {
        PitProSettings& settings = PitProSettings::getInstance();
        std::string outstr = ppFormat(msg, type);
        if (type != PPOutputMaker::Warning || settings.isChecked(PitProSettings::Warnings))
            std::cerr << outstr;
        else
            std::cout << outstr;
    }

#if 0
    void setCurrentStep(int num)
      {
        PPOutputMaker::setCurrentStep (num);
        std::cerr << "\f" << currentStep << "/" << numSteps << endl;
      }
#endif

private:
//        static PPBatchOutputMaker out;
    PPBatchOutputMaker() : PPOutputMaker() {}

};

#endif
