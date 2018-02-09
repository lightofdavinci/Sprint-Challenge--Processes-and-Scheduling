1. b. P1: 0 - 64,000;
      P2: 0 - 64,000
* The range of virtual addresses usually starts at a low address and can extend to the highest address allowed by the computer's instruction set architecture and supported by the operating system's pointer size implementation.

2. 
* Start. This is the initial state when a process is first started/created.
* Ready. The process is waiting to be assigned to a processor. Ready processes are waiting to have the processor allocated to them by the operating system so that they can run.
* Running. Once the process has been assigned to a processor by the OS scheduler, the process state is set to running and the processor executes its instructions.
* Waiting. Process moves into the waiting state if it needs to wait for a resource, such as waiting for user input, or waiting for a file to become available.
* Terminated or Exit. Once the process finishes its execution, or it is terminated by the operating system, it is moved to the terminated state where it waits to be removed from main memory.


3. On my machine, it took an average time of 784 nanoseconds to print a testing string with printf and 3456 nanoseconds with write system call, in other words, printf works approximately 4.4 times faster.

4. Printf doesn't necessarily call write every time but may instead buffer its output. That is, it often stores its result in a memory buffer, only calling write when the buffer is full.  In some other conditions, like if stdout is directed to a terminal device, printf calls write every time it sees a \n.

* My understanding of this topic is not great, google helped me to find these answers.