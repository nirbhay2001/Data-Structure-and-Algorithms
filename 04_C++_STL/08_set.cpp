#include<bits/stdc++.h>
using namespace std;

void explainSet();
void explainMultiSet();
void explainUSet();

int main(){

    explainSet();
    explainMultiSet();
    explainUSet();

    return 0;
}


void explainSet(){
    set<int> st; // ye unique value aur sorted form me rakhata hai

    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2,}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}


    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rend(), size(), empty(), and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it = st.find(6);

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time // ye elements ko erase karega // ye address ko erase nahi karta hai

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time // ye element ke position i.e address ko hi erase kar dega


    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last]


    // lower_bound() and upper_bound() function works in the same way as in vector it does.

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

void explainMultiSet(){

    // Everything is same as set
    // only stores duplicate element also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased // ye element ko erase kar raha hai

    int cnt = ms.count(1); // ye multiset me number of 1 ko print karega

    // only a single one erased
    // ms.erase(ms.find(1), ms.find(1) + 2); // ye element ke position i.e address ko erase karega esliye // ye sare element 1 ka poasition ko erase nahi kar payega , ye two element ke position ko erase kar dega

    // rest all function same as set

}

void explainUSet(){
    unordered_set<int> st;
    // ye element ko sorted order me store nahi karta hai lekin unique value ko hi kewal store karta hai
    // most of the time eska time complexity O(1) hota hai and worst case me eska time complexity O(n) hota hai


    // lower_bound and upper_bound function does not works, rest all functions are same 
    // as above, it does not stores in any particular order it has a better complexity than set in most cases, except some when collision happens
}
