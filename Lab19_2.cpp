#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1, s2;
  cout << "Please input your string: ";
  cin >> s1;
  cout << "Please input substring to find: ";
  cin >> s2;

  size_t pos = s1.find(s2, 0);
  while (pos != string::npos) {
    cout << pos << " ";
    pos = s1.find(s2, pos + 1);
  }
  cout << endl;

  return 0;
}
