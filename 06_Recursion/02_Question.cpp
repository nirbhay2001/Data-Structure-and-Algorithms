#include<bits/stdc++.h>
using namespace std;

int i = 0;

void printName(){
    if(i == 5){
        return;
    }

    printf("Nirbhay Gupta");
    printf("\n");
    i++;
    printName();
}

int main(){

    printName();

    return 0;
}