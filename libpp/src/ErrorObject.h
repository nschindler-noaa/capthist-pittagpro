#ifndef ErrorObject_H
#define ErrorObject_H

// Abstract base class for error objects to be thrown

#include <iostream>
#include <string>

class ErrorObject
{
public:
	ErrorObject() {}
	virtual ~ErrorObject() {}
	void writeObject(std::ostream& os) const {os << message();}
	virtual const std::string& message() const = 0;
};
std::ostream& operator<<(std::ostream& os, const ErrorObject& err);

#endif
