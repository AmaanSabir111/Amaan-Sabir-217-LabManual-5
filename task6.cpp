#include<iostream>
using namespace std;
string upperlower(char c);
main(){
    char c;
    cout<<"Enter a character (A/a):";
    cin>>c;
    string ul=upperlower(c);
    cout<<"You have entered "<<ul <<c;


}
string upperlower(char c){
    return c=='A'?"Capital":"small";
}