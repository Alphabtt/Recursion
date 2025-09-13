#include<iostream>
#include <vector>
using namespace std;


void printSum(int arr[], vector<int>&ds, int indx, int n, int sum,int s)
{
    
    if(indx==n){
    if(s==sum){
        for(auto it: ds)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return;
    }


    ds.push_back(arr[indx]);

    s += arr[indx];
    printSum(arr, ds, indx+1, n, sum,s);

    ds.pop_back();
    s -= arr[indx];


     printSum(arr, ds, indx+1, n, sum,s);




}


int main()
{

    int arr[]={1,2,1};

    vector<int> ds;

    

    printSum(arr, ds,  0, 3, 2,0);

}
