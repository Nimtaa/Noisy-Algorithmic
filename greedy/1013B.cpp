//Problem Link
//http://codeforces.com/problemset/problem/1013/B

#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}

int main(){
  int n,x;
  cin >> n >> x;
  int array[n];
  for(int i=0;i<n;i++){
    cin>>array[i];
  }
  for(int i=0;i<n;i++){
    int temp = x && array[i];
    int index = binarySearch(array,0,n-1,temp);
    if(index!=-1){
      cout<<"";
    }

  }


}
