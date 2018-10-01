  
#include <iostream> 
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string studentInfo; 
    string::size_type pos = 0;
    string::size_type substrLen;

    cout << "Enter a student's name, social security number, "
         << "user id, and password in one line: " << endl;
    getline(cin, studentInfo);
    cout << endl;

    for (int i = 0; i < 9; i++)
    {
        pos = studentInfo.find_first_of("0123456789", pos);
        studentInfo.replace(pos, 1, "x");
    }

    pos = studentInfo.find(' ', pos);
    pos = studentInfo.find(' ', pos + 1);

    string temp = studentInfo.substr(pos, 20);

    substrLen = temp.length();
    temp = "";
    for (string::size_type i = 0; i < substrLen - 1; i++)
        temp.append("x"); 

    studentInfo.replace(pos + 1, substrLen, temp);

    cout << studentInfo << endl;

    return 0;
}

