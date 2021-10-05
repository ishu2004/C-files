
///incorect
/*
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout<<"prime no";
            break;}
           else
           {
               cout<<"not prime";
           }
          
        
    }
 return 0;   
}*/
/*
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int r=0;
    while (n>0)
    {
        int last= n%10 ;
        r = r*10 + last;
        n=n/10;
    }
    cout<<r;
    
    return 0;
}
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int r=0;
    int realn = n;
while (n>0)
{
    int last=n%10;
   sum+= pow(last,3);

}


    return 0;
}
