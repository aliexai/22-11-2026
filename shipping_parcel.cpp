#include<iostream>
using namespace std;
int main(){
    float weight_package{0};
    int chose{0};
    cout<<"Enter Your Package Weight :";
    cin>>weight_package;
    cout<<"1 For the destination is domestic ->"<<endl;
    cout<<"2 For the destination is International ->"<<endl;
    cout<<"Chose : ";
    cin>>chose;
    if (weight_package>10){
        if(chose == 1){
            cout<<"Cost Rs 20 "<<endl;
        }
        else if (chose == 2){
            cout<<"Cost Rs 50 "<<endl;
        }
    }
    else if (weight_package>=5 && weight_package <=10){
        if(chose == 1){
            cout<<"Cost Rs 15 "<<endl;
        }
        else if (chose == 2){
            cout<<"Cost Rs 40 "<<endl;
        }
    }
    else{
        if(chose == 1){
            cout<<"Cost Rs 10 "<<endl;
        }
        else if (chose == 2){
            cout<<"Cost Rs 30 "<<endl;
        }
    }
    return 0;
}