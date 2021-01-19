/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#include "Fax.h"

#include <iostream>
using namespace std;

// Put your name here
// Htet, Niall
// Submit this file


// Implement the Fax class here
Fax::Fax(int duration, int destination)
	: OfficeJob(duration), destination(destination) { }

void Fax::printStatus() const
{
	cout << destination << ": " << OfficeJob::getDuration()
		<< " min until sent" << endl;
}