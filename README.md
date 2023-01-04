# Parallel String Processing using Multithreading in C++
This code creates four threads to process a string entered by the user. 
The input thread takes the string input from the user, the reverse thread 
reverses the string, the capital thread capitalizes the characters of the 
string, and the shift thread shifts each character of the string two times 
(e.g., 'a' becomes 'c'). All the threads wait for the input thread to finish, 
and then start their work simultaneously. The program also handles exceptions 
for the input thread and displays the state of each thread.

## Working
![Working](https://github.com/aa22dev/parallel-string-processing/blob/main/img/working.png?raw=true)

## Usage
To use this program, the user needs to follow these steps:
1.	Compile and run the program.
2.	Enter a string when prompted by the program.
3.	Wait for the program to finish processing the input string.
4.	The program will print the reversed, capitalized, and shifted versions of the input string.

## Explanation
### Libraries
|Libraries|Description|
|:----|:----|
|iostream|For using console input and output operations|
|string|For using string data type and string manipulation functions|
|thread|For creating and managing threads|

### Variables
|Variables|Data Type|Scope|Description|
|:----|:----|:----|:----|
|str|string|local|This is a string variable that stores the input string entered by the user. It is passed as a reference to the input function so that it can be modified by the function. It is also passed as an argument to the reverse, capital, and shift functions so that they can operate on the input string.|

### Functions
| Functions                                                                                                                                                                                                                               | Parameters                                                                                                                                                                                                             | Description                                                                                                                                                                                                        |
|:----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|:-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| main()                                                                                                                                                                                                                                  | 	None	                                                                                                                                                                                                                 | The main function creates and waits for the input thread to finish, then creates and waits for the reverse, capital, and shift threads to finish using the **"join"** function and prints their state.             |
| input()	                                                                                                                                                                                                                                | string *str	                                                                                                                                                                                                           | The input function takes a string pointer, reads a line of input from the user, and stores it in the string pointed to by the argument, and has a try-catch block to handle any exceptions.                        |
| reverse()	                                                                                                                                                                                                                              | string str	                                                                                                                                                                                                            | The reverse function takes a string as an argument and simply iterates through the characters of the string in reverse order, printing each character as it goes.                                                  |
| capital()	| string str	                                                                                                                                                                                                            | The capital function takes a string, iterates through its characters, converts them to uppercase and prints them, and has a try-catch block to handle any exceptions that may occur while capitalizing the string. |
| shift()	| string str	| The shift function takes a string, iterates through its characters, shifts them by two places and prints them, and has a try-catch block to handle any exceptions that may occur while shifting the string.        |

