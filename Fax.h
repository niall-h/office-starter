/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#ifndef FAX_H
#define FAX_H

#include "OfficeJob.h"

// Put your name here
// Htet, Niall
// Submit this file


// Declare the Fax class here
class Fax : public OfficeJob
{
public:
	Fax(int duration, int destination);
	virtual void printStatus() const;
private:
	int destination;
};
#endif
