#include <iostream>
using namespace std;
int main() {
    int num, n, i;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++){
        cin>>num;
        arr[i] = num;
    }
    int max = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    return 0;
}