
//Pattern Problems

//Print a line having n start /n- input by user
/*
#include<iostream>
using namespace std;

int main() {
int n;
cout<<"Enter how maney start you want to print in line";
cin>>n;

for (int i = 1; i <= n; i++)
{
    cout<<"*";
}
  return 0;

}
*/
//--------------------------------------------------------------------------
//Print solid rectangle  --- INPUT ROW AND COLUMS
/*
#include<iostream>
using namespace std;

int main() {
int row,colums;
cout<<"Enter The Number of rows";
cin>>row;
cout<<"Enter The Number of colums";
cin>>colums;

for (int i = 1; i <=row; i++)
{
    for (int j = 1; j <=colums; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

    return 0;
} 


//---------------------------------------------------
//Print Hollow rectangle


#include<iostream>
using namespace std;
int main(){
int rows,colums;
cout<<"Enter The Number of rows";
cin>>rows;
cout<<"Enter The Number of colums";
cin>>colums;

for (int i = 1; i <= rows; i++)
{
    for (int j = 1; j <= colums; j++)
    {
        if (i==1 || i==rows || j==1 || j== colums)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
        
    }
    cout<<endl;
}

    return 0;
}*/

//Print Half Pyramid Pattern using Stars
/*
#include<iostream>
using namespace std;

int main() {
int n;
cin>>n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

    return 0;
} 




//---------------------------------------------------------------
//Print an Inverted Half pyramid

#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;

for (int i = n; i >=1; i--)
{
    for (int j = 1; j <=i; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

    return 0;
}
*/
//------------------------------------------------
/*
//Print Half Pyramid using numbers
#include<iostream>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }


//"Print Inverted Half Pyramid using numbers"

#include<iostream>
using namespace std;

int main() {
    
int n=5;
//cin>>n;
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
          cout<<j<<" ";
            
        }
        cout<<endl;
    }
    
    return 0;
}
 

//------------------------------------------------
//Print Half Pyramid using numbers - 2 

#include<iostream>
using namespace std;

int main(){
 int n=7;
 //cin>>n;
for (int i = 1; i <=n; i++)
{
    for (int j = 1; j <=i; j++)
    {
        cout<<i;
    }
    cout<<endl;
}

    return 0;
}
*/
//__________________________________________
//Print Inverted Half Pyramid using numbers - 2
#include<iostream>
using namespace std;

int main(){

    int n=5;
    //cin>>n;
for (int i = 1; i <=n; ++i)
{
    for (int j = 1; j <=n-i; ++j)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

    
    return 0;
}
