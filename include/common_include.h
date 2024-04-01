
#include <errno.h>      // errnos!
#include <stdio.h>      // 
#include <stdlib.h>     // 
#include <string>       // 

#include <dirent.h>     // opendir(), readdir(), closedir()
#include <fcntl.h>      // close()
#include <netdb.h>      // getaddrinfo()
#include <netinet/in.h> // sockaddr_in() and htons()

#include <sys/socket.h> // socket()
#include <sys/stat.h>   // open(), read(),write(), stat()
#include <sys/types.h>  // waitpid(), opendir()
#include <sys/wait.h>   // waitpid()
#include <unistd.h>     // unlink()
                        
#include <iostream>     // 
