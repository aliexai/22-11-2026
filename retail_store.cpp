#include<iostream>
using namespace std;
int main(){
    int item_purchase{0};
    float total_cost{0},current{0},loyal{0};
    bool loyalt_program;
    cout<<"How much you item Purchased ? : ";
    cin>>item_purchase;
    cout<<"Enter Total Price : ";
    cin>>total_cost;
    cout<<"Are You Belong to Loyalty Program Answer in (1 for Yes and 0 for No) :";
    cin>>loyalt_program;
    if (item_purchase > 10){
        if( total_cost>1000){
            current = total_cost-(total_cost*(0.20));
        }
        else if(total_cost>=500 && total_cost<=1000){
            current = total_cost-(total_cost*(0.15));
        }
        else{
            current = total_cost-(total_cost*(0.10));
        }
    }
    else{
        current = total_cost;
    }
    if (loyalt_program == 1){
        loyal = current * (0.05);
        cout<<"Final Price : "<<current-loyal<<endl;
    }
    else{
        cout<<"Final Price : "<<current<<endl;
    }
}