#include<bits/stdc++.h>
using namespace std;

int f(int 4){
    if(n <= 1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.text","r",stdin);
    freopen("output.text","w",stdout);
    #endif

    cout << f(4);

    return 0;
}