#include<iostream>
using namespace std;
int main(){
    int age{0};
    cout<<"Enter Your Age :";
    cin>>age;
    if (age > 55){
        cout<<"Charges : "<<10.00<<endl;
    }
    else if (age >= 21 && age <=55){
        cout<<"Charges : "<<15.00<<endl;
    }
    else if (age >= 13 && age <=20){
        cout<<"Charges : "<<10.00<<endl;
    }
    else if (age >= 3 && age <=12){
        cout<<"Charges : "<<5.00<<endl;
    }
    else{
        cout<<"Free "<<endl;
    }
    return 0;

}