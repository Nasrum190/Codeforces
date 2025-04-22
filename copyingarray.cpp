#include<iostream>
using namespace std;
int main()
{
    int arr1[30],arr2[30],i,num;
    cout<<"how many numbers:";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Aarray1=";
    for(i=0;i<num;i++){
        cout<<" "<<arr1[i];
    }
    for(i=0;i<num;i++)
        arr2[i]=arr1[i];
    cout<<endl<<"Array2=";
    for(i=0;i<num;i++)
        cout<<" "<<arr2[i];
}
