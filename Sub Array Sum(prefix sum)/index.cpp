#include<iostream>
using namespace std;
int main()
{
  int anh[5] = {1, 2, 3, 4, 5};
  int count = sizeof(anh) / sizeof(int);
  // cout << count << endl;
  for (int i = 0; i < count; i++)
  {
    cout << anh[i] << endl;
  }
  
}

