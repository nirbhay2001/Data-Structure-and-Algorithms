#include<bits/stdc++.h>
using namespace std;

int main(){

    // Write a program that takes an input of age and prints if you are adult or not

    int age;
    cin >> age;

    if(age>=18){
        cout << "You are an Adult!";
    }else{
        cout << "You are not an Adult";
    }
    


    /*
    
        A school has following rules for grading system:
        a. Below 25 - F
        b. 25 to 44 - E
        c. 45 to 49 - D
        d. 50 to 59 - C
        e. 60 to 79 - B
        f. 80 to 100 - A
        Ask user to enter marks and print the corresponding grade.
    
    */

   int marks;
   cin >>  marks;

   if(marks < 25){
    cout << "Your Grade is F";
   }
   else if( marks>=25 && marks <= 44){
    cout << "Your Grade is E";
   }
   else if( marks>=45 && marks <= 49){
    cout << "Your Grade is D";
   }
   else if( marks>=50 && marks <= 59){
    cout << "Your Grade is C";
   }
   else if( marks>=60 && marks <= 79){
    cout << "Your Grade is B";
   }
   else if( marks>=80 && marks <= 100){
    cout << "Your Grade is A";
   }else{
    cout << "Please Enter Marks 0 to 100";
   }

   return 0; 
}