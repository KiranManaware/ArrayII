//Check if the given array is sorted or not
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
 
    for(int i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            cout<<"Array is  not sorted."<<endl; 
            return 0;
        }
    }
    cout<<"Array is  sorted.";
    return 0;
}