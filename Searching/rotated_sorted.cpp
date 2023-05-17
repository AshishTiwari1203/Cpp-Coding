#include<iostream>
using namespace std;

int rotated(int arr[], int target){
    int s=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int e= len -1;
    int mid= s+(e-s)/2;
    while(s<e) {
        if (arr[mid] < arr[0])
        {
            e=mid;

        }
        else if(arr[mid]>arr[0])
        {
            s= mid;
        }
        else if(arr[mid]==arr[0]){
            s=mid;
        }

        mid = s + (e - s) / 2;
    }
    return s;

}
int main(){
    int arr[]=
    return 0;
}