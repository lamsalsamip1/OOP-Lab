/*
// A simple function template
#include <iostream>
using namespace std;
template <class T>
T abs(T n)
{
    return (n > 0) ? n : -n;
}
int main()
{
    int a = 1;
    float b = -5.88;
    double c = -9.9;
    cout << "Absolute value of " << a << " = " << abs(a) << endl;
    cout << "Absolute value of " << b << " = " << abs(b) << endl;
    cout << "Absolute value of " << c << " = " << abs(c) << endl;

    return 0;
}
#include <iostream>
using namespace std;
template <class T>
T Max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 5, b = 6, c = 7;
    float f1 = 5.5, f2 = 6.5, f3 = 7.5;
    cout << "Max(" << a << "," << b << ") = " << Max(a, b) << endl;
    cout << "Max(" << f1 << "," << f2 << ") = " << Max(f1, f2) << endl;
    cout << "Max(" << c << "," << f3 << ") = " << Max(f2, f3) << endl;
}

// function template with multiple arguments
#include <iostream>
using namespace std;
template <class T1, class T2>
void Max(T1 a, T2 b)
{
    cout << "Greater number = " << ((a > b) ? a : b);
}

int main()
{
    Max(6, 6);
}

// Implement stack using class template
#include <iostream>
#include <string>
using namespace std;
const int MAX = 100;
template <class Type>
class Stack
{
private:
    Type st[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(Type var)
    {
        st[++top] = var;
    }
    Type pop()
    {
        return st[top--];
    }
};

int main()
{
    cout << "INTEGER STACK" << endl;
    Stack<int> s1;
    s1.push(55);
    s1.push(65);
    cout << "1 :" << s1.pop() << endl;
    cout << "2 :" << s1.pop() << endl;

    cout << "STRING STACK" << endl;
    Stack<string> s2;
    s2.push("Samip");
    s2.push("Ramesh");
    cout << "1:" << s2.pop() << endl;
    cout << "2:" << s2.pop() << endl;
}

// create swap functions using reference and template
#include <iostream>
using namespace std;
template <class T>
void swap1(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int n1 = 5, n2 = 4;
    cout << "Before Swap | n1= " << n1 << " n2= " << n2 << endl;
    swap1(n1, n2);
    cout << "After Swap | n1= " << n1 << " n2= " << n2 << endl;

    float f1 = 5.6, f2 = 4.5;
    cout << "\nBefore Swap | f1= " << f1 << " f2= " << f2 << endl;
    swap1(f1, f2);
    cout << "After Swap | f1= " << f1 << " f2= " << f2 << endl;

    char a = 'a', b = 'b';
    cout << "\nBefore Swap | a= " << a << " b= " << b << endl;
    swap1(a, b);
    cout << "After Swap | a= " << a << " b= " << b << endl;
}


// esxception handling on stack program
#include <iostream>
using namespace std;
const int MAX = 3;
class Stack
{
private:
    int st[MAX]; // stack: array of integers
    int top;     // index of top of stack
public:
    class Full
    {
    }; // exception class
    class Empty
    {
    }; // exception class
    //--------------------------------------------------------------
    Stack() // constructor
    {
        top = -1;
    }
    //--------------------------------------------------------------
    void push(int var) // put number on stack
    {
        if (top >= MAX - 1) // if stack full,
            throw Full();   // throw Full exception
        st[++top] = var;
    }
    int pop() // take number off stack
    {
        if (top < 0)       // if stack empty,
            throw Empty(); // throw Empty exception
        return st[top--];
    }
};
int main()
{
    Stack s1;
    try
    {
        s1.push(55);
        s1.push(65);
        s1.push(75);

        cout << "1: " << s1.pop() << endl;
        cout << "2: " << s1.pop() << endl;
        cout << "3: " << s1.pop() << endl;
        cout << "4: " << s1.pop() << endl;
    }
    catch (Stack::Full)
    {
        cout << "Exception : Stack Full" << endl;
    }
    catch (Stack::Empty)
    {
        cout << "Exception : Stack Empty" << endl;
    }
}
*/

// Exception handling with arguemnts
#include <iostream>
#include <string>
using namespace std;
class dist
{
private:
    int feet, inch;

public:
    class exInch
    {
    public:
        int exIn;
        exInch(int num)
        {
            exIn = num;
        }
    };
    dist(int ft, int in)
    {
        if (in >= 12)
            throw exInch(in);
        feet = ft;
        inch = in;
    }
};
int main()
{
    try
    {
        dist d1(5, 11);
        dist d2(5, 13);
    }
    catch (dist::exInch Ix)
    {
        cout << "EXCEEDED INCHES LIMIT\nMax.limit = 11\nPassed inches = " << Ix.exIn << endl;
    }
}