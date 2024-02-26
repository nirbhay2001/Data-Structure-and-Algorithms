#include<bits/stdc++.h>
using namespace std;

void  explainMap();
void explainMultimap();
void explainUnorderedMap();
bool comp(pair<int,int> p1,pair<int,int> p2);
void explainExtra();

int main(){


    explainMap();
    explainMultimap();
    explainUnorderedMap();
    comp({1,4}, {2,5});
    explainExtra();

    return 0;
}

void explainMap(){

    // map unique key ko sorted order me store karta hai

    map<int, int> mpp1;

    map<int, pair<int, int>> mpp2;

    map<pair<int, int>, int> mpp3;

    mpp1[1] = 2;
    mpp1.emplace(3,1);

    mpp1.insert({2,4});

    mpp3[{2,3}] = 10;
    

    for(auto it : mpp1){
        cout << it.first << " " << it.second << endl;
        // output: 1 2
        //         2 4
        //         3 1
    }

    // let {{1,2},{2,4}{3,1}}
    // find out value using key
    cout << mpp1[1]; // output: 2
    cout << mpp1[5]; // output: null ya 0


    // let {{1,2},{2,4}{3,1}}
    auto it = mpp1.find(3);
   //  cout << *(it).second; // output: 1

    auto it = mpp1.find(5);


    // This is the syntax
    auto it = mpp1.lower_bound(2);

    auto it = mpp1.upper_bound(3);

    // erase, swap, size, empty, are same as above
}

void explainMultimap(){
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here

}

void explainUnorderedMap(){

    // same as set and unordered_set difference.

}

bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second <p2.second){
        return true;
    }else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;
    }
    return false;
}

void explainExtra(){

}