#include<iostream>
using namespace std;
string numtotext(int num,string text,int ones,int tens);
main(){
    int num,ones,tens;
    string text;
    cout<<"Enter the number:";
    cin>>num;
    string t=numtotext(num,text,ones,tens);
    cout<<t;
}
string numtotext(int num,string text,int ones,int tens){
    if(num<20){
        switch (num)
        {
        case 0:
        text="zero";
            
            break;
            case 1:
        text="one";
            
            break;
            case 2:
        text="two";
            
            break;
            case 3:
        text="three";
            
            break;
            case 4:
        text="four";
            
            break;
            case 5:
        text="five";
            
            break;
            case 6:
        text="six";
            
            break;

            case 7:
        text="seven";
            
            break;

            case 8:
        text="eight";
            
            break;
            case 9:
        text="nine";
            
            break;
            case 10:
        text="ten";
            
            break;
            case 11:
        text="eleven";
            
            break;
            case 12:
        text="twelve";
            
            break;
            case 13:
        text="thirteen";
            
            break;
            case 14:
        text="fourteen";
            
            break;
            case 15:
        text="fifteen";
            
            break;
            case 16:
        text="sixteen";
            
            break;
            case 17:
        text="seventeen";
            
            break;
            case 18:
        text="eighteen";
            
            break;
            case 19:
        text="ninteen";
            
            break;

        
        default:
            break;
        }
    }
    else{
        tens=num/10;
        ones=num%10;
    }
    switch (tens)
    {
    case 2:
        text="twenty";
        break;
        case 3:
        text="thirty";
        break;
        case 4:
        text="fourty";
        break;
        case 5:
        text="fifty";
        break;
        case 6:
        text="sixty";
        break;
        case 7:
        text="seventy";
        break;
        case 8:
        text="eighty";
        break;
        case 9:
        text="ninty";
        break;
    
    default:
        break;
    }
    if(ones>0){
        text +="-";
        switch(ones){
            case 1:text +="one"; break;
            case 2:text +="two"; break;
            case 3:text +="three"; break;
            case 4:text +="four"; break;
            case 5:text +="five"; break;
            case 6:text +="six"; break;
            case 7:text +="seven"; break;
            case 8:text +="eight"; break;
            case 9:text +="nine"; break;
            
        }
    }
return text;
}