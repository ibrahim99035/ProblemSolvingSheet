#include <iostream>
using namespace std;

int factorial(long n){
    if(n > 1){
        return n * factorial(n - 1);
    }
    else{
        return 1;
    }
}

int main() {
    int t, res;
    long n;
    cin>>t;
    for(int i = 0; i < t; i++){
        cin>>n;
        cout<<factorial(n)<<endl;
    }
    return 0;
}