#include<iostream>
using namespace std;
int main(){
    float weight{0},height{0},bmi{0};
    cout<<"Enter Your Height in cm :";
    cin>>height;
    height = height/100;
    cout<<"Enter Your Weight :";
    cin>>weight;
    bmi = weight/(height * height);
    if(bmi<18.5){
        cout<<"Underweight"<<endl;
    }
    else if(bmi>= 18.5 && bmi < 24.9 ){
        cout<<"Normal Weight"<<endl;
    }
    else if(bmi>= 24.9 && bmi<29.9){
        cout<<"Overweight"<<endl;
    }
    else {
        cout<<"Obesity"<<endl;
    }
    return 0;
}