// WAP to find the largest three elements in the array.
#include<iostream>
#include<vector>
#include <climits>
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
    int m1,m2,m3;
    m1=INT_MIN;
    m2=INT_MIN;
    m3=INT_MIN;
    for(int i= 0;i<n;i++){
       if(v[i]> m1) m1=v[i]; 
    }
    cout<<"Max 1 = "<<m1<<endl;
    for(int i= 0;i<n;i++){
       if(v[i]> m2 && v[i]<m1) m2=v[i]; 
    }
    cout<<"Max 2 = "<<m2<<endl;
    for(int i= 0;i<n;i++){
       if(v[i]> m3 && v[i]<m2 &&v[i]<m1) m3=v[i]; 
    }
    cout<<"Max 3 = "<<m3;
    return 0;
}