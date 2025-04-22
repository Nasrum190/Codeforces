#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[] = "database.txt"; // Replace with your file's name
    char search[] = bg; // Replace with the string you want to search for

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("File not found.\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];
    int line_number = 0;

    while (fgets(line, sizeof(line), file)) {
        line_number++;
        if (strstr(line, search)) {
            printf("Found '%s' in %s, line %d: %s", search, filename, line_number, line);
        }
    }

    fclose(file);

    return 0;
}

void inner_system(int press)
{
    char  date[20];
    char bg[10];
    char loc[100];



    if (press == 4)
    {
        printf("-----ALL DONOR LIST ------\n");
    }
    else if (press == 5)
    {
        printf("Enter Blood Group: ");
        scanf(" %s", bg);
        printf("Enter Location: ");
        scanf(" %s", loc);
        printf("Enter Date of Donation: ");
        scanf("%s", &date);
          printf("\n\nName: Ashiq Rahman\nID: N12345\nAge: 23\nGender: M\nAddress: Ashkona,Dhaka.\nLast date of blood donation: 05.08.23\nContact Number : 01706364199\n\n\n");


       printf("Name: Riadul Islam\nID: B56789\nAge: 25\nGender: M\nAddress:Ashkona,Dhaka.\nLast date of blood donation: 12.03.23\nContact Number : 01991799414\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

    }
}

int main()
{

    while (1)
    {
        printf("\n\n\t\t\t\t\t\t...........................\n");
        printf("\t\t\t\t\t\t: BLOOD MANAGEMENT SYSTEM :\n");
        printf("\t\t\t\t\t\t:.........................:\n\n\n\n");
        printf("\n\n\t\t\t\t GIVE BLOOD SAVE LIFE\n\n\n");
        printf("\t\t\t\t WELCOME TO BDS, PLEASE AVOID MONEY TRANSACTION\n\n\n\n\n");
        printf("\t\t\t\t press 1 to Create Account\n"
               "\t\t\t\t press 2 to Update Account\n"
               "\t\t\t\t press 3 to Delete Account\n"
               "\t\t\t\t press 4 to Read Donor List\n"
               "\t\t\t\t press 5 to Search For Donor\n"
               "\t\t\t\t press 6 to Cancel Donation\n"
               "\t\t\t\t press 0 to Exit\n");

        int press;
        scanf("%d", &press);
inner_system(press);


    }

    return 0;
}
