# inet3101 lab1
code for inet3101-lab1
simple command-line menu for an Inventory management system.
ReadMe's in GIthub

Author:
Hayat Muhumed 
collaborate with Sulekha Abdi

 Program:  It allows users to use the database using a menu display to do tasks such as printing records, adding new records, removing the last record, displaying the total number of records, figuring out the database size, and displaying the number of database modifications.

Menu Definition and Usage
print all records: Displays all current records in the database.
Add record Prompts: the user to enter details for a new part and adds it to the database.
Delete last recor: Removes the most recently added record from the database.
Print number of records: Displays the total count of records in the database.
Print database size: shows the size of the database in bytes.
Print number of changes: Displays how many times the database has been modified.
Exit: Ends the program.

Function Definitions
1. void printAllRecords()
    Input: None
   utput: Displays all records or a message if no records exist.

2. void addRecord
  Input: User inputs for part details.
  Output: Confirms the addition of the record.

3. void deleteLastRecord
   Input None
   Output Confirms deletion or  if there are no records.

4. void printNumRecords()
   Input: None
   Output: Displays the total number of records.

5. void printDatabaseSize()
   Input None
   Output: displays the size of the database in bytes.

6. void printNumChanges(bool)
   Input: Integer indicating whether to print the count of changes.
   Output: Displays or increments the count of changes made.

7. Required Files
- myLab1.c: C source code for the program.
- README.txt: This document.


To compile the program, use: gcc -o lab1 lab1.c
 ./lab1 myDatabase
  
Sources used to help with  outputs/inputs
https://www.programiz.com/c-programming/c-arrays 
https://www.programiz.com/c-programming/c-input-output 