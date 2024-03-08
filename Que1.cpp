// Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter size of vector/array : ";
    cin>>n;
    cout<<"Enter the values : "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // display(v);
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>x) count++;
    }
    cout<<"Number of element  : "<<count;

    return 0;
}