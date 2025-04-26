# Documents

## setting up the bankers algorithm
* matrices to store the necesssary data
  
  ![image](https://github.com/user-attachments/assets/34575c29-459d-483b-a9f8-76bc6fb71f8e)

* array to keep track of the sequence

  ![image](https://github.com/user-attachments/assets/a57864a2-b16a-417a-b0b9-cd8b11985df5)

## algorithm explanation
* The program keeps looping until all processes are complete, or until the system is not in a safe state (breaks from the loop in this case).

* If process is not complete, checks if it is satisfied by resources available. If not, skip this process, and see if the next process is satisfied by available resources.

  ![image](https://github.com/user-attachments/assets/b70fb771-024d-4c85-a5d5-1569a88f7769)
##

## 
* If a process' resource needs are satisfied, the resources are released from the process and added to the available resources. Sets process as complete and stores it in the safe sequence. After this, prints the process.

  ![image](https://github.com/user-attachments/assets/fadb98e6-4cef-4ff6-b13f-0b743efa01b3)
##

##
* If every process' needs are never satisfied, the program prints that its not in a safe state. This loop takes care of it - checks if we are in the last loop of the for loop, and if !safe (process resource needs are not satisfied).
  
  ![image](https://github.com/user-attachments/assets/4a5c8337-5f7a-437b-9f60-12eabfb23ee0)
##
