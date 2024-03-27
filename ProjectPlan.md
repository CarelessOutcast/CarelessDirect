# Project Planning 

## Why 

I want to create an exclusively private chat server that can be hosted by
individuals. Mostly just for fun. I want to translate the skills I picked up
in distributed systems(java/python) to c++. While I'm at it, I'm considering
adding a gui to makes things more interesting.

---

## User Story:

Create a client server gui application that will establish a line of
communication between multiple people. The first option that an individual
sees is creating a session, or connecting to a session. In creating a session,
it hands the a private execuable to connect to the session. They send this
executable to their friend; Once, the executable is run, they connect to the
client server (Super unsafe, but I'm working with a proof of concept here).
This is going to work as a peer-to-peer system, where each individual is going
to be able to connect to eachother.

---

## Breaking it down:

### Day 1:

The first day is going into planning the project and setting up the
environment. I need to establish the build system, the libraries that I'm
going to be using. I want to set up the testing software and the testing
libraries. As for planning the project, I want to clearly define the exactly
I'm expecting from this project. 

- Project Planning
    - Plan the bare minimum of what I expect
    - Mapping out the logic

- Set up the environment
    - Set up CMake
    - Add the gui libraries, sockets, threading, etc...

### Day 2:

Start to create the core logic. I will most likely set up the basic window.
Create an input box, create the output box, create the send button. Create the
server funcationallity, and the server threads (object oriented approach). 

- Create basic client window
- Create server infrastructure

### Day 3:

Incorporating a better visual design for client side. Re-evalutate logic and
writing tests for the client and server. Adding the functions to the
production pipeline. Thinking about extra features to incorporate.

- Production pipeline establishing. 
- Focus on designing gui interface.
- Adding a testing framework.
- Brainstorm extra features.

### Day 4:

Incorporate the extra feature. Finish up the project guidebook. Check commit
etiquette. Start to look into free hosting of the project for the pipeline.

- Hosting to Pipeline integration (actions).
- Start writing the guidebook with screenshots.
- Start making tickets for the new features. 

### Day 5:

Free Backup

### Day 6:

Free Backup

### Day 7:

Free Backup


## Resources:

[Better commit messages](https://www.freecodecamp.org/news/how-to-write-better-git-commit-messages/).

