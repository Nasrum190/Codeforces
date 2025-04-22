#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int x){
    int low =0,high= n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            return mid;}
            else if(arr[mid] < x){
                low=mid+1;
                }
                else {
                    high = mid-1;
                }
            }


    return -1;

}
int main ()
{
    int arr[]={2,5,7,9,11,13};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=11;
    int index=binary_search(arr,n,x);
    if ( index==-1){
        cout<<"element not found";
        }
        else
        {
            cout<<"element found at index="<<index;
        }
        return 0;
}
