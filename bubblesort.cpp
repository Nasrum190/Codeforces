#include<iostream>
using namespace std;
void bubbleSort( int arr[],int n)
{

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={32,51,27,85,66,23,13,57};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"Sorted array is:\n";
    for(int i=0;i<n;i++)
        cout <<arr[i]<<" ";
    return 0;
}
