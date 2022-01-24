#include <iostream>
using namespace std;

int main()
{
    int n,count=0,key=0,arr[100];
    
    cout<<"Enter the size of array\n";
    cin>>n;
    cout<<"Enter the elements into the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]=arr[j]){
                count++;
                if(count>(n/2)){
                    key=arr[i];
                }
            }
        }
    }
    if(key!=0)
        cout<<key;
    else
        cout<<"no majority element in the array\n";
    return 0;
}