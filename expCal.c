#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>

#define VALIDATE_NUMBER_INPUT 0
#define VALIDATE_STRING_INPUT 1
#define FILENAME_BIN "D:\\expcal.bin"
#define MAXRECORDS 20

int menu();

void getInput(int r, int c, char *label, char *input, int isDigit);
void clearField();
void gotoRowColumn(int row, int col);
void getDateTime(char *dateTime);
void table(int a);
void savedata();
void save_to_structure();

void add_expense();
void view_expense();
void update_expense();
void delete_expense();
void export_to_CSV();
void updateFile(char *oldFile, char *newFile);
void update_sNo();

int serialNum = 1;
int numOfRecordsAdded = 0;
int isChangeFound;

typedef struct ExpensesCalculator
{
    int serial_n;
    char exptype[50];
    char amount[15];
    char datetime[30];
} ExpensesCalculator;

ExpensesCalculator expense[MAXRECORDS];

int main()
{
    system("cls");

    // update_sNo();

    save_to_structure();

    int choice = 0;

    while (1)
    {
        if (choice == 1)
        {
            add_expense();
        }

        else if (choice == 2)
        {
            view_expense();
            gotoRowColumn(28, 79);
            printf("Press any key to continue...!");
            getchar();
        }

        else if (choice == 3)
        {
            update_expense();
        }

        else if (choice == 4)
        {
            delete_expense();
        }

        else if (choice == 5)
        {
            export_to_CSV();
        }

        else if (choice == 6)
        {
            savedata();
            break;
        }

        system("cls");
        choice = menu();
    }
}

int menu()
{
    gotoRowColumn(13, 15);
    printf("----------------------");
    gotoRowColumn(14, 15);
    printf("  Expense Calculator");
    gotoRowColumn(15, 15);
    printf("----------------------");

    gotoRowColumn(17, 15);
    printf("[1] Add Expense");
    gotoRowColumn(18, 15);
    printf("[2] VEIW Expense");
    gotoRowColumn(19, 15);
    printf("[3] UPDATE Expense");
    gotoRowColumn(20, 15);
    printf("[4] DELETE Expense");
    gotoRowColumn(21, 15);
    printf("[5] Export To CSV");
    gotoRowColumn(22, 15);
    printf("[6] Exit");

    for (int i = 1; i <= 22; i++)
    {
        gotoRowColumn(i + 8, 75);
        // printf("\033[%d;%dH", i + 8, 75);
        printf("|");
    }

    char input[10];
    getInput(24, 15, "Enter Selection = ", input, 0);

    return atoi(input);
}

void getInput(int r, int c, char *lable, char *input, int isDigit)
{
    do
    {
        gotoRowColumn(r, c);
        clearField();
        printf("%s", lable);
        fgets(input, 20, stdin);

        if (isDigit == VALIDATE_NUMBER_INPUT)
        {
            if (atoi(input) > 0)
                break;
        }
        else if (isDigit == VALIDATE_STRING_INPUT)
        {
            if (atoi(input) == 0 && strlen(input) != 1)
                break;
        }
    } while (1);
}

void gotoRowColumn(int row, int col)
{
    printf("\033[%d;%dH", row, col);
}

void getDateTime(char *dateTime)
{
    time_t now = time(NULL);
    struct tm *t = localtime(&now);

    sprintf(dateTime, "%02d/%02d/%04d %02d:%02d %s",
            t->tm_mon + 1, t->tm_mday, t->tm_year + 1900,
            t->tm_hour % 12 ? t->tm_hour % 12 : 12,
            t->tm_min, t->tm_hour < 12 ? "AM" : "PM");
}

void updateFile(char *oldFile, char *newFile)
{
    remove(oldFile);
    rename(newFile, oldFile);
}

void update_sNo()
{
    // need to change useless loop

    // FILE *file = fopen(FILENAME, "r");

    // int x = 1;
    // char type[100], amount_[20], date[15];

    // while (fscanf(file, "%d,%[^,],%[^,],%[^\n]", &x, type, amount_, date) == 4)
    //     serialNum = x + 1;

    // fclose(file);
}

void clearField()
{
    printf("                                                         \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
}

void table(int line)
{
    for (int a = 1; a <= 48; a++)
        printf("-");

    gotoRowColumn(15, 79);
    printf("EXPENSE TYPE");

    gotoRowColumn(15, 94);
    printf("|");

    gotoRowColumn(15, 96);
    printf("AMOUNT");

    gotoRowColumn(15, 103);
    printf("|");

    gotoRowColumn(15, 106);
    printf("DATE");

    gotoRowColumn(16, 79);

    for (int b = 1; b <= 48; b++)
        printf("-");

    for (int c = 1; c <= line; c++)
    {
        printf("\033[%d;%dH", c + 16, 94);
        printf("|");
    }

    for (int d = 1; d <= line; d++)
    {
        printf("\033[%d;%dH", d + 16, 103);
        printf("|");
    }
}

void save_to_structure()
{
    FILE *file = fopen(FILENAME_BIN, "rb");

    if (file != NULL)
    {
        // method 1 to read file record size.
        // fseek(file, 0, SEEK_END);
        // long rcount = ftell(file);
        // numOfRecordsAdded = (int)(rcount / sizeof(struct ExpensesCalculator));

        // method 2 to read file with record size.
        size_t t = fread(expense, sizeof(struct ExpensesCalculator), MAXRECORDS, file); // 2
        // size_t t = fread(expense, sizeof(e[0]), MAXRECORDS, file);

        numOfRecordsAdded = t;
        serialNum = numOfRecordsAdded + 1;
        isChangeFound = numOfRecordsAdded;
    }
    fclose(file);
}

void add_expense()
{
    // update_sNo();

    gotoRowColumn(10, 79);
    printf("[ Add ExpensesCalculator ]");

    if (numOfRecordsAdded < MAXRECORDS)
    {
        char dateTime[30];
        getDateTime(dateTime);

        expense[numOfRecordsAdded].serial_n = serialNum;

        getInput(12, 79, "Enter Expense Type : ", expense[numOfRecordsAdded].exptype, 1);
        getInput(13, 79, "Enter Amount = ", expense[numOfRecordsAdded].amount, 0);

        expense[numOfRecordsAdded].exptype[strlen(expense[numOfRecordsAdded].exptype) - 1] = '\0';
        expense[numOfRecordsAdded].amount[strlen(expense[numOfRecordsAdded].amount) - 1] = '\0';

        strcpy(expense[numOfRecordsAdded].datetime, dateTime);

        // isChangeFound =1;
        serialNum++;
        numOfRecordsAdded++;
    }
    else
    {
        gotoRowColumn(12, 79);
        printf("Record limit exceded. Max Size:%d", MAXRECORDS);
        gotoRowColumn(15, 79);
        printf("Press any key to see more...!");
        getch();
    }
}

void view_expense()
{
    gotoRowColumn(10, 79);
    printf("[ View ExpensesCalculator ]");

    gotoRowColumn(14, 79);
    table(10);

    int record = 1;
    int size = 10;

    int rows = 17;

    for (int i = 0; i < numOfRecordsAdded; i++)
    {
        gotoRowColumn(rows, 79);
        printf("%d.", expense[i].serial_n);

        gotoRowColumn(rows, 82);
        printf("%s", expense[i].exptype);

        gotoRowColumn(rows, 96);
        printf("%s", expense[i].amount);

        gotoRowColumn(rows, 106);
        printf("%s", expense[i].datetime);

        if (record == size)
        {
            gotoRowColumn(28, 79);
            printf("Press any key to see more...!");
            getch();
            size += 10;

            for (int r = 17; r <= 17 + 10; r++)
            {
                for (int c = 79; c <= 79 + 50; c++)
                {
                    if (c == 94 || c == 103)
                        continue;

                    gotoRowColumn(r, c);
                    printf(" ");
                }
            }
            rows = 16;
        }
        rows++;
        record++;
    }
}

void update_expense()
{
    gotoRowColumn(10, 79);
    printf("[ Update ExpensesCalculator ]");

    char sNo[20];
    getInput(12, 79, "Enter Serial Number = ", sNo, 0);

    int input = atoi(sNo);

    char selection[5];
    int record_found = 0;

    for (int i = 0; i < numOfRecordsAdded; i++)
    {
        if (input == expense[i].serial_n)
        {
            gotoRowColumn(14, 79);
            table(2);

            gotoRowColumn(17, 79);
            printf("%d. %s", expense[i].serial_n, expense[i].exptype);

            gotoRowColumn(17, 97);
            printf("%s", expense[i].amount);

            gotoRowColumn(17, 106);
            printf("%s", expense[i].datetime);

            do
            {
                getInput(20, 79, "Press 1 To Update and 2 To Cancel ", selection, VALIDATE_NUMBER_INPUT);

            } while (!(atoi(selection) == 1 || atoi(selection) == 2));

            if (atoi(selection) == 1)
            {
                getInput(22, 79, "Enter Expense Type : ", expense[i].exptype, VALIDATE_STRING_INPUT);
                getInput(24, 79, "Enter Amount = ", expense[i].amount, VALIDATE_NUMBER_INPUT);

                expense[i].exptype[strlen(expense[i].exptype) - 1] = '\0';
                expense[i].amount[strlen(expense[i].amount) - 1] = '\0';
            }
            record_found = 1;
        }
    }

    if (atoi(selection) == 1)
    {
        gotoRowColumn(26, 79);
        printf("Record is updated sucessfully");
        gotoRowColumn(27, 79);
        printf("Press any key to continue... ");
        getch();
    }

    if (record_found == 0)
    {
        gotoRowColumn(23, 79);
        printf("NO RECORD FOUND !");
        gotoRowColumn(25, 79);
        printf("PRESS ANY KEY TO CONTINUE...! ");
        getch();
    }
}

void delete_expense()
{
    gotoRowColumn(10, 79);
    printf("[ Delete ExpensesCalculator ]");

    char sNo[20];
    int record_found = 0;
    getInput(12, 79, "Enter Serial Number = ", sNo, VALIDATE_NUMBER_INPUT);
    int input = atoi(sNo);

    char selection[5];

    for (int i = 0; i < numOfRecordsAdded; i++)
    {
        if (input == expense[i].serial_n)
        {
            gotoRowColumn(14, 79);
            table(2);

            gotoRowColumn(17, 79);
            printf("%d. %s", expense[i].serial_n, expense[i].exptype);

            gotoRowColumn(17, 96);
            printf("%s", expense[i].amount);

            gotoRowColumn(17, 106);
            printf("%s", expense[i].datetime);

            do
            {
                getInput(20, 79, "Press 1 To Delete and 2 To Cancel ", selection, VALIDATE_NUMBER_INPUT);

            } while (!(atoi(selection) == 1 || atoi(selection) == 2));

            if (atoi(selection) == 1)
            {
                expense[i] = expense[i + 1];
                numOfRecordsAdded--;
            }
            record_found = 1;
        }
    }

    if (atoi(selection) == 1)
    {
        gotoRowColumn(24, 79);
        printf("RECORD IS SUCCESSFULLY DELETED");
        gotoRowColumn(25, 79);
        printf("PRESS ANY KEY TO CONTINUE... ");
        getch();
    }

    if (record_found == 0)
    {
        gotoRowColumn(23, 79);
        printf("NO RECORD FOUND !");
        gotoRowColumn(25, 79);
        printf("PRESS ANY KEY TO CONTINUE...! ");
        getch();
    }
}

void export_to_CSV()
{
    gotoRowColumn(10, 79);
    printf("[ Export To CSV ]");

    FILE *file = fopen("D:\\report_to_csv.csv", "w");

    fprintf(file, "%s,%s,%s,%s\n", "Sr #", "Expense Type", "Amount", "Date Time");

    for (int i = 0; i < numOfRecordsAdded; i++)
    {
        fprintf(file, "%d,%s,%s,%s\n", expense[i].serial_n, expense[i].exptype, expense[i].amount, expense[i].datetime);
    }

    fclose(file);

    gotoRowColumn(13, 79);
    printf("FILE IS SUCCESSFULLY EXPORTED TO CSV");

    gotoRowColumn(28, 79);
    printf("Press any key to continue...! ");

    getch();
}

void savedata()
{
    if (numOfRecordsAdded > isChangeFound)
    {
        gotoRowColumn(10, 79);
        printf("[ SAVE DATA ]");

        char choice[5];
        gotoRowColumn(12, 79);
        printf("Old data (if exists) will be removed. Do you want to save New Changes.");
        getInput(15, 79, "Press 1 To save data or 2 for cancel ", choice, VALIDATE_NUMBER_INPUT);

        if (atoi(choice) == 1)
        {
            FILE *file = fopen(FILENAME_BIN, "wb");
            fwrite(expense, sizeof(struct ExpensesCalculator), numOfRecordsAdded, file); // 110*3
            fclose(file);
        }
    }
}