// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v;
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter arry element ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
   
    for(int i=0;i<n;i++){
        if(i%2!=0) {
            v[i]*=2;
        }
        else{
            v[i]+=10;
        }
    }
   
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}