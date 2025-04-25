# Documents

## setting up the bankers algorithm
* matrices to store the necesssary data
  
![image](https://github.com/user-attachments/assets/34575c29-459d-483b-a9f8-76bc6fb71f8e)

* array to keep track of the sequence

![image](https://github.com/user-attachments/assets/a57864a2-b16a-417a-b0b9-cd8b11985df5)

## algorithm explaination
* The program keeps looping until we all processes are complete.

* If process is not complete, we check if it is satisfied by resources available. If not, we skip this process, and see of the next process is satisfied available.

* If process' resource needs are satisfied, we mark the process as complete and store it in the safe sequence. After this, it prints the process to add to the safe sequence.

* If a process' needs are never satisfied, the program prints that its not in a safe state. This loop takes care of it. It checks if we are in the last loop of the for loop, and if the process' resource needs are not met.
  
![image](https://github.com/user-attachments/assets/4a5c8337-5f7a-437b-9f60-12eabfb23ee0)


