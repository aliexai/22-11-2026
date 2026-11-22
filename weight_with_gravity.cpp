#include<iostream>
using namespace std;
int main(){
    float venus_g{0.78},mars_g{0.39},jupiter_g{2.65},saturan_g{1.17},uranus_g{1.05},neptune_g(1.23),earth_g{9.8},weignt{0};
    int choice{0};
    cout<<"Please enter your current earth weight :";
    cin>>weignt;
    cout<<"I have information for the following planets:"<<endl;
    cout<<"1. Venus    2. Mars    3. Jupiter "<<endl;
    cout<<"4. Saturn   5. Uranus  6. Neptune "<<endl;
    cout<<"Which planet are you visiting ? ";
    cin>>choice;
    switch(choice){
        case 1:{
        cout<<"Your weight would be "<<weignt*venus_g<<" pounds on that planet. "<<endl;
        break;
        }
        case 2:{
        cout<<"Your weight would be "<<weignt*mars_g<<" pounds on that planet. "<<endl;
        break;
        }
        case 3:{
        cout<<"Your weight would be "<<weignt*jupiter_g<<" pounds on that planet. "<<endl;
        break;
        }
        case 4:{
        cout<<"Your weight would be "<<weignt*saturan_g<<" pounds on that planet. "<<endl;
        break;
        }
        case 5:{
        cout<<"Your weight would be "<<weignt*uranus_g<<" pounds on that planet. "<<endl;
        break;
        }
        case 6:{
        cout<<"Your weight would be "<<weignt*neptune_g<<" pounds on that planet. "<<endl;
        break;
        }
        default:{
            cout<<"Wrong Input :"<<endl;
        }        
    }
    return 0;
}