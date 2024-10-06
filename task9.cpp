#include<iostream>
using namespace std;
string timetravel(int h,int m,int tm,int th);
main(){
    int h,m,tm,th;
cout<<"Enter hours:";
cin>>h;
cout<<"Enter minutes:";
cin>>m;
string tt=timetravel(h,m,tm,th);
cout<<tt;


}
string timetravel(int h,int m,int tm,int th){
    tm=(m+15)%60;
    th=h+(m+15)/60;
    th=th%24;
    return to_string(th)+":"+to_string(tm);
    
    


}