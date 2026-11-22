    #include<iostream>
    using namespace std;
    int main(){
        float cgpa{0};
        cout<<"Enter Your CGPA : ";
        cin>>cgpa;
        if(cgpa<1.7){
            cout<<"Student Dropped :"<<endl;
        }
        else if (cgpa >= 1.7 && cgpa < 2.0){
            cout<<"Student on Probation :"<<endl;        
        }
        else{
            cout<<"Student is Safe :"<<endl;
        }
        return 0;
    }