/*
// q no 1
#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "\n Display Base ";
    }
    virtual void show()
    {
        cout << "\n Show Base";
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "\n Display Derived";
    }
    void show()
    {
        cout << "\n Show Derived";
    }
};
int main()
{
    Base B;
    Derived D;
    Base *bptr;
    cout << "\n bptr point to base";
    bptr = &B;
    bptr->display(); // calls base version
    bptr->show();    // calls base version
    cout << "\n bptr points to derived";
    bptr = &D;
    bptr->display(); // calls derived version
    bptr->show();    // calls base because show is not a virtual function
}


// qno 2

#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void get_number(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "Roll No:" << roll_number << "\n";
    }
};
class test : virtual public student
{
protected:
    float part1, part2;

public:
    void get_marks(float x, float y)
    {
        part1 = x;
        part2 = y;
    }
    void put_marks(void)
    {
        cout << "Marks obtained:"
             << "\n"
             << "Subject 1 = " << part1 << "\n"
             << "Subject 2 = " << part2 << "\n";
    }
};
class sports : public virtual student
{
protected:
    float score;

public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports " << score << "\n";
    }
};
class result : public test, public sports
{
    float total;

public:
    void display(void);
};
void result::display(void)
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "Total score:" << total << "\n";
}
int main()
{
    result student1;
    student1.get_number(678);
    student1.get_marks(30.5, 25.5);
    student1.get_score(7.0);
    student1.display();
}
*/
// q no 3
// do qo 2 using constructors
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    student(int n)
    {
        roll_number = n;
    }
    void put_number(void)
    {
        cout << "Roll No:" << roll_number << "\n";
    }
};
class test : virtual public student
{
protected:
    float part1, part2;

public:
    test(int n1, float n2, float n3) : student(n1)
    {
        part1 = n2;
        part2 = n3;
    }
    void put_marks(void)
    {
        cout << "Marks obtained:"
             << "\n"
             << "Subject 1 = " << part1 << "\n"
             << "Subject 2 = " << part2 << "\n";
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    sports(int n1, float n2) : student(n1)
    {
        score = n2;
    }
    void put_score(void)
    {
        cout << "Sports " << score << "\n";
    }
};
class result : public test, public sports
{
    float total;

public:
    result(int n1, float n2, float n3, float n4) : test(n1, n2, n3), sports(n1, n4), student(n1) {}
    void display(void);
};
void result::display(void)
{
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();
    cout << "Total score:" << total << "\n";
}
int main()
{
    result student1(678, 30.5, 25.5, 7.6);

    student1.display();
}