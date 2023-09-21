# CPP
CPP Moudules
#Exercise 00: Megaphone
#Description:
In this exercise, you are required to write a C++ program that converts input text to uppercase. The program should take an input string as a command-line argument and then output the same text in uppercase letters.

#Usage:
To use the program, you can run it from the command line like this:

#bash
./megaphone "text to be converted"
The program will then convert the provided text to uppercase and print it to the console.

#Exercise 01: My Awesome PhoneBook
Description:
This exercise involves creating a simple phonebook application using C++ classes. You need to implement two classes:

PhoneBook: Represents a phonebook and can store up to 8 contacts. If a user attempts to add a 9th contact, it should replace the oldest contact. Dynamic memory allocation is not allowed.

Contact: Represents a phonebook contact and should have fields for first name, last name, nickname, phone number, and a "darkest secret."

Usage:
The program should start with an empty phonebook. Users can interact with the phonebook using three commands: ADD, SEARCH, and EXIT.

ADD allows users to add a new contact to the phonebook.
SEARCH displays a list of contacts, and the user can select one to view detailed information.
EXIT quits the program.
General Rules
Compiling:

Compile your C++ code with the following flags: -Wall -Wextra -Werror -std=c++98.
Formatting and Naming Conventions:

Exercise directories should be named ex00, ex01, and so on.
Follow specific naming conventions for files, classes, functions, and attributes as mentioned in the guidelines.
Class names should be in UpperCamelCase format.
Allowed/Forbidden:

You can use the C++ standard library but not other external libraries.
Certain functions like *printf(), *alloc(), and free() are forbidden.
Avoid using using namespace <ns_name> and friend keywords.
STL is allowed only in Module 08 and 09.
Design Requirements:

Avoid memory leaks when allocating memory.
Design your classes following the Orthodox Canonical Form from Module 02 to Module 09, unless specified otherwise.
Avoid putting function implementations in header files (except for function templates).
Use include guards to prevent double inclusion.
These are the key points for each exercise and the general rules to follow. Detailed instructions and additional information for each exercise can be found in their respective folders or the provided guidelines.
