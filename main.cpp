#include <iostream>
#include <fstream>
using namespace std;

const int totalProcesses = 5;
const int resourceTypes = 3;

int main() {

	int available[3];

	int max[totalProcesses][resourceTypes];

	int allocation[totalProcesses][resourceTypes];

	int need[totalProcesses][resourceTypes];


    // Assign values from file to each matrix
    ifstream infile("info.txt");

    if (!infile) {
        cerr << "Error opening file.\n";
        return 1;
    }

    for (int i = 0; i < totalProcesses; ++i) {
        for (int j = 0; j < resourceTypes; ++j) {
            infile >> max[i][j];
        }
    }

    for (int i = 0; i < totalProcesses; ++i) {
        for (int j = 0; j < resourceTypes; ++j) {
            infile >> allocation[i][j];
        }
    }

    for (int i = 0; i < totalProcesses; ++i) {
        infile >> available[i];
    }

    for (int i = 0; i < totalProcesses; ++i) {
        for (int j = 0; j < resourceTypes; ++j) {
            need[i][j] = max[i][j] - allocation[i][j];
        }
    }

    infile.close();

    //tracks order of sequence
    int safeSequence[5] { 0 };

    // track if process is complete
    bool complete[5] { false };

    int completedProcesses = 0;

    //safe state is true
    bool safe = true;


    while ( completedProcesses < totalProcesses ){
        //store if system is in safe state
        safe = false;

        //used to track process index
        int pIndex = 0;

        for (pIndex = 0; pIndex < totalProcesses; ++pIndex) {

            //check if process is complete
            if (complete[pIndex] == false) {

                //index of resource type
                int rIndex = 0;

               // stored if resource needs are satisfied
                bool satisfied = false;

                //check if need is greater than available
                for (rIndex = 0; rIndex < resourceTypes; ++rIndex) {
                    if (need[pIndex][rIndex] > available[rIndex]) {
                        break;
                    }
                    if (rIndex == 2) {
                        //enough resources are available
                        satisfied = true;
                    }
                }

                //checks if resource need was satisfied by the resources available
                if (satisfied) {

                    //process releases resources
                    for (rIndex = 0; rIndex < resourceTypes; ++rIndex) {

                        //available resources is increased
                        available[rIndex] += allocation[pIndex][rIndex];
                    }

                    safeSequence[completedProcesses] = pIndex;

                    complete[pIndex] = true;

                    // print sequence
                    if (completedProcesses < 1) {
                        cout << "safe sequence: ";
                        cout << safeSequence[completedProcesses] << ", ";
                    }
                    else if (completedProcesses < 4) {
                        cout << safeSequence[completedProcesses] << ", ";
                    }
                    else {
                        cout << safeSequence[completedProcesses] << "\n";
                        cout << "System is in a safe state";
                    }

                    ++completedProcesses;

                    //system is in safe state. Resource needs were met for at least one process
                    safe = true;
                }
                

            }
            // no process' needs area satisfied, and not safe
            if (pIndex == (totalProcesses - 1) && !safe) {
                cout << "\n The system is not in a safe state \n";
                break;
            }
        }

        
        if (!safe) {
            break;
        }

    }

	return 0;
}
