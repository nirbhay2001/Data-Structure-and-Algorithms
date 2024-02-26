#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[5];
cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

cout << arr[3];

// 2D array
int arr1[3][5];
arr1[1][3] = 78;
cout << arr1[1][3];


// String

string str = "Striver";
cout << str[1];

int len = str.size();
cout << len;
cout << str[len-1];
str[len-1] = 'z';



    return 0;
}