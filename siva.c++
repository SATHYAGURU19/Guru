#include <iostream>
using namespace std;
int main()
{
        string name;
        string a;
        int c;
        int n;
        int m;
        int a1;
        int r;
        int b;
        char x;
        cout<<"ENTER 1.(BOOKING ROOMS) 2. (CANCEL YOUR BOOKING:) 3.(NUMBER OF ROOMS AND TYPES)";
        cin>>m;
        switch(m){
        case 1:
        cout<<"WELCOME TO ENGINEER's HOTEL"<<endl;
        cout<<"*********"<<endl;
        cout<<"BOOKING ROOMS....."<<endl;
        cout<<"PLEASE ENTER YOUR NAME:";
        cin>>name;
        cout<<"ENTER YOUR AADHAR ID:";
        cin>>a;
        cout<<"ENTER YOU BOOKING ID";
        cin>>b;
        cout<<"HOW MANY NIGHT DID YOU STAY:";
        cin>>n;
        cout<<"ENTER NUMBER OF ROOMS";
        cin>>r;
        cout<<endl;
        cout<<endl;
        cout<<"BOOKING STATUS"<<endl;
        cout<<"*************"<<endl;
        cout<<"BOOKING ID:"<<b<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"AADHAR ID:"<<a<<endl;
        cout<<"NIGHT YOU WILL STAY:"<<n<<endl;
        cout<<"NUMBER OF ROOMS"<<r<<endl;
        
        cout<<"SELECT YOUR ROOM TYPE(1.SINGLE 2.DOUBLE  3.SUIT)";
        cin>>c;
        
        switch(c){
         case 1:
         cout<<endl;
         cout<<"SINGLE ROOM"<<endl;;
         cout<<"AVAIL(1 or 0)"<<endl;
         cin>>a1;
         cout<<"AVAILIBILITY ROOMS"<<(a1 )?" SINGLE ROOMS ARE BOOKED":" NOT AVAILABLE ";
         cout<<endl;
         
         
         break;
         case 2:
         cout<<endl;
         cout<<"DOUBLE ROOM"<<endl;
         cout<<"AVAIL(1 0r 0)"<<endl;
         cin>>a1;
         cout<<"AVAILIBILITY ROOMS:"<<(a1)?" DOUBLE ROOMS ARE BOOKED":"NOT AVAILABLE";
         cout<<endl;
         
         break;
         case 3:
         cout<<endl;
         cout<<"SUIT ROOM "<<endl;
         cout<<"AVAIL(1 or 0)"<<endl;
         cin>>a1;
         cout<<"AVAILIBILITY ROOMS"<<(a1 )?" SUIT ROOMS ARE  BOOKED":" NOT AVAILABLE";
         cout<<endl;
         break;
         default:
         cout<<"ROOMS ARE NOT AVAILABLE";
         break;
         
        }
         
         try{
             
         
         if(a1==0){
             throw x;
         }
         
         
         }
         catch(char x){
             cout<<"EXCEPTION IS CAUGHT:YOUR BOOKING IS CANCEL"<<x<<endl;
         }
        
        
    break;
    case 2:
    cout<<"IF YOU WANT TO CANCEL YOUR BOOKING"<<endl;
    int z;
    int x1;
    b=12;
    cout<<"ENTER BOOKING ID:";
    cin>>z;
    try{
        if(b!=z ){
            throw -1;
        }
        else{
            cout<<"YOUR BOOKING IS CANCEL"<<endl;
        }
        
    }
    catch(int x1){
        cout<<"EXCEPTION IS CAUGHT:INVALID BOOKING ID "<<endl;
    }
    break;
        
        case 3:
        int r;
        int a3;
        int a2=20;
        
        
        cout<<"AVAIABLE ROOMS(1s or 2d or 3s)"<<endl;
        cin>>r;
        
        switch(r){
            case 1:
            
            cout<<"ENTER AVAIL ROOMS(1 FOR AVAIL OR ANYTHING FOR NOT AVAIL)";
            cin>>a3;
            
            if(a3==1){
                a2=a2-3;
                 cout<<"SINGLE ROOMS ARE: "<<a2<<endl;
            }
            else{
                cout<<"NOT AVAILABLE"<<endl;
            }
          
        
            break;
            case 2:
            
            
            cout<<"ENTER AVAIL ROOMS(1 FOR AVAIL OR ANYTHING FOR NOT AVAIL)";
            cin>>a3;
            if(a3==1){
                a2=a2-5;
                cout<<"DOUBLE ROOMS ARE:"<<a2<<endl;
            }
            else{
                cout<<"NOT AVAILABLE"<<endl;
            }
            
            break;
            case 3:

        
            cout<<"ENTER AVAIL ROOMS(1 FOR AVAIL OR ANYTHING FOR NOT AVAIL)";
            cin>>a3;
            if(a3==1){
                a2=a2-3;
                 cout<<"SUIT ROOMS ARE: "<<a2<<endl;
            }
            else{
                cout<<"NOT AVAILABLE"<<endl;
            }
          
        
            break;
        }
            
        }
        
        
    return 0;
}
