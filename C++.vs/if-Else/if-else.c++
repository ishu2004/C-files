
#include<iostream>
using namespace std;

int main(){
    //you can vote or not
    int age;
    cout<<"Enter Age"<<endl;  cin>>age;

    if (age>=18)
    {cout<<"You can vote"<<endl;}
    else
    {cout<<"You can not vote";}
    
   // return 0;
//}


//TELL grater between two number
/*

#include<iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;

    if(x==y){
        cout<<"Both are equal"<<endl;  }
        else if (x>y)
        {
            cout<<x<< "is greater than Y";
        }
        else
        {
            cout<<y << " is greater";
        }
        return 0;

}
*/

// Program to check if a number is even or odd.


/*
#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;

    if (n%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"old";
    }
  return 0;   

}

*/
//Program to find maximum, minimum among three numbers.
/*
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Enter Three No.";
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<a<<"is maximum ";
        }
       else
       {
           cout<<c<<"is maximum";
       }
       
    }
   else if (b>c)
   {
       cout<<b<<"is max";
   }
   else
   {
       cout<<c<<"is max";
   }
    
}
*/

//Program to check if a triangle is scalene, isosceles or equilateral.
/*
#include<iostream>
using namespace std;

int main() {
    int aside,bside,cside;
    cout<<"enter the side of triangle";
    cin>>aside>>bside>>cside;

    if(aside==bside==cside){
        cout<<"Equalatoral Triangle";
    }
    else if (aside==bside || aside==cside|| bside==cside)
    {
        cout<<"isosceles triangle"<<endl;
    }
    else
    {
           cout<<"scalene"<<endl;
    }
    
return 0;

}
