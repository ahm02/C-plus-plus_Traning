#include <iostream>
#include <string>

using namespace std;
struct
//  structures for student and employee and teacher

struct student
{
    string name;
    string major;
    string student_class;
    int age;
    double GPA;
    double marks[4];

}    ;

struct employee
{
    string name;
    string major;
    string uni_gradiuate;
    int place;
    int age;
    double salary;
} ;

struct teacher
{
    string name;
    string major;
    string teacher_class;
    int number_of_student;
    string uni_gradiuate;

};

// Methods to addition with int and double and float
int sum (int num1, int num2)
{
    int result = num1 + num2;
    return result;
}
double sum (double num1, double num2)
{
    double result = num1 + num2;
    return result;
}
float sum (float num1, float num2)
{
    float result = num1 + num2;
    return result;
}

// Methods to subtraction with int and double and float

int sub (int num1, int num2)
{
    int result = num1 - num2;
    return result;
}
double sub (double num1, double num2)
{
    double result = num1 - num2;
    return result;
}
float sub (float num1, float num2)
{
    float result = num1 - num2;
    return result;
}

// Methods t multiply with int and double and float

int multy (int num1, int num2)
{
    int result = num1 * num2;
    return result;
}
double multy  (double num1, double num2)
{
    double result = num1 * num2;
    return result;
}

float multy (float num1, float num2)
{
    float result = num1 * num2;
    return result;
}

// Methods do divide with int and double and float

int div (int num1, int num2)
{
    int result = num1 / num2;
    return result;
}

double div (double num1, double num2)
{
    double result = num1 / num2;
    return result;
}
float div (float num1, float num2)
{
    float result = num1 / num2;
    return result;
}


int main()
{

    // rectangle program

    double length ;
    cout << "enter the length : ";
    cin >> length;

    double width ;
    cout << "enter the width : ";
    cin >> width;
    double area = length * width ;
    cout << "The area is : " << area;



    // program ask the user name and age to print them

    string name;
    int age;

    cout << "enter your name : ";
    cin >> name;

    cout << "enter your age : ";
    cin >> age;

    cout << "your name is  " << name << " and you are  " << age ;

    // Grade program


    double grade ;
    cout << "enter your mark : ";
    cin >> grade;

    if (grade >= 95 && grade <= 100)
    {
        cout << "A+";
    }
    else if (grade >= 90 && grade < 95)
    {
        cout << "A";
    }
    else if (grade >= 85 && grade = 90)
    {
        cout << "B+";
    }
    else if (grade >= 80 && grade < 85)
    {
        cout << "B";
    }
    else if (grade >= 75 && grade < 80)
    {
        cout << "C+";
    }
    else if (grade >= 70 && grade < 75)
    {
        cout << "C";
    }
    else if (grade >= 65 && grade < 70)
    {
        cout << "D+";
    }
    else if (grade >= 59.01 && grade < 65)
    {
        cout << "D";
    }
    else if (grade <= 59 && grade < 59.01 && grade >= 0)
    {
        cout << "F";
    }
    else if (grade < 0 )
    {
        cout << "Negative numbers are invalid ";
    }
    else
    {
        cout << "enter just from 0 to 100 only";
    }


    // program show you the even and odd numbers


    int num ;
    cout << "enter a number : ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "this number is even ";
    }
    else
    {
        cout << "this number is odd";
    }

    // program show the negative and positive number

    int num ;
    cout << "enter a number : ";
    cin >> num;

    if (num >= 0)
    {
        cout << "this number is positive ";
    }
    else
    {
        cout << "this number is negative";
    }

    // program show the number is positive or negative and if positive check its even or odd

    int num ;
    cout << "enter a number : ";
    cin >> num;

    if (num >= 0)
    {
        if(num % 2 == 0)
            cout << "this number is even ";
        else
            cout << "the number is odd";
    }
    else
    {
        cout << "we ask just positive numbers";
    }

    //Calculator program

    int op;
    cout << "select from this list to calc two numbers \n";

    cout <<"1. + \n";
    cout <<"2. - \n";
    cout <<"3. * \n";
    cout <<"4. / \n";
    cout << "write here : ";
    cin >> op;
    double num1, num2;

    if(op == 1)
    {
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 + num2;
    }
    else if (op == 2)
    {
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 - num2;
    }
    else if (op == 3)
    {
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 * num2;
    }
    else if (op == 4)
    {
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 / num2;
    }


    // Same the last program but in switch statement

    int op;
    cout << "select from this list to calc two numbers \n";

    cout <<"1. + \n";
    cout <<"2. - \n";
    cout <<"3. * \n";
    cout <<"4. / \n";
    cout << "write here : ";
    cin >> op;
    double num1, num2;

    switch(op)
    {

    case 1 :
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 + num2;
        break;

    case 2:
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 - num2;
        break;

    case 3:
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 * num2;
        break;
    case 4:
        cout << "enter the first number : ";
        cin >> num1;
        cout << "enter the second number : ";
        cin >> num2;
        cout << "the result is : " << num1 / num2;
        break;

    default:
        cout << "invalid operator";

    }


    // weeks day program

    int daynum;

    cout << "enter the day number : ";
    cin >> daynum;

    if(daynum == 1)
    {
        cout << " Sunday ";
    }
    else if (daynum == 2)
    {
        cout <<" Monday";
    }
    else if (daynum == 3)
    {
        cout << " Tuesday";
    }
    else if (daynum == 4 )
    {
        cout << " Wednesday";
    }
    else if (daynum == 5 )
    {
        cout << " Thursday";
    }
    else if (daynum == 6 )
    {
        cout << " Friday";
    }
    else if (daynum == 7)
    {
        cout << " Saturday";
    }
    else
    {
        cout << " Try again";
    }



    // grade program in switch statement

    int marks ;
    cout << "select your marks from this list to see your grade";

    cout<< "1. 95 to 100 \n 2. 90 to 94 \n 3. 85 to 89 \n 4. 80 to 84 \n 5. 75 to 79 \n 6. 70 to 74 \n 7. 65 to 69 \n 8. 59.01 to 64 \n 9. 59 to 0";
    cout << "select here : ";
    cin >> marks;
    switch(marks)
    {
    case 1 :
        cout <<"A+";
        break;
    case 2 :
        cout <<"A";
        break;
    case 3 :
        cout <<"B+";
        break;
    case 4 :
        cout <<"B";
        break;
    case 5 :
        cout <<"C+";
        break;
    case 6 :
        cout <<"C";
        break;
    case 7 :
        cout <<"D+";
        break;
    case 8 :
        cout <<"D";
        break;
    case 9 :
        cout << "F";
        break;

    default :
        cout << "wrong choice";
    }


    //program to calc the average for students

    int counter, i ;
    double sum = 0, grade;
    cout << "enter the number of student : ";
    cin >> i;
    while(counter < i )
    {

        cout << "enter the marks for student number " << counter + 1 << " : \n";
        cin >> grade;
        sum+=grade;
        counter++;
    }
    cout << "the average for the students is : " << sum / i;

    // Same last program but in do while loop

    int counter, i ;
    double sum = 0, grade;
    cout << "enter the number of student : ";
    cin >> i;
    do
    {

        cout << "enter the marks for student number " << counter + 1 << " : \n";
        cin >> grade;
        sum+=grade;
        counter++;
    }
    while(counter < i );
    cout << "the average for the students is : " << sum / i;

    // program to calc the average of student in for loop

    double sum = 0, grades;
    int num;
    cout << "enter the number of student : ";
    cin >> num;
    for(int counter = 1; counter <= num ; counter++)
    {
        cout << "enter the marks for student number " << counter << " : \n";
        cin >> grades;
        sum+= grades;
    }
    cout << "the average of " << num << " student is : " << sum / 3;



    // program that calc the sum of even and odd numbers

    int number, sumeven = 0, sumodd = 0;

    cout << "how many numbers you want to calc ? : ";
    int num;
    cin >> num;
    for(int i = 1 ; i <= num ; i++)
    {

        cout << "enter number with order " << i << " : ";
        cin >> number;
        if (number % 2 == 0)
            sumeven+=number;

        else
            sumodd+=number;
    }
    cout << "the sum of even numbers : " << sumeven << "\n";
    cout << "the sum of odd numbers is :" << sumodd;


    // program that calc the factorial of numbers

    int number, fact = 1;
    cout << "how many numbers you want to calc ? : ";
    cin >> number;
    for (int i = 1 ; i <= number ; i++)
    {
        for(int j = 1 ; j <= number ; j++)
        {
            fact = fact * j;
        }
        cout << "the factorial of " << i << " is : " << fact << "\n";
    }

    // the way to ask the user about array and print array for int and double and float and string

    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    int numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }

    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    double numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }

    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    float numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }
    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    string names [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> names[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << names[i] << "\n";
    }


    // the way to copy the data of array to another array with int and double and float and srting

    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    int numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }
    int num2;
    cout << "enter the size of the array2 : ";
    cin >> num2;
    int numbers2 [num2];
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers2[i];
    }
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }

    copy(numbers, numbers + num2, numbers2);

    cout << "the result is \n";
    for ( int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }

    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    double numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }
    int num2;
    cout << "enter the size of the array2 : ";
    cin >> num2;
    double numbers2 [num2];
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers2[i];
    }
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }

    copy(numbers, numbers + num2, numbers2);

    cout << "the result is \n";
    for ( int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }
    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    float numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }
    int num2;
    cout << "enter the size of the array2 : ";
    cin >> num2;
    float numbers2 [num2];
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers2[i];
    }
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }

    copy(numbers, numbers + num2, numbers2);

    cout << "the result is \n";
    for ( int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }
    int num;
    cout << "enter the size of the array : ";
    cin >> num;
    string numbers [num];
    for(int i = 0 ; i < num ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << numbers[i] << "\n";
    }
    int num2;
    cout << "enter the size of the array2 : ";
    cin >> num2;
    string numbers2 [num2];
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << "enter the data for element number " << i+1 << " :";
        cin >> numbers2[i];
    }
    for(int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }

    copy(numbers, numbers + num2, numbers2);

    cout << "the result is \n";
    for ( int i = 0 ; i < num2 ; i++)
    {
        cout << numbers2[i] << "\n";
    }

    // the way to ask the user enter data for 2D array with int and double and float and string


    int row, column ;

    cout << "enter the numbers of rows :";
    cin >> row;

    cout << "enter the number of columns : ";
    cin >> column;
    int arr [row][column];

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << "enter the data for row number " << i + 1 << " and the column number " << j + 1 << " :";
            cin >> arr[i][j];
        }
    }
    for( int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    int row, column ;

    cout << "enter the numbers of rows :";
    cin >> row;

    cout << "enter the number of columns : ";
    cin >> column;
    double arr [row][column];

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << "enter the data for row number " << i + 1 << " and the column number " << j + 1 << " :";
            cin >> arr[i][j];
        }
    }
    for( int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    int row, column ;

    cout << "enter the numbers of rows :";
    cin >> row;

    cout << "enter the number of columns : ";
    cin >> column;
    float arr [row][column];

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << "enter the data for row number " << i + 1 << " and the column number " << j + 1 << " :";
            cin >> arr[i][j];
        }
    }
    for( int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
    int row, column ;

    cout << "enter the numbers of rows :";
    cin >> row;

    cout << "enter the number of columns : ";
    cin >> column;
    string arr [row][column];

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << "enter the data for row number " << i + 1 << " and the column number " << j + 1 << " :";
            cin >> arr[i][j];
        }
    }
    for( int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }

    // the way to use pointers which that tell you the address of every variable in memory

    int point = 23;
    int *poi = &point;

    double point2 = 22.5;
    double *poi2 = &point2;

    float point3 = 15.5;
    float *poi3 = &point3;

    string point4 = "C++";
    string *poi4 = &point4;

    cout << poi << "\n";
    cout << poi2 << "\n";
    cout << poi3 << "\n";
    cout << poi4 << "\n";

    return 0;
}
