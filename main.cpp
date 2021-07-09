/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

bool checkkispresent(int arr[],int k,int x,int n)
{ 
    int i;
    for(i =0;i<n;i=i+k)
    { 
        int j;
        for(j = 0;j<k;j++)
          if(arr[i+j]==x)
            break;
        
        //if x is not present on arr[i+j]
        if(j==k)
          return false;
    }
        
        //if n is multiple of k
        if(i==n)
        return true;
        
        //if n is not multiple of k
        
        int j;
        for(j=i-k;j<n;j++)
        if(arr[j]==x)
        break;
        
        if(j==n)
        return false;
        
        return true;
    }
    
    int main()
    {
        int arr[10]={1,2,3,1,4,5,1,6,7,1};
        int x=3,k=1;
        int n=10;
        if (checkkispresent(arr, x, k, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
    
