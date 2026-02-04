#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
     int start=0;
     int end =n-1,mid;

    while (start<=end)
    {
        // int mid= (start+end)/2; //it give over flow value
        int mid= start+(start+end)/2;

        if (arr[mid]==key){
            return mid;
            break;
        }
        else if (arr[mid]<key){
             start=mid+1;
        }
        else{
            end=mid-1;
        }
       
        
    } 
    return -1;
}


int main(){
    int arr[1000];
    int n, start,end;
    cout<<"Entre the size of array: ";
    cin>>n;
    cout<<"Enter the sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
     
    cout<<BinarySearch(arr,n,key)<<endl;
    return 0;
}


    
















//     start=0;
//     end=n-1;
//     while (start<=end)
//     {
//         int mid= (start+end)/2;

//         if (arr[mid]==key){
//             cout<<mid;
//             break;
//         }
//         else if (arr[mid]<key){
//              start
//         }
       
        
//     }
    
// }