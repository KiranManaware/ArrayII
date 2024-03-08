// If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v1;
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    cout<<"Enter arry element ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    //                  ***Method 1***
    // vector<int> v2(v1.size());

    // for(int i=0;i<v1.size();i++){
        
    //     v2[i]=v1[v1.size()-1-i];  
    // }
    // if(v1 == v2) cout<<"Number is palindrome";
    // else cout<<"Number is not palindrome";

    //              ****Method 2****
    int i =0;
    int j=n-1;
    bool flag =true;// flag-> palindrome
    while(i<=j){
        if(v1[i]!=v1[j]){ //flag-> not palindrome
            flag = false;
            break;
        }
        i++;
        j--;
        
    }
    if(flag == true){
            cout<<"Array is palindrome.";
           
        }
        else cout<<"Array is not palindrome.";
    
    return 0;
}