#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

// function name
void PrintAllRecords();
void AddRecord();
void DeleteRecord();
void PrintNumRecords();
void PrintDatabaseSize();
void PrintNumChanges(bool print);

// variable
static int changes = 0;
char databaseName[50];

int main(int argc, char *argv[]) {
    int selection;

    // for command-line argument
    if (argc < 2) {
        printf("Error: A database name is required to continue.\n");
        return 1;  
    }

    // store data from the command-line argument
    snprintf(databaseName, sizeof(databaseName), "%s", argv[1]);

    // menu system for user to enter
    while (1) {
        // display
        printf("\nMenu for database: %s\n", databaseName);
        printf("1) Print all records\n");
        printf("2) Add record\n");
        printf("3) Delete the last record\n");
        printf("4) Print number of records\n");
        printf("5) Print database size\n");
        printf("6) Print number of changes\n");
        printf("7) Exit\n");
        printf("Please enter your selection > ");
        
        // Read user informotion
        if (scanf("%d", &selection) != 1) {  
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;  
        }

        // process user selection
        switch (selection) {
            case 1:
                PrintAllRecords();
                break;
            case 2:
                AddRecord();
                break;
            case 3:
                DeleteRecord();
                break;
            case 4:
                PrintNumRecords();
                break;
            case 5:
                PrintDatabaseSize();
                break;
            case 6:
                PrintNumChanges(true);
                break;
            case 7:
                printf("Exiting..\n");
                return 0;
            default:
                printf("Invalid selection. Please try again.\n");
                break;
        }
    }
    return 0;
}

// function that print all records in the database
void PrintAllRecords() {
    printf("You have entered the Print all records func for database: %s\n", databaseName);
}

// function that add a new record in the database
void AddRecord() {
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;

    // ask user to enter
    printf("Enter part number: ");
    scanf("%d", &partNumber);

    printf("Enter part name: ");
    scanf(" %[^\n]", partName); 

    printf("Enter part size: ");
    scanf("%f", &partSize);

    printf("Enter part size metric: ");
    scanf("%s", partSizeMetric);

    printf("Enter part cost: ");
    scanf("%f", &partCost);

    // display result
    printf("You entered\n");
    printf("Part number = %d\n", partNumber);
    printf("Part name = \"%s\"\n", partName);
    printf("Part size = %.2f\n", partSize);
    printf("Part size metric = \"%s\"\n", partSizeMetric);
    printf("Part cost = $%.2f\n", partCost);
    
    // update the change counter
    PrintNumChanges(false);
}

// function for delete
void DeleteRecord() {
    printf("You have entered the delet last record func for database: %s\n", databaseName);
}

// function for print the number of records
void PrintNumRecords() {
    printf("You have entered the Print number of records func for database: %s\n", databaseName);
}

// function for print the database size
void PrintDatabaseSize() {
    printf("You have enterd the print database size func for database: %s\n", databaseName);
}

// function to track and show update of the number of adjust for data
void PrintNumChanges(bool print) {
    if (print) {
        printf("You have modified the database %d times\n", changes);
    } else {
        changes++; 
        printf("%d modifications so far\n", changes);
    }
}