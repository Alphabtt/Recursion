#include<iostream>
#include <vector>
using namespace std;

void printS(int indx, vector<int> &ds, int arr[],int n)
{
    if(indx== n)
    {
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0)
        {
            cout<<"{ }"<<endl;
        }
        cout<<endl;
        return;
    }

    ds.push_back(arr[indx]);

    printS(indx+1, ds, arr, n);

    ds.pop_back();

    printS(indx+1, ds, arr, n);

}




int main()
{

int arr[3]={3,2,1};

vector<int>ds;


printS(0, ds, arr,3);




return 0;


}
