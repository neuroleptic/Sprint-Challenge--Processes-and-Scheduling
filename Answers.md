1. When a process is allocated memory, it is allocated virtual addresses. These virtual addresses are mapped to physical addresses in memory by the operating system. Each process is given its own virtual address space that is independent of other process' virtual address space. Therefore, b is the best answer. 

2. There are several states that a process can be in. A process in the running state is currently being executed by the CPU.
A process in the ready state is able to be executed by the CPU but is waiting until it is scheduled to do so. A process in the 
blocked state is waiting for some event to occur, such as user input or an I/O request to the hard disk to complete. A process in the terminated state has completed or has been explicity killed and is waiting for its parent process to call `wait` to
free up its resources. A process in the new state has been recently created and is waiting for the scheduler to put it in the ready state. 


3. On my system, a call to `printf` takes on average 85 nanoseconds. A call to `write` takes on average 575 nanoseconds. A call to `printf` is almost 7 times faster than a call to `write`.


4. Even though `printf` calls `write`, it still runs faster than `write` because it does not call `write` every time it is called. `printf` stores its output in a memory buffer and will only call `write` under certain circumstances, such as when the buffer is full or it encounters a new line character. 