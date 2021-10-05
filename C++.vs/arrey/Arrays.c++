
#include<iostream>
using namespace std;

int main() {
int arr[5];
cin>>arr[0];
cin>>arr[1];
cin>>arr[2];
cin>>arr[3];
cin>>arr[4];
cin>>arr[5];

for (int i = 0; i <= 5; i++)
{
    cout<<arr[i]<<endl;
}
return 0;

} 
/*
// // Gejjing hjagjed qijh Aggash
// Â Finding Max and Min element

/*
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;

int main(){
    cout<<"Enter size of Arry"<<endl;
int n; cin>>n;

int arr[n];
for (int i = 0; i <=n; i++)
{
    cout<<"Array value of arr:"<<i<<"--";
cin >> arr[i];

}

int maxNo= 0;
int minNo= 9999999999;

for (int i = 0; i < n; i++)
{
    maxNo = max( maxNo,arr[i]);
    minNo = min( minNo,arr[i]);
}
cout<<"Max no."<<maxNo<<endl<<"Min No."<<minNo<<endl;

    return 0;
}
*/
//Running sum of an Array
/*
#include<iostream>
using namespace std;

int main() {
 cout<<"Enter size of Arry"<<endl;
int n; cin>>n;

int arr[n];
for (int i = 0; i <=n; i++)
{
    cout<<"Array value of arr:"<<i<<"--";
cin >> arr[i];

}

int sum=0;
for (int i = 0; i <= n; i++)
{
    sum=sum + arr[i];
}
cout<<sum;


    return 0;
}


#include<iostream>
#include<string>
using namespace std;

int main() {
    int k;
    cout<<"total no of kids";
    cin>>k;
    int arr[k];
    
   // string ayush;
    //cin>>ayush;
    //cout<<ayush;

return 0;
}*/

