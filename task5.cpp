#include<iostream>
#include<cmath>
using namespace std;
void qe(float a,float b,float c,float deter,float r1,float r2);
main(){
    float a,b,c,deter,r1,r2;
    cout<<"Enter the value of a:";
    cin>>a;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"Enter the value of c:";
    cin>>c;
    deter=pow(b,2)-4*a*c;
    qe(a,b,c,deter,r1,r2);


}
void qe(float a,float b,float c,float deter,float r1,float r2){
    if(deter>0){
        r1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        r2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"Solution:"<<r1 <<"and"<<r2;
    }
    if(deter==0){
        r1=-b/2*a;
        
        cout<<"Complex Solution:"<<r1;
    }
    if(deter<0){
        r1=(-b/2*a);
        float img1=sqrt(-(pow(b,2)-4*a*c))/2*a;
        r2=(-b/2*a);
        float img2=-sqrt(-(pow(b,2)-4*a*c))/2*a;
        cout<<"Complex Solution:"<<r1<<"+"<<img1<<"i" <<"and"<<r2<<"+"<<img2<<"i";
    }
}