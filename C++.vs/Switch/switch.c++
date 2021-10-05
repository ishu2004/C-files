//Write a program to write a simple calculator.

#include<iostream>
using namespace std;

int main(){

int n1,n2;
cout<<"Enter two Number";
cin>>n1>>n2;

char op;
cout<<"Enter the Operand:";
cin>>op;

switch (op)
{
case '+':
    cout<<n1+n2;
    break;
case '-':
    cout<<n1-n2;
    break;
case '*':
    cout<<n1*n2;
    break;
case '/':
    cout<<n1/n2;
    break;
case '%':
    cout<<n1%n2;
    break;
default:
cout<<"still under developmant";
    break;
}

    return 0;
}

//---------------------------------------------------------------------
//Write a program to find whether an alphabet is a vowel or a consonant.
/*
#include<iostream>
using namespace std;

int main(){
 char a;

cout<<"Enter an alphabet: ";
cin>>a;
switch (a)
{
case 'a':
cout<<"It is a vowel"<<endl;
break;
case 'e':
cout<<"It is a vowel"<<endl;
break;
case 'i':
cout<<"It is a vowel"<<endl;
break;
case 'o':
cout<<"It is a vowel"<<endl;
break;
case 'u':
cout<<"It is a vowel"<<endl;
break;
default:
cout<<"It is a consonant"<<endl;
break;
}
 
    return 0;
}
