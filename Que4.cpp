// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
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
    int Esum,Osum;
    Esum=Osum=0;
    for(int i=0;i<n;i++){
        if(i%2==0) Esum+=v[i];
        else Osum+=v[i];
    }
   
    if(Esum>Osum) cout<<"Difference = "<<Esum-Osum;
    else cout<<"Difference = "<<Osum-Esum;
    
    return 0;
}