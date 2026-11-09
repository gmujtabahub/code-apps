#include <iostream>
#include <conio.h>

using namespace std;

#define SIZE 10
int records = 0;

typedef struct student_records
{
private:
    // char name[50];
    string name;
    char grade;
    float percentage;

public:

    student_records()
    {
        name="Ali";
        grade='A';
        percentage=77;
        rollno=1;

        records=1;
    }

    int rollno;

    void add_student_records()
    {
        cout << "STUDENT NAME = ";
        cin >> name;

        cout << "STUDENT ROLL NUMBER = ";
        cin >> rollno;

        cout << "STUDENT GRADE = ";
        cin >> grade;

        cout << "STUDENT PERCENTAGE = ";
        cin >> percentage;

        system("cls");
    }

    void view_student_record()
    {
        cout << "STUDENT NAME = " << name << endl;
        cout << "STUDENT ROLL NUMBER = " << rollno << endl;
        cout << "STUDENT GRADE = " << grade << endl;
        cout << "STUDENT PERCENTAGE = " << percentage << endl;
        cout << "================================" << endl;
    }

    void search_rollno()
    {
        cout << "STUDENT NAME = " << name << endl;
        cout << "STUDENT ROLL NUMBER = " << rollno << endl;
        cout << "STUDENT GRADE = " << grade << endl;
        cout << "STUDENT PERCENTAGE = " << percentage << endl;
    }

    void edit_student_record()
    {
        cout << "STUDENT NAME = ";
        cin >> name;

        cout << "STUDENT ROLL NUMBER = ";
        cin >> rollno;

        cout << "STUDENT GRADE = ";
        cin >> grade;

        cout << "STUDENT PERCENTAGE = ";
        cin >> percentage;

        system("cls");
    }

    void delete_student_record()
    {
        cout << "STUDENT NAME = " << name << endl;
        cout << "STUDENT ROLL NUMBER = " << rollno << endl;
        cout << "STUDENT GRADE = " << grade << endl;
        cout << "STUDENT PERCENTAGE = " << percentage << endl;
        cout << "================================" << endl;
    }
} sturec;

int main()
{
    system("cls");

    sturec s[SIZE];

    int choice, rollno;

    do
    {
        cout << "[1] ADD STUDENT RECORD" << endl;
        cout << "[2] VIEW STUDENT RECORD" << endl;
        cout << "[3] SEARCH STUDENT RECORD" << endl;
        cout << "[4] EDIT STUDENT RECORD" << endl;
        cout << "[5] DELETE STUDENT RECORD" << endl;
        cout << "[6] EXIT" << endl;

        cout << "Enter Choice = ";

        cin >> choice;

        system("cls");

        if (records < SIZE)
        {
            if (choice == 1)
            {
                s[records].add_student_records();

                // s[records].name = "sdf";
                // s[records].rollno = 1;
                // s[records].grade = 'A';
                // s[records].percentage = 22;

                records++;
            }

            else if (choice == 2)
            {
                int i;
                for (i = 0; i < records; i++)
                {
                    s[i].view_student_record();
                }

                if (i == 0)
                    cout << "RECORD IS NOT AVAILABLE" << endl;

                cout << "PRESS ANY KEY TO CONTINUE ...";

                getch();

                system("cls");
            }

            else if (choice == 3)
            {
                int i;

                cout << "Enter Roll Number = ";

                cin >> rollno;

                for (i = 0; i < records; i++)
                {
                    if (rollno == s[i].rollno)
                        s[i].search_rollno();
                }

                if (i == 0 || i != rollno)
                    cout << "RECORD IS NOT FOUND" << endl;

                cout << "PRESS ANY KEY TO CONTINUE ...";

                getch();

                system("cls");
            }

            else if (choice == 4)
            {
                cout << "Enter Roll Number = ";

                cin >> rollno;

                int i;

                for (i = 0; i < records; i++)
                {
                    if (rollno == s[i].rollno)
                    {
                        s[i].edit_student_record();
                        break;
                    }
                }

                // if (i != records)
                //     cout << "RECORD EDITED SUCCESSFULLY" << endl;

                // else if (i == 0)
                //     cout << "NO RECORD AVAILABLE" << endl;

                cout << "PRESS ANY KEY TO CONTINUE ...";

                getch();

                system("cls");
            }

            else if (choice == 5)
            {
                int i;

                cout << "Enter Roll Number = ";

                cin >> rollno;

                for (i = 0; i < records; i++)
                {
                    if (rollno == s[i].rollno)
                    {
                        s[i].delete_student_record();
                        s[i] = s[i + 1];
                    }
                }

                // if (i == 0)
                //     cout << "NO RECORD AVAILABLE" << endl;

                // else if (i == records)
                //     cout << "RECORD EDITED SUCCESSFULLY" << endl;

                records--;
                cout << "PRESS ANY KEY TO CONTINUE ...";

                getch();

                system("cls");
            }
        }

        else
        {
            system("cls");

            cout << "RECORD EXCEED LIMIT" << endl;

            cout << "PRESS ANY KEY TO CONTINUE ...";

            getch();

            system("cls");
        }

    } while (choice != 6);

    return 0;
}