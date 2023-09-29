# Exercise 2 C Program: Using Escape Sequences

## Program Description
This C program shows how to use varying escape sequences to print special characters. The intent is to demonstrate the syntax and actual result for different common escape sequences and their respective outputs on the console.

## Output
The expected output of the program is:

```
This program demonstrates the use of escape sequences in C to print special characters:
Single quotes: '
Double quotes: "
Backslashes: \
Tab: 	 and uses a tab
```

## Code Details 

The project directory structure is as follows:

```bash
Exercise-Two-C-Program
│── escape_sequences.c
│── README.md
```

The core part of the program `escape_sequences.c` is shown below:

```c
#include <stdio.h>

int main(void) {
    printf("This program demonstrates the use of escape sequences in C to print special characters:\n");
    printf("Single quotes: '\n");
    printf("Double quotes: \"\n");
    printf("Backslashes: \\ \n");
    printf("Tab: \t and uses a tab\n");
    
    return 0;
}
```

## Key Concepts and Interaction:

| Keyword/Concept | Key Idea | Key Term | Meaning | Hardware Used | How Hardware Interacts | Context |
| --- | --- | --- | --- | --- | --- | --- |
| `#include` | Directive | Preprocessor | A command that tells the compiler to include a library or a header file | Disk/Storage | Loads the content of the specified file from storage into RAM for execution | Used at the start of the program to include necessary libraries, here `stdio.h` for basic I/O operations |
| `<stdio.h>` | Header File | Standard I/O | A file that contains a declaration of I/O functions | Disk/Storage | Loads the file into RAM during program execution | Included in most C programs for input/output operations |
| `printf` | Function | Output | Used for output on the console | CPU, RAM, Monitor | CPU executes the function, retrieves the data from RAM, and outputs it on the monitor | In this code, it's used to display different lines of text and special characters on the console |
| `\n` | Escape sequence | Newline | Inserts a new line | Monitor | The text after this is displayed on the new line on the monitor output | Used in the printf statement for line-breaks |
| `\'` | Escape sequence | Single quote | Prints a single quote | Monitor | The single quote is displayed on the monitor output | Used in printf statement to display a single quote |
| `\"` | Escape sequence | Double quotes | Prints double quotes | Monitor | The double quotes  are displayed on the monitor output | Used in the printf statement to display double quotes |
| `\\` | Escape sequence | Backslash | Prints a backslash | Monitor | The backslash is displayed on the monitor output | Used in the printf statement to display a backslash |
| `\t` | Escape sequence | Horizontal tab | Inserts a tab space | Monitor | The text after this is displayed with a tab space on the monitor output | Used in the printf statement for adding horizontal space |
| `return` | Keyword | Function Exit | Indicates the end of a function | CPU | Breaks the function execution and moves control back to the calling function or OS | Used in main() to indicate successful termination of the program |
| `main` | Function | Program Entry Point | The function where execution begins | CPU | CPU starts the execution from the main function | Every C program begins from the main function |

## Programming Tags 

C programming, Escape Sequences, ANSI C Compliance, User Interface, printf() Function, Special Characters, Readability

## About Me

- [David Merwin](mailto:davidmerwin1992@gmail.com)
- [David Jeffrey Merwin](mailto:merwin1992@protonmail.com)

## Useful Links

1. [David Merwin's GitHub](https://davidmerwin.pieces.cloud/?p=7c7b4fb26e)
2. [Gist Reference](https://gist.github.com/7b45ef3f1017da3f60c8fa88477867dc)

## Submission Guidelines

Similar to the previous submission guidelines, maintain a "standard" C formatting style, single-line, and block comments to explain code, a clear and interactive user interface, use escape sequences for printing special characters and programs 
    must follow ANSI C compliance. Most importantly, each program should be a separate attachment with a .c extension in the submission box for Module 1 Programming Assignment, conforming to the details mentioned in the header comments.

# Exercise 2 C Program 

## Description
This program demonstrates the use of escape sequences in C to print special characters. These escape sequences enable the printing of special characters that are not typically printed directly.

## Code

```bash
──────────────────────────────────────────────────────────────────────
│ Module-One-Programming-Assignments
│   └── Exercise-Two-C-Program
│       └── escape_sequences.c
├── README.md - Description, highlights and summary of the project
───────────────────────────────────
```

```c
// Include the standard IO library
#include <stdio.h>

// The main function - Entry point of the program
int main(void) {
    // Print messages using escape sequences
    printf("This program demonstrates the use of escape sequences in C to print special characters:\n");
    printf("Single quotes: '\n");
    printf("Double quotes: \"\n");
    printf("Backslashes: \\ \n");
    printf("Tab: \t and uses a tab\n");
    
    // Return statement of the main function
    return 0;
}
```

## Understanding Key Concepts

The following table breaks down the key concepts, the hardware interactions, and their context in the program:

| Keyword/Concept | Key Idea | Key Term | Meaning | Hardware Used | How Hardware Interacts | Context |
| --- | --- | --- | --- | --- | --- | --- |
| `#include` | Directive | Preprocessor | A command that tells the compiler to include a library or a header file | Disk/Storage | Loads the content of the specified file from storage into RAM for execution | Used at the start of the program to include necessary libraries, here `stdio.h` for basic I/O operations |
| `<stdio.h>` | Header File | Standard I/O | A file that contains a declaration of I/O functions | Disk/Storage | Loads the file into RAM during program execution | Included in most C programs for input/output operations |
| `printf` | Function | Output | Used for output on the console | CPU, RAM, Monitor | CPU executes the function, retrieves the data from RAM, and outputs it on the monitor | In this code, it's used to display different lines of text and special characters on the console |
| `\n` | Escape sequence | Newline | Inserts a new line | Monitor | The text after this is displayed on the new line on the monitor output | Used in the printf statement for line-breaks |
| `\'` | Escape sequence | Single quote | Prints a single quote | Monitor | The single quote is displayed on the monitor output | Used in printf statement to display a single quote |
| `\"` | Escape sequence | Double quotes | Prints double quotes | Monitor | The double quotes  are displayed on the monitor output | Used in the printf statement to display double quotes |
| `\\` | Escape sequence | Backslash | Prints a backslash | Monitor | The backslash is displayed on the monitor output | Used in the printf statement to display a backslash |
| `\t` | Escape sequence | Horizontal tab | Inserts a tab space | Monitor | The text after this is displayed with a tab space on the monitor output | Used in the printf statement for adding horizontal space |
| `return` | Keyword | Function Exit | Indicates the end of a function | CPU | Breaks the function execution and moves control back to the calling function or OS | Used in main() to indicate successful termination of the program |
| `main` | Function | Program Entry Point | The function where execution begins | CPU | CPU starts the execution from the main function | Every C program begins from the main function |

## Tags 
C Programming, Escape Sequences, ANSI C Compliance, User Interface, printf() Function, Special Characters, Readability

## People 
- David Merwin - davidmerwin1992@gmail.com
- David Jeffrey Merwin - merwin1992@protonmail.com

## Related Links
- [David Merwin's GitHub](https://davidmerwin.pieces.cloud/?p=7c7b4fb26e)
- [Gist Reference](https://gist.github.com/7b45ef3f1017da3f60c8fa88477867dc)

## Submissions
In the submission box for Module 1 Programming Assignment, each program should be a separate attachment with a .c extension. This approach is in line with the "standard" C formatting and style, single-line and block comments to explain code, a clear and interactive user interface, use of escape sequences for printing special characters, and programs must follow ANSI C compliance. The program details must match the ones in the header comments.





/*
2.  Write a program that uses the appropriate escape sequences to output the following:

This program outputs:
'Single quotes'
"Double quotes"
\Backslashes\
       and uses a tab
*/


/************************************************
* Name: David Merwin
* Date Created: 2023
*
* Description: This program demonstrates the use
*              of escape sequences in C to print
*              special characters.
*************************************************/
#include <stdio.h>

int main(void) {
    
    // Outputs a message to the user
    printf("This program demonstrates the use of escape sequences in C to print special characters:\n");
    
    // Outputs single quotes
    printf("Single quotes: '\n");
    
    // Outputs double quotes
    printf("Double quotes: \"\n");
    
    // Outputs backslashes
    printf("Backslashes: \\ \n");
    
    // Outputs a tab
    printf("Tab: \t and uses a tab\n");
    
    return 0;
}

/*
Submission Requirements:
Provide a header comment for every program in this course similar to:
    /************************************************
    * filename: toes.c
    * Exercise: Module 1, Exercise 2
    * Name: John Doe
    * Date Created: January 1, 2015
    *
    * Description: This program calculates ......
    *************************************************/ 
/* 
Use "standard" C formatting and style (see Listing 2.2).
Insert blank lines to separate "sections."
Indent statements within a block of code.
Put calculations in a separate statement (not embedded in printf).
Add comments within the code, especially ALL calculations.
Incorporate a good, clean, informative, friendly user interface. 
Display a brief program description to the user.
Insert blank lines where appropriate for readability.
Clearly identify what the output represents to the user.
Provide example user inputs if necessary.
All programs must use "int main()" with "return 0;" to be ANSI C compliant.
Complete the programming exercises and submit your answers into the drop box at the end of this module by 
attaching your .c program files that you compiled and executed by clicking 'submit' on the right side of the window. 
Each program should be a separate attachment so the Drop Box for the Module 1 Programming Assignment should have five files attached, each with a .c file extension.
The file names of attached programs should match the file name identified in the header comments of each program.

*/

https://davidmerwin.pieces.cloud/?p=7c7b4fb26e

https://gist.github.com/7b45ef3f1017da3f60c8fa88477867dc
