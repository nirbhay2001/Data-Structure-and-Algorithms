#include<bits/stdc++.h>
using namespace std;

int main(){

    // integer data type
    int p = 10;
   // long
   long x = 15;
   long r;
   cin >> r; 

   long long q = 150000000000;

   // float, double data type
   float y = 5.6; // float kewal float type ke value ko hi store kar sakta hai
    double z = 5;// double data type integer and float value dono ko store kar sakta hai

   cout << "Value of y: " << z;


   // string data type

   string s1;
   string s2;

   cin >> s1 >> s2; // ye string ko tab tak leta hai jab tak space n mil jaye , ye space per terminate ho jata hai
   cout << s1 << " " << s2; 

   string str;
   getline(cin,str); // ye space per terminate nahi hota hai, ye store ko bhi leta hai ye next line per terminate ho jata hai
   cout << str;

   // char
   char ch = 'g';
   cout << ch;



    return 0;
}