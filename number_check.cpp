#include<iostream>
using namespace std;
int main(){
    int a{0},b{0},c{0},largest{0},second_largest{0},smallest{0};
    cout<<"Enter 1st Number :";
    cin>>a;
    cout<<"Enter 2nd Number :";
    cin>>b;
    cout<<"Enter 3rd Number :";
    cin>>c;
    if (a > b ){
        largest = a;
    }
    else if (b > a){
        largest = b;
    }
    if(largest > c){
        largest = largest;
    }
    else{
        largest = c;
    }
    if(a<b){
        smallest=a;
    }
    else if (b < a){
        smallest = b;
    }
    if (c < smallest){
        smallest = c;
    }
    second_largest= (a+b+c)-largest -smallest;
    cout<<"Largest : "<<largest<<endl;
    cout<<"Second Largest : "<<second_largest<<endl;
    cout<<"Smallest : "<<smallest<<endl;
    return 0;
}