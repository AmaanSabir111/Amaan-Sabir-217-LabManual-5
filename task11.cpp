#include<iostream>
using namespace std;
string calculatePoolState(int volume,int f1,int f2,float h,int v1,int v2,int tv,int vfr1,int vfr2,int p1v,int p2v);
main(){
    int volume,f1,f2,v1,v2,tv,vfr1,vfr2,p1v,p2v;
    float h;
    cout<<"Enter the volume of pool in liters:";
    cin>>volume;
    cout<<"Enter flow rate of the first pipe per hour:";
    cin>>f1;
    cout<<"Enter flow rate of the second pipe per hour:";
    cin>>f2;
    cout<<"Enter hours that the worker is absent:";
    cin>>h;
    string vfr=calculatePoolState(volume,f1,f2,h,v1,v2,tv,vfr1,vfr2,p1v,p2v);
    cout<<vfr;
    

}
string calculatePoolState(int volume,int f1,int f2,float h,int v1,int v2,int tv,int vfr1,int vfr2,int p1v,int p2v){
    // f1=volume/h;
    // f2=volume/h;
    vfr1=f1*h;
    vfr2=f2*h;
    v1=f1*h;
    v2=f2*h;
    tv=(v1+v2)/10;
    p1v=(vfr1*100)/(tv*10);
    p2v=(vfr2*100)/(tv*10);
    if(p1v+p2v>=100){
        return "For" + to_string(h) + "hours, the pool overflows with"+to_string((v1+v2)-volume)+"liters."; 
    }
    return "The pool is " + to_string(tv) + "%"+ "full."+"Pipe1:"+to_string(p1v)+"%"+"Pipe2:"+to_string(p2v)+"%";
    


}