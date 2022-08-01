#include <iostream>
using namespace std;

int main(){
    int values_num, Nums, even_count = 0, odd_count = 0, pos_count = 0, neg_count = 0;
    cin>>values_num;
    for(int i = 0; i < values_num; i++){
        cin>>Nums;
        if(Nums < 0){
            neg_count++;
        }
        else if(Nums > 0){
            pos_count++;
        }
        if(Nums % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Even: "<<even_count<<endl;
    cout<<"Odd: "<<odd_count<<endl;
    cout<<"Positive: "<<pos_count<<endl;
    cout<<"Negative: "<<neg_count<<endl;

    return 0;
}
