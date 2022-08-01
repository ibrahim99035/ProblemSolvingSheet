#include <iostream>
using namespace std;

int main(){
    int pass;
    bool flag = true;
    const int correct = 1999;
    while(flag){
        cin>>pass;
        if(pass == correct){
            cout<<"Correct"<<endl;
            flag = false;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }

    return 0;
}
