/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#include "OfficeJob.h"
#include <iostream>

using namespace std;

// Put your name here
// Htet, Niall
// Submit this file

// Implement the OfficeJob class here
OfficeJob::OfficeJob(int duration) : duration(duration) { }

int OfficeJob::getDuration() const
{
	return duration;
}
int OfficeJob::updateDuration(int amount)
{
	duration += amount;
	return duration;
}

void OfficeJob::printStatus() const
{
	if (duration == 0)
	{
		cout << "Finished" << endl;
	}
	else if (duration > 0)
	{
		cout << "Working" << endl;
	}
}
OfficeJob::~OfficeJob() { }