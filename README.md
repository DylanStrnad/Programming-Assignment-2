# Programming-Assignment-2

**Author: Dylan Strnad**

**Programmming languaged used:** C++

Bankers algorithm for deadlock avoidance

## Summary
Takes an input file, which includes data for each process. Such as how many resources are allocated to each process,
the max resources each process uses, and how many resources are avilable.

Uses the data from info.txt to determine if the system is in a safe state. If so, program outputs the safe sequence, and states that system is safe. Otherwise, the program outputs that the system is not safe.

## Running Code
To compile code in linux environment, run these commands:
```sh
$ g++ main.cpp -o output
$ ./output
```

## Output examples

### should output this with the included info.txt file
![image](https://github.com/user-attachments/assets/aa8d9641-6157-4d49-97e2-37a6c45c8cb2)

### modify info.txt values and output may change. As shown below, the safe sequence never completes, and system is not in safe state
![image](https://github.com/user-attachments/assets/463c34a9-0823-46a5-af29-8d2f8acd2926)


