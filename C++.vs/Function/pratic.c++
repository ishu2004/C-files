/*
#include<iostream>
#include<math.h>
using namespace std;
bool isprime(int num){
    for (int i = 2; i <=sqrt(num); i++)
    {
        if (num%i==0)
        {
            return false;
        }
        
    }
    return true;
}

int main(){
int n1=2,n2=12;
//cin>>n1>>n2;

for (int i = n1; i <= n2; i++)
{
    if (isprime(i))
    {
        cout<<i<<"   ";
    }
    
}



    return 0;
    */
   #include<iostream>
   using namespace std;
int fact(int n){
    int ans=1;
    for (int i = 2; i <= n; i++)
    {
        ans=ans*i;
    }
    return ans;
}


   int main() {
int n=10;
//cin>>n;
int ans = fact(n);
cout<<ans<<endl;

return 0;
   }
   