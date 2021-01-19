/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#include "PrintJob.h"
#include <iostream>

using namespace std;

// Put your name here
// Htet, Niall
// Submit this file


// Implement the PrintJob class here
PrintJob::PrintJob(int duration, const std::string& name)
	: OfficeJob(duration), jobName(name) { }

void PrintJob::printStatus() const
{
	cout << jobName << ": " << OfficeJob::getDuration() 
		<< " min to complete" << endl;
}