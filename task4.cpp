#include <iostream>
#include <cmath>
using namespace std;
float height(float d,float a);
main(){
    float distance,angle;
    cout<<"Enter the distance from the base of the tree (in feet):";
    cin>>distance;
    cout<<"Enter the angle of elevation (in degrees):";
    cin>>angle;
    float heightoftree=height(distance,angle);
    cout<<"The height of tree is:"<<heightoftree;

}
float height(float d,float a){
    return d*tan(a*3.14/180);

}
