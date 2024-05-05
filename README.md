**UNIX Signals Client-Server Communication**

---

**Objective**

Create a simple client-server application in C that uses UNIX signals for communication. The client program will send a message (a string of text) to the server program using signals, specifically SIGUSR1 and SIGUSR2.

---

**Concept Overview**

**Server:**
- A program that runs continuously, waiting for requests or messages from clients.
- It processes these requests and may send back responses.

**Client:**
- A program that sends requests or messages to a server.
- In this task, the client sends a text message to the server using signals.

---

**Requirements**

**Server Program:**
- Display its own PID (Process ID) upon launch.
- Interpret signals sent by the client, where each signal represents a part of the message.
- Display the complete message received from the client.
- Handle messages from different clients one after another without restarting.

**Client Program:**
- Started with the server's PID and the string to be sent to the server.
- Convert the string into a sequence of signals:
  - Use SIGUSR1 for '0'.
  - Use SIGUSR2 for '1'.
- Manage the timing of signals to ensure they are sent in order and correctly received by the server.

**Guidelines:**
- Use functions such as `signal`, `kill`, `getpid`, `malloc`, `free`, `pause`, `sleep`, `usleep`, `exit`.
- Handle errors smoothly to prevent crashes.
- Ensure efficient memory usage without memory leaks.
- Encourage creating test cases for verifying program correctness.

---

**Submission**

Include a Makefile with the project to compile source files with flags `-Wall`, `-Wextra`, and `-Werror`.
Submit all required files, including source files and Makefile, to the designated git repository.

---

**Useful Resources**

- [Sending and Handling Signals in C](https://www.geeksforgeeks.org/signals-c-set-2/)
- [Signal Man Page](https://man7.org/linux/man-pages/man7/signal.7.html)
- [Terminal Emojis](https://emojicombos.com/) (for fun and debugging!)

---

Feel free to customize and extend this program according to your specific needs. Remember to test thoroughly and adhere to best practices in C programming.
