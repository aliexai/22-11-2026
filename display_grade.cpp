#include<iostream>
using namespace std;
int main(){
    float obtained_marks{0},total_marks{0},percentage{0};
    cout<<"Enter Obtained Marks :";
    cin>>obtained_marks;
    cout<<"Enter Total Marks :";
    cin>>total_marks;
    percentage = (obtained_marks/total_marks)*100;
    if (percentage >=0 && percentage <= 49){
        cout<<"Grade       : F"<<endl;
        cout<<"Grade Point : 0"<<endl;
    }
    else if (percentage >=50 && percentage <= 54){
        cout<<"Grade       : D"<<endl;
        cout<<"Grade Point : 1"<<endl;
    }
    else if (percentage >=55 && percentage <= 57){
        cout<<"Grade       : C-"<<endl;
        cout<<"Grade Point : 1.7"<<endl;
    }
    else if (percentage >=58 && percentage <= 60){
        cout<<"Grade       : C"<<endl;
        cout<<"Grade Point : 2"<<endl;
    }
    else if (percentage >=61 && percentage <= 64){
        cout<<"Grade       : C+"<<endl;
        cout<<"Grade Point : 2.3"<<endl;
    }
    else if (percentage >=65 && percentage <= 69){
        cout<<"Grade       : B-"<<endl;
        cout<<"Grade Point : 2.7"<<endl;
    }
    else if (percentage >=70 && percentage <= 74){
        cout<<"Grade       : B"<<endl;
        cout<<"Grade Point : 3"<<endl;
    }
    else if (percentage >=75 && percentage <= 79){
        cout<<"Grade       : B+"<<endl;
        cout<<"Grade Point : 3.3"<<endl;
    }
    else if (percentage >=80 && percentage <= 84){
        cout<<"Grade       : A-"<<endl;
        cout<<"Grade Point : 3.7"<<endl;
    }
    else if (percentage >=85 && percentage <= 100){
        cout<<"Grade       : A"<<endl;
        cout<<"Grade Point : 4"<<endl;
    }
    else{
        cout<<"Wrong Input :"<<endl;
    }
    return 0;
}