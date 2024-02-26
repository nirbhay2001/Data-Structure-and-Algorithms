#include<bits/stdc++.h>
using namespace std;

void explainVector();

int main(){

    explainVector();

    return 0;
}

void explainVector(){

    // vector dynamic nature ka hota hai, ye ak container hai, eski size jarurat ke anusar increase karti rahti hai

    // The use of emplace_back can be more efficient, especially when dealing with complex types like custom classes, as it avoids unnecessary copying or moving of objects


    vector<int> numbers = {1, 2, 3, 4, 5};


    vector<int> v; // esase ak empty container ban jayega
    v.push_back(1);  // push_back takes a value and copies it into the vector.
    v.emplace_back(2);  // emplace_back constructs the element in place within the vector



    vector<pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2); // emplace_back ke case me curly bracket ki jarurat nahi hoti hai

    vector<int> v(5,100); // eska matlab ye hai --> {100,100,100,100,100}

    vector<int> v(5); // eska matlab ye hai --> {0,0,0,0,0}

    vector<int> v1(5,20); // eska matlab ye hai --> {20,20,20,20,20}
    vector<int> v2(v1); // vector v2 me v1 ka copy hai i.e {20,20,20,20,20}


    // let v = {20, 10, 15, 6, 7}
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " "; // output: 20 10 15 6 7

    // iterator object address ko point karta hai ye us address ko point karta hai jisme object ko rakha gya hai, esliye element ko print karane ke liye ham *(it) ka use karte hai

    // In C++, an iterator is an object that allows you to traverse through the elements of a container, such as an array, vector, list, or map, in a sequential manner. It provides a way to access the elements of the container without exposing the underlying data structure. Iterators are essential for performing various operations on containers, including searching, sorting, and modifying elements.

    /*
    
        There are several types of iterators in C++:

        1. Forward Iterators: These iterators allow you to move forward through a container one element at a time. You can read, write, and increment them.

        2. Bidirectional Iterators: These iterators are similar to forward iterators but can also move backward through the container, one element at a time.

        3. Random Access Iterators: Random access iterators provide the most functionality. You can move them both forwards and backward, and you can jump to any element in constant time. This allows for efficient arithmetic operations like addition and subtraction to navigate the container quickly.

        4. Input Iterators: Input iterators are designed for reading values from a container. They allow you to move forward through a container, but you can only read each element once.

        5. Output Iterators: Output iterators are used for writing values into a container. Like input iterators, you can move forward through a container, but you can only write to each element once.

        Iterators are used in conjunction with standard C++ algorithms, such as std::for_each, std::find, std::sort, and many others. By using iterators, you can write generic code that can work with different types of containers without needing to know their internal implementation details.
    
    */



    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // .end() is a member function of the std::vector class that returns an iterator pointing to the position just beyond the last element in the vector. It doesn't point to a valid element; it signifies the end of the container. // jab end() ka use karte hai to ye container ke last element ke address ko point nahi karta hai ye last element ke pichhe wala element ke address ko point karta hai


    // vector<int>::iterator it = v.rend(); // ye container ke first element se start karega aage jata jayega i.e ye container ke starting element se start hota hai aur container ke last element tak jata hai

    // vector<int>::iterator it = v.rbegin();// ye container ke last element ko first manega aur it++ karne per reverse me aage jata jayega i.e ye container ke last element se start hota hai aur container ke starting element tak jata hai


    // let v = {42, 24, 36}
    cout << v[0] << " " << v.at(0); // output: 42 42
    /*
    
        1. Valid Index, Non-Empty Vector:
        If v is a non-empty vector, and it has an element at index 0, then both v[0] and v.at(0) will yield the same result, which is the value of the first element in the vector. In this case, the output will be the value of that element followed by a space:

        For example, if v contains {42, 24, 36}, then the output will be 42 42

        2. Valid Index, Empty Vector:
        If v is an empty vector (i.e., it contains no elements), trying to access an element at index 0 will result in undefined behavior for v[0], while v.at(0) will throw an std::out_of_range exception. The behavior in this case is not predictable, and it's a common source of runtime errors

        3. Invalid Index (Out of Range):
        If v is not empty but doesn't have an element at index 0, both v[0] and v.at(0) will throw an std::out_of_range exception because the index is out of the valid range of the vector
    
    */


    // let v = {10, 25,39,78} 
    cout << v.back() << " "; // output: 78; back() ye container ke last element ke point karta hai, eske help se kisi bhi container ke last element ko print kara sakte hai


    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }


    for (auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }


    for(auto it : v){
        cout << it << " ";
    }


    // let v = {10,20,12,23}
    v.erase(v.begin()+1); // output: v = {10,12,23}
    // v.erase(v.begin()+1) --> v.begin()+1 ye container v ke second element ke address ko point kar raha hai, v.erase(v.begin()+1) esame erase function container v ke second element ke position ke address ko delete kar dega

    // let v = {10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4); // output: v = {10,20,35}
    // v.erase(v.begin()+2,v.begin()+4); --> eske help se kisi vector ke kisi two element ke position ke address ko erase kar sakte hai


    // Insert Function

    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(),300); // (300,100,100)
    v.insert(v.begin() + 1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(), copy.end()); // {50,50,300,10,10,100,100} / v.begin() address ke liye hai , esi address wala vactor me element ko copy karna hai


    // let v = {10,20}
    cout << v.size(); // 2


    // let v = {10,20}
    v.pop_back(); // {10}


    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40}, v2 -> {10,20}

    v.clear(); // erases the entire vector

    cout << v.empty();

}