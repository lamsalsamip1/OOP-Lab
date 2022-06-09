/*
// formatted I/O
// stored on disk as series of characters
// easy to implement but inefficient with large numbers
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char ch = 'A';
    int num = 1;
    double d = 1.01;
    string str1 = "Formatted I/O";  //Only formatted is written because this method does not support blanks
    // we need to use char array

    ofstream outfile("output.txt"); // create ofstream object

    outfile << ch << num << " " << d << " " << str1; // write data to file
    cout << "Written to file";
}

// reading from a fle
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    char ch;
    int num;
    double d;
    string str1;

    ifstream infile("output.txt"); // create ifstream object

    infile >> ch >> num >> d >> str1;

    cout << ch << " "
         << num << " "
         << d << " "
         << str1;
}

// Strings with Embedded blanks, use character array
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch = 'A';
    int num = 1;
    double d = 1.01;
    char str1[15] = "Formatted I/O"; // Only formatted is written because this method does not support blanks
    // we need to use char array

    ofstream outfile("output.txt"); // create ofstream object

    outfile << ch << num << " " << d << " " << str1; // write data to file
    cout << "Written to file";
}

// oline.cpp
// file output with strings
#include <iostream>
#include <fstream> //for file I/O
using namespace std;
int main()
{
    ofstream outfile("output.txt"); // create file for output
    // send text to file
    outfile << "I fear thee, ancient Mariner !\n";
    outfile << "I fear thy skinny hand\n";
    outfile << "And thou art long, and lank, and brown,\n";
    outfile << "As is the ribbed sea sand.\n";
    return 0;
}

// we can read such files with \n in each line through getline function
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int max = 90;
    char temp[max];
    ifstream infile("output.txt");
    while (!(infile.eof()))
    {
        infile.getline(temp, max); // reads the current line to buffer , max is the max buffer size
        cout << temp << endl;
    }
    return 0;
}

// while( infile.good() ) // until any error encountered
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    int max = 90;
    char temp[max];
    ifstream infile("output.txt");
    while (!(infile.eof()))
    {
        infile.getline(temp, max, '.'); // reads the current line to buffer , max is the max buffer size
        cout << temp << endl;
    }
    return 0;
}

// character IO
// get and put functions are used
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string str = "This is a string that will be written to file chartacter wise";

    ofstream outfile("output.txt");

    for (int j = 0; j < str.size(); j++)
    {
        outfile.put(str[j]);
    }
    cout << "Written to file";
    return 0;
}

// re3ad using put
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    ifstream infile("output.txt");

    while (!(infile.eof()))
    {
        infile.get(ch);
        cout << ch;
    }

    return 0;
}

// BINARY I/O
// we use write() and read()
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int j, max = 5;
    int arr[max], arr1[max];
    cout << "Enter 5 integers" << endl;
    for (j = 0; j < max; j++)
    {
        cin >> arr[j];
    }
    ofstream os("binary.dat", ios::binary);
    os.write((char *)&arr, max * sizeof(int));
    cout << "Data Written to file" << endl;
    os.close(); // have to do while perfoprming multiple actions

    ifstream is("binary.dat", ios::binary);
    is.read((char *)&arr1, max * sizeof(int));

    cout << "Data read from file:" << endl;
    for (j = 0; j < max; j++)
    {
        cout << " " << arr1[j];
    }
}

// Wiriting an onject to disk
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    int rollNum;
    char fName[20];

public:
    void getData()
    {
        cout << "Enter roll number and first name" << endl;
        cin >> rollNum >> fName;
    }
};
using namespace std;
int main()
{
    Student S;
    S.getData();
    ofstream outfile("binary.dat", ios::binary);
    outfile.write((char *)&S, sizeof(S));
    return 0;
}

// reading object from disk
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    int rollNum;
    char fName[20];

public:
    void displayData()
    {
        cout << "Roll Number\t:" << rollNum << endl;
        cout << "Name\t\t:" << fName << endl;
    }
};
int main()
{
    Student S1;
    ifstream infile("binary.dat", ios::binary);
    infile.read((char *)&S1, sizeof(S1));
    S1.displayData();
}

// operating with multiple objects
#include <iostream>
#include <fstream>
using namespace std;
class Student
{
private:
    int rollNum;
    char fName[20];

public:
    void getData()
    {
        cout << "Enter roll number and first name" << endl;
        cin >> rollNum >> fName;
    }
    void displayData()
    {
        cout << rollNum << "\t\t" << fName << endl;
    }
};
using namespace std;
int main()
{
    char ch;
    Student S;
    fstream file;
    file.open("binary.dat", ios::app | ios::out | ios::in | ios::binary);
    do
    {
        S.getData();
        file.write((char *)&S, sizeof(S));
        cout << "Do you want to enter another student(y/n)?" << endl;
        cin >> ch;
    } while (ch == 'y');
    cout << "Current get pointer location: " << file.tellg() << endl;
    file.seekg(0); // reset pointer to start of file

    cout << "Roll Number\tName" << endl;
    file.read((char *)&S, sizeof(S));
    while (!(file.eof()))
    {

        S.displayData();
        file.read((char *)&S, sizeof(S));
    }
    return 0;
}

// ferrors.cpp
// checks for errors opening file
#include <fstream> // for file functions
#include <iostream>
using namespace std;
int main()
{
    ifstream file;
    file.open("binary1.dat");
    if (!file)
        cerr << "\nCan't open GROUP.DAT";
    else
        cout << "\nFile opened successfully.";

    cout << "\nError state = " << file.rdstate();

    cout << "\ngood() = " << file.good();
    cout << "\neof() = " << file.eof();
    cout << "\nfail() = " << file.fail();
    cout << "\nbad() = " << file.bad() << endl;
    file.close();
    return 0;
}
*/
// ochar.cpp
// file output with characters

// overloading insertion extraction operators
// cout and cin

#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance() {}
    friend istream &operator>>(istream &s, Distance &d);
    friend ostream &operator<<(ostream &o, Distance &d);
};
istream &operator>>(istream &s, Distance &d)
{
    cout << "Enter feet:";
    s >> d.feet;
    cout << "Enter inches:";
    s >> d.inches;
    return s;
}
ostream &operator<<(ostream &o, Distance &d)
{
    o << d.feet << " feet " << d.inches << " inches" << endl;
    return o;
}
int main()
{
    Distance d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << "\nOutput using overloading extraction operator\n\n";
    cout << "Dist1 = " << d1 << "Dist2 = " << d2 << "Dist3 = " << d3;
    return 0;
}