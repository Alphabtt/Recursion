#include<iostream>
#include <vector>
using namespace std;


int printS(int indx, int arr[], int n, int sum, int s)
{
    if(indx==n)
    {
        if(sum==s){
        
        return 1;

        }
        return 0;
    }


    

    

    sum = sum + arr[indx];

    int l=printS(indx+1, arr, n, sum, s);
        

    sum = sum - arr[indx];
    

    int r=printS(indx+1, arr, n, sum, s);


    return l+r;


}



int main()
{
   int arr[]={1,2,1};

   

   cout<<printS(0, arr, 3,0,2);

    return 0;


}
