#include<bits/stdc++.h>
using namespace std;

void explainList();

int main (){

    explainList();

    return 0;
}

void explainList(){

    // list bhi ak container hota hai , ye bhi dynamic nature ka hi hota hai

    // list ko doubly linkedlist ke doura maintain kiya jata hai jabki vector ko singly linkedlist ke doura maintain kiya jata hai

    // vector me element ko insert karna costly hota hai as compared to list

    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}

    ls.push_front(5); // {5, 2, 4}
    // ls.emplace_front();{2, 4};

    // rest function same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}