/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#ifndef PRINTJOB_H
#define PRINTJOB_H

#include "OfficeJob.h"
#include <string>

// Put your name here
// Htet, Niall
// Submit this file


// Declare the PrintJob class here
class PrintJob : public OfficeJob
{
public:
	PrintJob(int duration, const std::string& name);
	virtual void printStatus() const;
private:
	std::string jobName;
};

#endif
