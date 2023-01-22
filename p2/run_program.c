#include "run_program.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


// A)
//  Starts a program that may be specified by its full path and name (i.e., /usr/bin/who)
//  or only by its name if it is located in one of the directories contained in the PATH en-
//  vironment variable. Do not use system().


// B)
//  Passes the supplied arguments on to the new process.

// C)
//  Waits for the newly created process to exit.


// D)
//  Returns the special error value 127 to report an error condition and 0 to indicate success

// EDGE CASES 
//  • If file path is NULL, you should return the special error value. If argv is NULL, you
//  should run the program without arguments. (Your program starter should not be
//  terminated by an exception in either of the two cases.)



// if (pid == -1) {
//         printf("Error starting program\n");
//     } else {
//         printf("Program exited with status: %d\n", status);
//     }
// return 0 -> exec failed

#define ERROR_CODE 127

int run_program(char *file_path, char *argv[]) {
    (void) file_path;
    (void) argv;

    if (file_path != NULL) {
        if (*argv != NULL) {
        execl(file_path, *argv);
        wait(NULL);
        return 0;
        }
        execl(file_path, file_path, NULL);
        wait(NULL);
        return 0;
    }
    return ERROR_CODE;
   }




   



    // remember to return ERROR_CODE on error.



    // pid_t pid = fork();
    // switch((pid = fork())) {
    //     case -1: 
    //         return ERROR_CODE;
    //         break;
    //     case 0:
    //         return 0;
    //     default:
    //         wait(NULL);
    //         return 0;







//A)

// • Starts a program that may be specified by its full path and name (i.e., /usr/bin/who)
// or only by its name if it is located in one of the directories contained in the PATH en-
// vironment variable. Do not use system().

// • Passes the supplied arguments on to the new process.

// • Waits for the newly created process to exit.

// • Returns the special error value 127 to report an error condition and 0 to indicate
// success.

// int run_program(char *file_path, char *argv[]);

// • If file path is NULL, you should return the special error value. If argv is NULL, you
// should run the program without arguments. (Your program starter should not be
// terminated by an exception in either of the two cases.)
