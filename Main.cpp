/*
	Htet, Niall

	November 5, 2020

	CS A250
	Programming Exam 3: Final
*/

#include "PrintJob.h"
#include "Fax.h"
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

// Put your name here
// Htet, Niall
// Do not remove the comments in main
// Do not create any additional functions

int main(){

  // Declare queue of OfficeJob pointers

	queue<OfficeJob*> officeJobQueue;

  // Create PrintJob and Fax objects on the heap
  // Save in pointers

	Fax* fax1 = new Fax(10, 456);
	PrintJob* printJob1 = new PrintJob(2, "homework");
	PrintJob* printJob2 = new PrintJob(3, "email");
	Fax* fax2 = new Fax(7, 123);
	PrintJob* printJob3 = new PrintJob(5, "recipe");
	Fax* fax3 = new Fax(6, 789);
  
  // Add all objects to the queue

	officeJobQueue.push(fax1);
	officeJobQueue.push(printJob1);
	officeJobQueue.push(printJob2);
	officeJobQueue.push(fax2);
	officeJobQueue.push(printJob3);
	officeJobQueue.push(fax3);

  // Declare a vector to hold the four current jobs
  // Add four elements from the queue to the vector

	vector<OfficeJob*> currentJobs;
	for (int i = 0; i < 4; ++i)
	{
		currentJobs.push_back(officeJobQueue.front());
		officeJobQueue.pop();
	}
  
  // Process jobs until all jobs in the queue are done
  // Use a max of three loops total from this point foward
  // Print all jobs currently being processed
  // Update all jobs by subtracting one minute from the duration
  // Remove any finished jobs from the vector
  // Replace finished with jobs from the queue

	bool allFinished = false;
	int minute = 0;
	while (!allFinished)
	{
		cout << "Minute: " << minute << endl;

		for (int machine = 0; machine < 4; ++machine)
		{
			cout << "Machine " << machine + 1 << ": ";
			if (currentJobs[machine] == nullptr)
			{
				cout << "NO JOB" << endl;
			}
			else
			{
				if (currentJobs[machine]->getDuration() == 0)
				{
					if (!officeJobQueue.empty())
					{
						currentJobs[machine] = officeJobQueue.front();
						officeJobQueue.pop();
					}
					else
					{
						currentJobs[machine] = nullptr;
					}
				}
				if (currentJobs[machine] == nullptr)
				{
					cout << "NO JOB" << endl;
				}
				else
				{
					currentJobs[machine]->printStatus();
					currentJobs[machine]->updateDuration(-1);
				}
			}
		}
		cout << endl;

		allFinished = true;
		for (int i = 0; i < 4; ++i)
		{
			if (currentJobs[i] != nullptr)
				allFinished = false;
		}

		++minute;
	}

  // Perform clean up tasks

	delete fax1;
	fax1 = nullptr;

	delete printJob1;
	printJob1 = nullptr;
	
	delete printJob2;
	printJob2 = nullptr;
	
	delete fax2;
	fax2 = nullptr;
	
	delete printJob3;
	printJob3 = nullptr;
	
	delete fax3;
	fax3 = nullptr;
  
  return 0;
}
