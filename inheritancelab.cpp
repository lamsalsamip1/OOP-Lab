// BAsic inheritance
// Lab 1 q no 1 publivc derivation
/*
#include <iostream>
using namespace std;
class Base
{
private:
    int a;

public:
    int b;
    Base() {}
    Base(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    int get_a();
};
class Derived : public Base
{
private:
    int c;

public:
    Derived(int n1, int n2) : Base(n1, n2)
    {
    }
    void display();
};
int Base::get_a()
{
    return a;
}
void Derived::display()
{
    cout << "The product is c = " << get_a() * b << endl;
}
int main()
{
    Derived D(5, 10);
    D.display();
    return 0;
}

// Using private derivation
#include <iostream>
using namespace std;
class Base
{
private:
    int a;

public:
    int b;
    Base() {}
    Base(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    int get_a();
};
class Derived : private Base
{
private:
    int c;

public:
    Derived(int n1, int n2) : Base(n1, n2)
    {
    }
    void display();
};
int Base::get_a()
{
    return a;
}
void Derived::display()
{
    cout << "The product is c = " << get_a() * b << endl;
}
int main()
{
    Derived D(5, 10);
    D.display();
    return 0;
}


// qno2 Solve the multi level inheritance problem

#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int);
};
void student::get_number(int a)
{
    roll_number = a;
}

class test : public student // first derivation
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
};
void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}

class result : public test // second derivation
{
    float total;

public:
    void display(void);
};
void result::display(void)
{
    total = sub1 + sub2;
    cout << "Roll number :" << roll_number << "\n";
    cout << "Marks in sub1 = " << sub1 << "\n";
    cout << "Marks in sub2 =" << sub2 << "\n";
    cout << "Total = " << total;
}
int main()
{
    result student1;
    student1.get_number(1);
    student1.get_marks(56.0, 89.9);
    student1.display();
    return 0;
}


// qno 3
// solve the following form of inheritance
#include <iostream>

using namespace std;
class Book
{
protected:
    char author[20], date[20];
    int edition, ISBN;

public:
    void set_data();
};
class recording
{
protected:
    char speaker[20], recDate[20], duration[20];

public:
    void input_data();
};
class TalkingBook : public Book, public recording
{
public:
    void display();
};
void Book::set_data()
{
    cout << "Enter the author name, publication date, book edition and ISBN" << endl;
    cin >> author >> date >> edition >> ISBN;
}
void recording::input_data()
{
    cout << "Enter the speaker name,recording duration and the recording date" << endl;
    cin >> speaker >> duration >> recDate;
}
void TalkingBook::display()
{
    cout << "\n*****************************************************************\n";
    cout << "Author: " << author << "\nPublication Date: " << date << "\nEdition: " << edition
         << "\nISBN: " << ISBN << "\nSpeaker: " << speaker << "\nDuration: " << duration << "\nRecording Date: "
         << recDate << endl;
    cout << "\n*****************************************************************\n";
}
int main()
{
    TalkingBook B1;
    B1.set_data();
    B1.input_data();
    B1.display();
    return 0;
}

// qno4 Solve the following form of hybrid inheritance
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int);
};
class test : public student // first derivation
{
protected:
    float sub1;
    float sub2;

public:
    void get_marks(float, float);
};

class sports
{
protected:
    int marks;

public:
    void get_evaluation(int);
};
class result : public test, public sports
{
    float total;

public:
    void display(void);
};
void student::get_number(int a)
{
    roll_number = a;
}
void test::get_marks(float x, float y)
{
    sub1 = x;
    sub2 = y;
}
void sports::get_evaluation(int a)
{
    marks = a;
}
void result::display(void)
{
    total = sub1 + sub2 + marks;
    cout << "Roll number :" << roll_number;
    cout << "Marks:\nSub1: " << sub1 << "\nSub2: " << sub2 << "\nSports: " << marks << endl;
    cout << "Total = " << total;
}
int main()
{
    result R1;
    R1.get_number(3);
    R1.get_marks(55, 89);
    R1.get_evaluation(76);
    R1.display();
    return 0;
}

// q no 5
#include <iostream>
using namespace std;
class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "alpha initialized \n";
    }
    void show_x(void)
    {
        cout << "x = " << x << "\n";
    }
};
class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "beta initialized\n";
    }
    void show_y(void)
    {
        cout << "y=" << y << "\n";
    }
};
class gamma : public beta, public alpha // order of execution
{
    int m, n;

public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "gamma initialized\n";
    }
    void show_mn(void)
    {
        cout << "m=" << m << "\n"
             << "n = " << n << "\n";
    }
};
int main()
{
    gamma g(5, 10.75, 20, 30);
    g.show_x();
    g.show_y();
    g.show_mn();
}
*/
// solve qno5 adding destructor
#include <iostream>
using namespace std;
class alpha
{
    int x;

public:
    alpha(int i)
    {
        x = i;
        cout << "alpha initialized \n";
    }
    void show_x(void)
    {
        cout << "x = " << x << "\n";
    }
    ~alpha()
    {
        cout << "\n------------alpha destroyed--------------";
    }
};
class beta
{
    float y;

public:
    beta(float j)
    {
        y = j;
        cout << "beta initialized\n";
    }
    void show_y(void)
    {
        cout << "y=" << y << "\n";
    }
    ~beta()
    {
        cout << "\n----------beta destroyed--------------";
    }
};
class gamma : public beta, public alpha // order of execution
{
    int m, n;

public:
    gamma(int a, float b, int c, int d) : alpha(a), beta(b)
    {
        m = c;
        n = d;
        cout << "gamma initialized\n";
    }
    void show_mn(void)
    {
        cout << "m=" << m << "\n"
             << "n = " << n << "\n";
    }
    ~gamma()
    {
        cout << "\n-----------gamma destroyed-------------------";
    }
};
int main()
{
    gamma g(5, 10.75, 20, 30);
    g.show_x();
    g.show_y();
    g.show_mn();
}