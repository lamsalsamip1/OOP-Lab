// Lab 1 college
// write a progr showing the concept of endl and setw manipulators
/*
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int sum = 123456;
    cout << "setw(0)"
         << "\n"
         << setw(0) << sum << endl;
    cout << "setw(20)"
         << "\n"
         << setw(20) << sum << endl;
    return 0;
}

// Write a program showing the reference of conept variable
#include <iostream>
using namespace std;
int main()
{
    int m = 5;
    int &n = m;
    cout << "m=" << m << " n=" << n << endl;
    n++;
    // n is reference of m so m and n havesame value
    cout << "m=" << m << " n=" << n << endl;
    return 0;
}

// Write a program to swap two integers using call pass by reference

#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}
int main()
{
    int m = 10;
    int n = 20;
    cout << "\n Before swap "
         << "m= " << m << " n=" << n << endl;
    swap(m, n);
    cout << "\n Before swap "
         << "m= " << m << " n=" << n << endl;
    return 0;
}

// write a program to find the largest of two numbers using the concept of nesting of member function

// wap to calculate weight with default argumjent
#include <iostream>
using namespace std;
float calculateMass(int m, float g = 9.8)
{
    float weight = m * g;
    return weight;
}
int main()
{
    float result = calculateMass(10);
    cout << "The weight is  " << result << endl;
    return 0;
}

// wap to overload function with int char float
#include <iostream>
using namespace std;
void displayData(int num)
{
    cout << "The number " << num << " is an integer" << endl;
}
void displayData(float num)
{
    cout << "The number " << num << " is a floating point" << endl;
}
void displayData(char c)
{
    cout << c << " is a character" << endl;
}
int main()
{
    displayData(5);
    displayData(5.66f);
    displayData('a');
    return 0;
}

// wap that reads two numbers, calculate smallest one and print the smallest one
// defining functions outside the class LAB 2 QN 1
#include <iostream>
using namespace std;
class Numbers
{
private:
    int a, b;

public:
    void readNum();
    void smallestNum();
};
void Numbers::readNum()
{
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
}
void Numbers::smallestNum()
{
    if (a > b)
        cout << "The smallest number is " << b;
    else if (b > a)
        cout << "The smallest number is " << a;
    else
        cout << "Both numbers are equal";
}
int main()

{
    Numbers N;
    N.readNum();
    N.smallestNum();
}

// wap declaring a class and object to input assessment marks and practical
// marks defining functions setmark and publishmark define function inside class
LAB 2 QN2
#include <iostream>
    using namespace std;
class marks
{
private:
    int assessmentMarks, practicalMarks;

public:
    void setMark()
    {
        cout << "Enter the assessment marks" << endl;
        cin >> assessmentMarks;
        cout << "Enter the practical marks" << endl;
        cin >> practicalMarks;
    }
    void publishMark()
    {
        cout << "The marks are : " << endl;
        cout << "Assesment marks : " << assessmentMarks << endl;
        cout << "Practical marks : " << practicalMarks << endl;
    }
};
int main()
{
    marks S;
    S.setMark();
    S.publishMark();
    return 0;
}
q no3
// wap to input name, address,faculty and roll no of a student and display it.
// Use both member functions defining inside the class and outside the class

#include <iostream>
#include <string>
    using namespace std;
class student
{
private:
    int rollno;
    string name, address, faculty;

public:
    void getInformation()
    {
        cout << "Enter the name,address,faculty and roll number" << endl;
        cin >> name >> address >> faculty >> rollno;
    }
    void displayInformation();
};
void student::displayInformation()
{
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Roll Number: " << rollno << endl;
}
int main()
{
    student S;
    S.getInformation();
    S.displayInformation();
    return 0;
}

// Q NO 5
// create a class called student with three data members(student name[20],roll_no
//,function called inputdata() to take details of students from the user, and a
// function called displaydata() to display the data of the students). In main
//  create two objects of the class student and for each call both of the functions

#include <iostream>
using namespace std;
class city
{
private:
    char cityName[20];
    float distFromKtm;

public:
    void getInfo()
    {
        cout << "Enter the name of the city" << endl;
        cin >> cityName;
        cout << "Enter it's distance from Kathmandu" << endl;
        cin >> distFromKtm;
    }
    void displayInfo()
    {
        cout << "Name of City: " << cityName << endl;
        cout << "Distance from Kathmandu: " << distFromKtm << endl;
    }
    void addDistance(city a, city b);
};
void city::addDistance(city a, city b)
{
    distFromKtm = a.distFromKtm + b.distFromKtm;
    cout << "The sum of distance of " << a.cityName << " and " << b.cityName << " from Kathmandu is " << distFromKtm << endl;
}
int main()
{
    city c1, c2, c3;
    c1.getInfo();
    c2.getInfo();
    c1.displayInfo();
    c2.displayInfo();
    c3.addDistance(c1, c2);
    return 0;
};

    // Q NO 4
    // create a class called student with three data members ( student_name[20], roll_no, function called input
    // data to take details of students from he suer, anda function displaydata to display the details of the
    // students.In main, create two objects of the class student and for each call both of the functions)

#include <iostream>
using namespace std;
class student
{
private:
    char studentName[20];
    int rollNo;

public:
    void inputData()
    {
        cout << "Enter the name and roll number of the student" << endl;
        cin >> studentName >> rollNo;
    }
    void displayData()
    {
        cout << "RN\tName" << endl;
        cout << rollNo << "\t" << studentName << endl;
    }
};
int main()
{
    student s1, s2;
    s1.inputData();
    s2.inputData();
    s1.displayData();
    s2.displayData();
    return 0;
}

// QNO 6//wap to read two integers and display it, use constructor to read
#include <iostream>
using namespace std;
class numbers
{
private:
    int a, b;

public:
    numbers(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void displayNumber()
    {
        cout << "The two integers are " << a << " and " << b << endl;
    }
};
int main()
{
    numbers N(5, 10);
    N.displayNumber();
    return 0;
}

// qno 7
// write a program to make one object to read one integer data. Make another object and copy the data of the first object to it.
#include <iostream>
using namespace std;
class number
{
private:
    int a;

public:
    number() {}
    number(int n)
    {
        a = n;
    }
    number(number &obj)
    {
        a = obj.a;
        cout << "Copy constructor called" << endl;
    }
    void display()
    {
        cout << "The number is " << a << endl;
    }
};
int main()
{
    number N(57);
    N.display();
    number N1 = N;
    N1.display();

    return 0;
}

// qno8
// write a program to add two complex numbers using the concept of constructor overloading
#include <iostream>
using namespace std;
class complex
{
private:
    int real, cmplx, sumReal, sumComplex;

public:
    complex()
    {
        sumReal = 0;
        sumComplex = 0;
    };
    complex(int r, int c)
    {
        real = r;
        cmplx = c;
    }
    void addition(complex c1, complex c2)
    {
        sumReal = c1.real + c2.real;
        sumComplex = c1.cmplx + c2.cmplx;
        cout << "The sum is " << sumReal << " + " << sumComplex << "i" << endl;
    }
};

int main()
{
    complex c1(2, 5), c2(3, 6), c3;
    c3.addition(c1, c2);
    return 0;
}

// q no 9
// write a program to show the concept of destructor
#include <iostream>
using namespace std;
class destructor
{
private:
    int num;

public:
    destructor(int n)
    {
        num = n;
        cout << "Object " << num << " created\n";
    }
    ~destructor()
    {
        cout << "Object " << num << " destroyed\n";
    }
};
int main()
{
    destructor d1(1), destructor d2(2);

    return 0;
}

// q no 10
//  write a program to add two integer numbers from two different objects and  place it in a third object and display it.
//  Use the concept of returning objects from function
#include <iostream>
using namespace std;
class Number
{
private:
    int num;

public:
    Number() {}
    Number(int n)
    {
        num = n;
    }
    void display();
    Number addition(Number, Number);
};
void Number::display()
{
    cout << "The stored number is " << num << endl;
}
Number Number::addition(Number N1, Number N2)
{
    Number N3;
    N3.num = N1.num + N2.num;
    return N3;
}
int main()
{
    Number N1(5), N2(10), N3;
    N3 = N3.addition(N1, N2);
    N3.display();
    return 0;
}
// qnum 11:
// write a progrm showing the conept of static data member
#include <iostream>
using namespace std;
class Example
{
public:
    static int count;
    void display()
    {
        count++;
        cout << "Object number " << count << endl;
    }
};
int Example::count;
int main()
{
    Example E, E1, E2;
    E.display();
    E1.display();
    E2.display();
    return 0;
}
// qnum 12
// read name age and salary using structure in C++
#include <iostream>
using namespace std;
struct Person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    Person p1;
    cout << "Enter full name : ";
    cin.get(p1.name, 50);
    cout << "Enter age : ";
    cin >> p1.age;
    cout << "Enter salary : ";
    cin >> p1.salary;
    cout << "\nDisplaying Information" << endl;
    cout << "Name : " << p1.name << endl;
    cout << "Age : " << p1.age << endl;
    cout << "Salary : " << p1.salary << endl;
    return 0;
}
// lab 1 qno 3 write a program to demonstrate the use of inline functions'

// lab 3 qno 1
// unary minus operator overloadin
#include <iostream>
using namespace std;
class subtraction
{
private:
    int num;

public:
    subtraction(int n)
    {
        num = n;
    }
    void operator-()
    {
        num--;
    }
    void display()
    {
        cout << "Value = " << num << endl;
    }
};
int main()
{
    subtraction S(5);
    S.display();
    -S;
    S.display();
    return 0;
}

// lab3 qno 2

// 2a 2. a) Write a program to add two complex numbers by overloading binary operator ( + ).
#include <iostream>
using namespace std;
class complex
{
private:
    int real, cmplx;

public:
    complex(int a, int b)
    {
        real = a;
        cmplx = b;
    }
    void operator+(complex &c)
    {
        real = real + c.real;
        cmplx = cmplx + c.cmplx;
    }
    void display()
    {
        cout << real << "+" << cmplx << "i" << endl;
    }
};
int main()
{
    complex c1(5, 2), c2(6, 9);
    c1 + c2;
    c1.display();
    return 0;
}

// lab 3 qno 2b
// write a program to overload = operator
#include <iostream>
using namespace std;
class Sample
{
    int num;

public:
    Sample() {}

    Sample(int n)
    {
        num = n;
    }

    void operator=(Sample &y)
    {
        cout << "Value = " << y.num;
    }
};

int main()
{
    Sample val;
    Sample f(2);

    val = f;

    return 0;
}

// c) Write a program to find largest of two numbers by overloading ( > ) operator.
#include <iostream>
using namespace std;
class number
{
private:
    int num;

public:
    number(int n)
    {
        num = n;
    }
    void operator>(number &n)
    {
        if (num > n.num)
            cout << "The largest number is " << num << endl;
        else
            cout << "The largest number is " << n.num << endl;
    }
};
int main()
{
    number n1(9), n2(7);
    n1 > n2;
    return 0;
}

// d) Write a program to overload “ ++ “ (both prefix and postfix ) operator.
#include <iostream>
#include <math.h>
using namespace std;
class Hour
{
    int hr;

public:
    Hour() {}
    operator int()
    {
        int minute;
        minute = hr * 60;
        return (minute);
    }
    void getdata()
    {
        cout << "Enter time in hours: ";
        cin >> hr;
    }
};
int main()
{
    Hour h1;
    int min;
    h1.getdata();
    min = h1; // basic to user defined type
    cout << "Minutes = " << min;
}

postfix
#include <iostream>
    using namespace std;
class addition
{
private:
    int num;

public:
    addition(int n)
    {
        num = n;
    }
    void operator++(int)
    {
        num++;
    }
    void display()
    {
        cout << "Value = " << num << endl;
    }
};
int main()
{
    addition A(5);
    A.display();
    A++;
    A.display();
    return 0;
}

// basic to class
#include <iostream>
using namespace std;
class X
{
    int z;
    char y;

public:
    X() {}
    X(char p)
    {
        z = (int)p;
        y = p;
    }
    void show()
    {
        cout << z << y;
    }
};
int main()
{
    char s = 'a';
    X x1;
    x1 = s; // calls parameterized constructor. 's' is basic type and x1 is class type.
    x1.show();
    return 0;
}
* /