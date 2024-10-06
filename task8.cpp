#include<iostream>
using namespace std;
string oddoreven(int sum);
main(){
    int d1,d2,d3,d4,d5,sum;
    cout<<"Enter a five-digit number:";
    cin>>d1,d2,d3,d4,d5;
    sum=d1+d2+d3+d4+d4+d5;
    string result=oddoreven(sum);
    cout<<result;

}
string oddoreven(int sum){
    return sum%2==1?"Oddish":"Evenish";

}