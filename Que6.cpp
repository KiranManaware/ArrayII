// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include<iostream>
#include <vector>
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
        bool flag = true;//number is unique
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(v[i]==v[j]){ //not unique
                flag = false;
                break;
            }
        }
        if(flag == true) {
            cout<<v[i];
            break;
        }
        
    }
   
    return 0;
}