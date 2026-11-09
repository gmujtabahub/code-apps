#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void menu();
void age_Calculator();
void currency_and_Notes();
void expense_Calculator();
void marksheet_Program();
void storage_Units_Calculator();
void reverse_3_Digits();
void salary_Calculator();
void positive_Negative_Program();
void bank_Investment_Calculator();
void vowel_Program();
void online_Shopping();
void calculator_Program();
void vending_Machine_Program();
void wallet_Program();
void unit_Conversion();
void digits_to_English_Program();

int main()
{
    int a;
    do
    {
        menu();
        do
        {
            printf("\n");
            printf("Do you want to continue? \n1. Continue\n2. Exit ");
            scanf("%d", &a);
            if (a >= 3)
            {
                system("clear");
                printf("Invalid Input\n");
            }
        } while (a >= 3);

    } while (a != 2 && a <= 2);

    return 0;
}

void menu()
{
    system("clear");

    printf("1.Age Calculator\n");
    printf("2.Currency and Notes\n");
    printf("3.Expense Calculator\n");
    printf("4.Marksheet Program\n");
    printf("5.Storage Units Calculator\n");
    printf("6.Reverse 3 Digits\n");
    printf("7.Salary Calculator\n");
    printf("8.Positive Negative Program\n");
    printf("9.Bank Investment Calculator\n");
    printf("10.Vowel Program\n");
    printf("11.Online Shopping\n");
    printf("12.Calculator Program\n");
    printf("13.Vending Machine Program\n");
    printf("14.Wallet Program\n");
    printf("15.Unit Conversion\n");
    printf("16.Digits to English Program\n");

    printf("\n");

    int choice;

    printf("Enter your Choice = ");
    scanf("%d", &choice);

    system("clear");

    if (choice == 1)
        age_Calculator();

    if (choice == 2)
        currency_and_Notes();

    if (choice == 3)
        expense_Calculator();

    if (choice == 4)
        marksheet_Program();

    if (choice == 5)
        storage_Units_Calculator();

    if (choice == 6)
        reverse_3_Digits();

    if (choice == 7)
        salary_Calculator();

    if (choice == 8)
        positive_Negative_Program();

    if (choice == 9)
        bank_Investment_Calculator();

    if (choice == 10)
        vowel_Program();

    if (choice == 11)
        online_Shopping();

    if (choice == 12)
        calculator_Program();

    if (choice == 13)
        vending_Machine_Program();

    if (choice == 14)
        wallet_Program();

    if (choice == 15)
        unit_Conversion();

    if (choice == 16)
        digits_to_English_Program();

    if (choice > 16)
    {
        printf("invalid value \n");
    }
}

void age_Calculator()
{
    int birthYear;
    const int _YEAR = 2026;
    const int _MONTH = 12;
    const int _DAYS = 365;
    const int _HOURS = 24;
    const int _MINUTES = 60;
    const int _SECONDS = 60;

    printf("Enter Your Birthyear=");
    scanf("%d", &birthYear);

    int age = _YEAR - birthYear;

    if (age != 0)
    {

        int months = age * _MONTH;
        int days = age * _DAYS;
        int hours = days * _HOURS;
        int minutes = hours * _MINUTES;
        int seconds = minutes * _SECONDS;

        printf("AGE=%3d\n", age);
        printf("MONTHS=%d\n", months);
        printf("DAYS=%d\n", days);
        printf("HOURS=%d\n", hours);
        printf("MINUTES=%d\n", minutes);
        printf("SECONDS=%d\n", seconds);
    }
}

void currency_and_Notes()
{
    int currency;

    printf("Enter Currency = "); // 400
    scanf("%d", &currency);

    if (currency >= 5000)
        printf("5000 = %d\n", currency / 5000); // 1

    currency = currency % 5000;

    if (currency >= 1000)
        printf("1000 = %d\n", currency / 1000); // 2

    currency = currency % 1000; // 0

    if (currency >= 500)
        printf("500 = %d\n", currency / 500);

    currency = currency % 500;

    if (currency >= 100)
        printf("100 = %d\n", currency / 100);

    currency = currency % 100;

    if (currency >= 50)
        printf("50 = %d\n", currency / 50);

    currency = currency % 50;

    if (currency >= 20)
        printf("20 = %d\n", currency / 20);

    currency = currency % 20;

    if (currency >= 10)
        printf("10 = %d\n", currency / 10);

    currency = currency % 10;

    if (currency >= 5)
        printf("5 = %d\n", currency / 5);

    currency = currency % 5;
    if (currency >= 1)

        printf("1 = %d\n", currency / 1);
    currency = currency % 1;
}

void expense_Calculator()
{
    int rent;

    printf("Enter room rent per night= ");
    scanf("%d", &rent);

    int live;

    printf("Enter no.of nights you live= ");
    scanf("%d", &live);

    int bill;

    printf("Enter Food Bill= ");
    scanf("%d", &bill);

    int persons;

    printf("No. of persons= ");
    scanf("%d", &persons);

    printf("Total Hotel Rent= %d\n", rent * live);

    printf("Food Bill=%d\n", bill);

    printf("Total Expenses=%d\n", rent * live + bill);

    printf("Per head=%d\n", (rent * live + bill) / persons);
}

void marksheet_Program()
{
    char name[50];

    printf("NAME = ");
    scanf(" %[^\n]", name);

    int rn;

    printf("Roll Number = ");
    scanf("%d", &rn);

    int english;

    printf("English = ");
    scanf("%d", &english);

    int sindh;

    printf("Sindh = ");
    scanf("%d", &sindh);

    int math;

    printf("Maths = ");
    scanf("%d", &math);

    int phy;

    printf("Physics = ");
    scanf("%d", &phy);

    int che;

    printf("Chemistry = ");
    scanf("%d", &che);

    int pst;

    printf("Pakistan Studies = ");
    scanf("%d", &pst);

    int comp;

    printf("Computer = ");
    scanf("%d", &comp);

    int total;

    printf("Total Marks = ");
    scanf("%d", &total);

    system("clear");

    int ob = english + sindh + math + phy + che + pst + comp;

    printf("Obtained Marks = %d\n", ob);

    int per = ob * 100 / total;

    printf("PERCENTAGE = %d\n", per);

    if (per >= 90 && per <= 100)
    {
        printf("Your grade is A+\n");
    }

    if (per >= 80 && per <= 89)
    {
        printf("Your grade is A\n");
    }

    if (per >= 70 && per <= 79)
    {
        printf("Your grade is B+\n");
    }

    if (per >= 60 && per <= 69)
    {
        printf("Your grade is B\n");
    }

    if (per >= 50 && per <= 59)
    {
        printf("Your grade is C\n");
    }

    if (per <= 50)
    {
        printf("You Failed!\n");
    }
}

void storage_Units_Calculator()
{
    long bits;

    printf("Enter Bits= ");
    scanf("%ld", &bits);

    printf("Bytes= %ld\n", bits / 8);
    printf("KB= %ld\n", bits / 8 / 1024);
    printf("MB= %ld\n", bits / 8 / 1024 / 1024);
    printf("GB= %ld\n", bits / 8 / 1024 / 1024 / 1024);
    printf("TB= %ld\n", bits / 8 / 1024 / 1024 / 1024 / 1024);
}

void reverse_3_Digits()
{
    int number;

    printf("Enter Number = ");
    scanf("%d", &number); // 897

    int a = number / 100;
    int b = number / 10 % 10;
    int c = number % 10;

    int d = c * 100 + b * 10 + a;

    printf("%d\n", d);
}

void salary_Calculator()
{
    float salary;

    printf("Enter Basic Salary = ");
    scanf("%f", &salary);

    float medical_allowance = salary * 0.05;

    float house_rent = salary * 0.05;

    float gross_salary = salary + house_rent + house_rent;

    float tax = gross_salary * 0.07;

    float net_salary = gross_salary - tax;

    printf("Medical Allowance = %.0f\n", medical_allowance);
    printf("House Rent = %.0f\n", house_rent);
    printf("Gross Salary = %.0f\n", gross_salary);
    printf("Tax = %.0f\n", tax);
    printf("Net Salary = %.0f\n", net_salary);
}

void positive_Negative_Program()
{
    int number;

    printf("Enter number = ");
    scanf("%d", &number);

    if (number > 0)

    {

        printf("positive number\n");
    }

    else if (number < 0)

    {

        printf("Negative number\n");
    }

    else
    {

        printf("0 input\n");
    }
}

void bank_Investment_Calculator()
{
    int investment;

    printf("Enter Investment Amount = ");
    scanf("%d", &investment);

    int filer;

    printf("Enter you are FILER-1 or NON FILER-0 = ");
    scanf("%d", &filer);

    float whttax;
    if (filer == 1)
        whttax = 0.15;
    else
        whttax = 0.30;

    float profit = investment * 0.10;
    float wht_tax = profit * whttax;
    float balance = wht_tax + investment;

    printf("Profit = %.0f\n", profit);
    printf("W.H.T TAX = %.0f\n", wht_tax);
    printf("Balance = %.0f\n", balance);
}

void vowel_Program()
{
    char c;

    printf("Enter character = ");
    scanf(" %c", &c);

    c = toupper(c);

    switch (c)

    {

    case 'E':

    case 'I':

    case 'O':

    case 'U':

    case 'A':

        printf("It is vowel\n");

        break;

    default:

        printf("It is consonant\n");
    }
}

void online_Shopping()
{
    int cf_cost = 1250;

    printf("ONLINE SHOPPING\n");
    printf("==================\n");
    printf(" 1. CHARGING FAN = %d\n", cf_cost);
    printf(" 2. DIGITAL MAGNIFIER = Rs.8000\n");
    printf(" 3. DRONE = Rs.9000\n");
    printf(" 4. SMART WATCH = Rs.15000\n");

    int choice;

    printf("Enter your choice = ");
    scanf("%d", &choice);

    if (choice <= 4)
    {
        int quantity;

        printf("Enter Quantity = ");
        scanf("%d", &quantity);

        printf("Do you want STANDARD DELIEVERY or EXPRESS DELIEVERY\n Press 1 for STANDARD DELIEVERY and Press 2 for EXPRESS DELIEVERY.\n");
        printf("1. STANDARD DELIEVERY\n");
        printf("2. EXPRESS DELIEVERY\n");

        int shipping_charges;
        int choose;

        scanf("%d", &choose);

        system("clear");

        if (choose == 1)

            shipping_charges = 100;

        else

            shipping_charges = 200;

        if (choice == 1)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("CHARGING FAN = %d\n", cf_cost);
            printf("Charges = %d\n", cf_cost * quantity);
            printf("Delievery = %d\n", shipping_charges);
            printf("Total = %d\n", cf_cost * quantity + shipping_charges);
        }

        if (choice == 2)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("DIGITAL MAGNIFIER = Rs.8000\n");
            printf("Charges = %d\n", 8000 * quantity);
            printf("Delievery = %d\n", shipping_charges);
            printf("Total = %d\n", 8000 * quantity + shipping_charges);
        }

        if (choice == 3)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("DRONE = Rs.9000\n");
            printf("Charges = %d\n", 9000 * quantity);
            printf("Delievery = %d\n", shipping_charges);
            printf("Total = %d\n", 9000 * quantity + shipping_charges);
        }

        if (choice == 4)

        {

            printf("ORDER\n");
            printf("xxxxxxxxx\n");
            printf("SMART WATCH = Rs.15000\n");
            printf("Charges = %d\n", 15000 * quantity);
            printf("Delievery = %d\n", shipping_charges);
            printf("Total = %d\n", 15000 * quantity + shipping_charges);
        }
    }

    else
    {

        printf("INVALID\n");
    }
}

void calculator_Program()
{
    int x;
    char y;
    int z;

    printf("Enter Expression = ");
    scanf("%d %c %d", &x, &y, &z);

    switch (y)

    {

    case '+':

        printf("Result = %d\n", x + z);
        break;

    case '-':

        printf("Result = %d\n", x - z);
        break;

    case '*':

        printf("Result = %d\n", x * z);
        break;

    case '/':

        printf("Result = %d\n", x / z);
        break;

    case '%':

        printf("Result = %d\n", x % z);
        break;

    default:

        printf("INVALID EXPRESSION\n");
    }
}

void vending_Machine_Program()
{
    printf("1. PEPSI CANE Rs.120\n");
    printf("2. SLICE JUICE Rs.60\n");
    printf("3.LAYS Rs.50\n");
    printf("4.DAIRY MILK Rs.100\n");

    int choice;

    printf("Enter choice = ");
    scanf("%d", &choice);

    int money;

    switch (choice)
    {
    case 1:

        printf("YOU CHOOSED PEPSI CANE\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 120)
        {
            printf("PEPSI CANE DISPENSED\n");
            printf("CHANGE = %d\n", money - 120);
        }

        else
            printf("Give 120 rupees\n");

        break;

    case 2:

        printf("YOU CHOOSED SLICE JUICE\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 60)
        {
            printf("SLICE JUICE DISPENSED\n");
            printf("CHANGE = %d\n", money - 60);
        }

        else
            printf("Give 60 rupees\n");
        break;

    case 3:

        printf("YOU CHOOSED LAYS\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 50)
        {
            printf("LAYS DISPENSED\n");
            printf("CHANGE = %d\n", money - 50);
        }

        else
            printf("Give 50 rupees\n");
        break;

    case 4:
        printf("YOU CHOOSED DAIRY MILK\n");
        printf("Enter money = ");
        scanf("%d", &money);

        if (money >= 100)
        {
            printf("DAIRY MILK DISPENSED\n");
            printf("CHANGE = %d\n", money - 100);
        }

        else
            printf("Give 100 rupees\n");
        break;
    }
}

void wallet_Program()
{
    int wallet, amount, expense;

    printf("Enter Amount In Wallet= ");
    scanf("%d", &wallet); // 150

    if (wallet != 0)
    {
        printf("Enter Amount You Need= ");
        scanf("%d", &amount); // 100

        if (wallet >= amount)
        {
            printf("Enter Expense= ");
            scanf("%d", &expense); // 50

            printf("=================================\n");
            printf("Amount In Wallet=%d\n", wallet);
            printf("Amount You Need=%d\n", amount);
            printf("Expense=%d\n", expense);
            printf("Change=%d\n", amount - expense);
            printf("Amount In Wallet=%d\n", wallet - amount + amount - expense);
        }
        else
        {
            printf("Insufficent Amount In Wallet\n");
        }
    }
    else
    {
        printf("No Money In Wallet\n");
    }
}

void unit_Conversion()
{
    int chose;

    {
        printf("1.Feet to inches or Inches to Feets\n");
        printf("2.KILO TO Gram\n");
        printf("3.Dollar Program\n");
        printf("4.Centigrade to Fahreheit\n");

        printf("Enter choice = ");
        scanf("%d", &chose);

        system("clear");
    }

    if (chose == 1)
    {
        int feet;
        const int _INCHES = 12;
        int inches;
        const int _FEETS = 12;

        printf("xxxxxxxxxxxxxxxxxxxxxxxxx\n");
        printf("x \033[1;33m Feet To Inch Program\033[0m\tx\n");
        printf("xxxxxxxxxxxxxxxxxxxxxxxxx\n");

        printf("Enter feet = ");
        scanf("%d", &feet);
        printf("Inches=%d\n\n", feet * _INCHES);

        printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");
        printf("x \033[1;33mInch To Feet Program\033[0m\tx\n");
        printf("xxxxxxxxxxxxxxxxxxxxxxxxxx\n");

        printf("Enter inches = ");
        scanf("%d", &inches);
        printf("Feets=%d\n", inches / _FEETS);
    }

    if (chose == 2)
    {
        int kilo;
        int grams = 1000;

        printf("Enter kilos = ");
        scanf("%d", &kilo);

        printf("Grams = %d\n", kilo * grams);
    }

    if (chose == 3)
    {
        int pkr;

        printf("Enter PKR = ");

        scanf("%d", &pkr);

        printf("DOLLARS = %d\n", pkr * 278);
    }

    if (chose == 4)
    {
        float C;
        printf("Enter Centigrade= ");
        scanf("%f", &C);
        C = (C * 9 / 5) + 32;
        printf("Fahrenheit= %f\n", C);
    }
}

void digits_to_English_Program()
{
    int number;

    printf("Enter Number = ");
    scanf("%d", &number);

    if (number <= 999)
    {
        int hundreds = number / 100;
        int tens = number / 10 % 10;
        int ones = number % 10;

        switch (hundreds)
        {
        case 1:
            printf("one hundred\t");
            break;

        case 2:
            printf("two hundred\t");
            break;

        case 3:
            printf("three hundred\t");
            break;

        case 4:
            printf("four hundred\t");
            break;

        case 5:
            printf("five hundred\t");
            break;

        case 6:
            printf("six hundred\t");
            break;

        case 7:
            printf("seven hundred\t");
            break;

        case 8:
            printf("eight hundred\t");
            break;

        case 9:
            printf("nine hundred\t");
            break;
        }
        if (tens == 1)
        {
            switch (ones)
            {
            case 0:
                printf("ten\n");
                break;
            case 1:
                printf("eleven\n");
                break;

            case 2:
                printf("twelve\n");
                break;

            case 3:
                printf("thirteen\n");
                break;

            case 4:
                printf("fourteen\n");
                break;

            case 5:
                printf("fifteen\n");
                break;

            case 6:
                printf("sixteen\n");
                break;

            case 7:
                printf("seventeen\n");
                break;

            case 8:
                printf("eighteen\n");
                break;

            case 9:
                printf("ninteen\n");
                break;
            }
        }
        else
        {
            switch (tens)
            {
            case 2:
                printf("twenty\t");
                break;

            case 3:
                printf("thirty\t");
                break;

            case 4:
                printf("forty\t");
                break;

            case 5:
                printf("fifty\t");
                break;

            case 6:
                printf("sixty\t");
                break;

            case 7:
                printf("seventy\t");
                break;

            case 8:
                printf("eighty\t");
                break;

            case 9:
                printf("ninety\t");
                break;
            }

            switch (ones)
            {
            case 1:
                printf("one\n");
                break;

            case 2:
                printf("two\n");
                break;

            case 3:
                printf("three\n");
                break;

            case 4:
                printf("four\n");
                break;

            case 5:
                printf("five\n");
                break;

            case 6:
                printf("six\n");
                break;

            case 7:
                printf("seven\n");
                break;

            case 8:
                printf("eight\n");
                break;

            case 9:
                printf("nine\n");
                break;
            }
        }
    }
}