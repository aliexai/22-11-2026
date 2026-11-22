#include<iostream>
using namespace std;
int main(){
    int destination{0},duration_of_trip{0};
    double paris_price{1200},new_york{1000},tokyo_price{1500},charges{0},vip_charges{0};
    bool vip_member;
    cout<<" 1 Paris: Base price Rs 1,200 "<<endl;
    cout<<" 2 New York: Base price Rs 1,000 "<<endl;
    cout<<" 3 Tokyo: Base price Rs 1,500 "<<endl;
    cout<<"Your Destination of Trip Chose a Number :";
    cin>>destination;
    cout<<"Are you VIP Member ? Answer (1 for yes and 0 for No) in this form -> :";
    cin>>vip_member;
    switch(destination){
        case 1:{            
            cout<<"Enter the Duration Day of Trip in Number : ";
            cin>>duration_of_trip;
            if(duration_of_trip<5){
                charges = paris_price*(0.05); 
                if(vip_member == 1){
                    vip_charges = (charges+paris_price)*(0.15);
                    cout<<"Final Price of your Package :"<<(charges+paris_price)-vip_charges<<endl;
                    break;
                }                               
                cout<<"Final Price of your Package : "<<charges+paris_price<<endl;
            }
            else if(duration_of_trip >=5 && duration_of_trip <=10){
                if(vip_member == 1){
                    vip_charges = (paris_price)*(0.15);
                    cout<<"Final Price of your Package :"<<paris_price-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price No Extra Charges : "<<paris_price<<endl;                
            }
            else{                
                charges = paris_price*(0.10);                
                if(vip_member == 1){
                    vip_charges = (paris_price-charges)*(0.15);
                    cout<<"Final Price of your Package :"<<(paris_price-charges)-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price of your Package : "<<paris_price-charges<<endl;
            }
            break ;
        }
        case 2:{            
            cout<<"Enter the Duration Day of Trip in Number : ";
            cin>>duration_of_trip;
            if(duration_of_trip<5){
                charges = new_york*(0.05);
                if(vip_member == 1){
                    vip_charges = (charges+new_york)*(0.15);
                    cout<<"Final Price of your Package :"<<(charges+new_york)-vip_charges<<endl;
                    break;
                }                                
                cout<<"Final Price of your Package : "<<charges+new_york<<endl;
            }
            else if(duration_of_trip >=5 && duration_of_trip <=10){
                if(vip_member == 1){
                    vip_charges = (new_york)*(0.15);
                    cout<<"Final Price of your Package :"<<new_york-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price No Extra Charges : "<<new_york<<endl;                
            }
            else{                
                charges = new_york*(0.10);                
                if(vip_member == 1){
                    vip_charges = (new_york-charges)*(0.15);
                    cout<<"Final Price of your Package :"<<(new_york-charges)-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price of your Package : "<<new_york-charges<<endl;
            }
            break ;
        }
        case 3:{            
            cout<<"Enter the Duration Day of Trip in Number : ";
            cin>>duration_of_trip;
            if(duration_of_trip<5){
                charges = tokyo_price*(0.05);                                
                if(vip_member == 1){
                    vip_charges = (charges+tokyo_price)*(0.15);
                    cout<<"Final Price of your Package :"<<(charges+tokyo_price)-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price of your Package : "<<charges+tokyo_price<<endl;
            }
            else if(duration_of_trip >=5 && duration_of_trip <=10){
                if(vip_member == 1){
                    vip_charges = (tokyo_price)*(0.15);
                    cout<<"Final Price of your Package :"<<tokyo_price-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price No Extra Charges : "<<tokyo_price<<endl;                
            }
            else{                
                charges = tokyo_price*(0.10);                
                if(vip_member == 1){
                    vip_charges = (tokyo_price-charges)*(0.15);
                    cout<<"Final Price of your Package :"<<(tokyo_price-charges)-vip_charges<<endl;
                    break;
                }
                cout<<"Final Price of your Package : "<<tokyo_price-charges<<endl;
            }
            break ;
        }
        default:{
            cout<<"Wrong Input :"<<endl;            
        }        
    }
    return 0;
}