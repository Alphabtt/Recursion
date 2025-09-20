#include<iostream>
#include <vector>
using namespace std;


bool printS(int indx, int arr[], vector<int>&ds, int n, int sum, int s)
{
    if(indx==n)
    {
        if(sum==s){
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return true;

        }
        return false;
    }


    

    ds.push_back(arr[indx]);

    sum = sum + arr[indx];

    if(printS(indx+1, arr, ds,  n, sum, s)==true){
        return true;
    }

    ds.pop_back();
    sum = sum - arr[indx];

    if(printS(indx+1, arr, ds,  n, sum, s)==true){
        return true;
    }

    return false;


}



int main()
{
   int arr[]={1,2,1};

   vector<int>ds;

    printS(0, arr, ds, 3,0,2);

    return 0;


}
