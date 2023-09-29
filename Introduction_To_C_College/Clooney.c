🔤 Title 

Exercise 1 C Program 

📝 Description ==============================

This code defines a program that declares and initializes variables with information provided using correct data types and outputs the output. It also includes submission requirements for every program in this course, including header comment

1. Write a program that declares and initializes the following variable names with the information provided using correct data types and outputs the information using printf() with the correct format specifiers.

    First_name = George
Middle_Initial = T
Last_name = Clooney
Year_born = 1961
Height_in_meters = 1.8
Net_worth_USD = 512,345,678
   Output should look exactly as shown below using printf() with the above initialized variables: 

   George T Clooney, born 1961, is 1.8 meters tall and is worth $512345678
/************************************************
* filename: clooney.c
* Exercise: Module 1, Exercise 1
* Name: David Merwin
* Date Created: 2023
*
* Description: Program of exercise 1
*************************************************/
#include <stdio.h>

   int main(void) {
  // variables
  char First_name[] = "George";
  char Middle_Initial = 'T';
  char Last_name[] = "Clooney";
  int Year_born = 1961;
  float Height_in_meters = 1.8;
  long Net_worth_USD = 512345678;

  printf("%s %c %s, born %d, is %.1f meters tall and is worth $%ld\n", First_name, Middle_Initial, Last_name, Year_born, Height_in_meters, Net_worth_USD);

  return 0;
}
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
Use "standard" C formatting and style (see Listing 2.2).Insert blank lines to separate "sections."Indent statements within a block of code.Put calculations in a separate statement (not embedded in printf).
Add comments within the code, especially ALL calculations.Incorporate a good, clear, informative, friendly user interface. Display a brief program description to the user.Insert blank lines where appropriate for readability.
learly identify what the output represents to the userProvide example user inputs if necessary.All programs must use "int main()" with "return 0;" to be ANSI C compliant.Complete the programming exercises and submit your answers
into the drop box at theend of this module by attaching your .c program files that you compiled and executed byclicking 'submit' on the right side of the window. Each program should be a separate attachment
so the Drop Box for the Module 1 Programming Assignment should have five files attached,each with a .c file extension. The file names of attached programs should match the file name identified in the header comments of each program.

==================================

```c
#include <stdio.h>

int main(void) {
    // variables
    char First_name[] = "George";
    char Middle_Initial = 'T';
    char Last_name[] = "Clooney";
    int Year_born = 1961;
    float Height_in_meters = 1.8;
    long Net_worth_USD = 512345678;

    printf("%s %c %s, born %d, is %.1f meters tall and is worth $%ld\n", First_name, Middle_Initial, Last_name, Year_born, Height_in_meters, Net_worth_USD);

    return 0;
}
```

🏷️ Tags =====================================

#PROGRAM_DESCRIPTION, #VARIABLE_NAMES, #HEADER_COMMENT, #CODE_FORMATTING, #PRINTF()_FUNCTION, #READABILITY, #FIRST_NAME_ATTRIBUTE, #C_PROGRAM, #JAVASCRIPT_IMAGE, #LAST_NAME_ATTRIBUTE, #VARIABLE_INITIALIZATION, #C_PROGRAMMING, #YEAR_BORN_ATTRIBUTE, #USER_INTERFACE, #DATA_TYPES, #PRINTF()_FORMAT_SPECIFIERS, #ANSI_C_COMPLIANCE, #FORMAT_SPECIFIERS, #HEIGHT_IN_METERS_ATTRIBUTE

👥 People ===================================

David Merwin - davidmerwin1992@gmail.com
David Jeffrey Merwin - merwin1992@protonmail.com

🔗 Related Links ============================

https://davidmerwin.pieces.cloud/?p=40bb4cb6ae
