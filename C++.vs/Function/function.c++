#include<iostream>
using namespace std;

int add(int num1,int num2){
    int sum = num1+num2;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
   cout<<add(a,b)<<endl; 
    return 0;
}

//Write a program to print a given number using function

#include<iostream>
using namespace std;

int print(int a){
    cout<<a<<endl;
    return 0;
}

int main(){
    int a=1997;
    print(a);
    return 0;
}


#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int n){
    for (int i = 2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int a,b;
    cin>>a>>b;
for (int i = a; i <=b; i++)
{
    if(isPrime(i)==true)
    {
        cout<<i;
    }
    return 0;
}

 //-------------------------------Write a program to find the factorial of a given number.
#include<iostream>
using namespace std;
int facto(int n){
    int ans=1;
    for (int i = 2; i <=n; i++)
    {
        ans*=i;
    }
   
    return  ans;
}

int main(){
    int n;cin>>n;
    int ans =facto(n);
     cout<<ans<<endl;   
    return 0;
}



