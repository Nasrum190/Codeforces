 #include<iostream>
 using namespace std;
 int main()
 {

     int num,row,col;
     cin>>num;
     for(row=1;row<=num;row++)
     {

         for(col=1;col<=num-row;col++){
            cout<<" ";
         }
         for(col=1;col<=row;col++){
            cout<< col;

         }
         for(col=row-1;col>=1;col--){
                            cout<<col;
         }
         cout<<endl;
     }
 }
