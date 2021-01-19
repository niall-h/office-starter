/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#ifndef OFFICE_JOB_H
#define OFFICE_JOB_H

// Put your name here
// Htet, Niall
// Submit this file


// Declare the OfficeJob class here
class OfficeJob
{
public:
	OfficeJob(int duration);

	int getDuration() const;
	int updateDuration(int amount);

	virtual void printStatus() const;
	virtual ~OfficeJob();
private:
	int duration;
};


#endif
