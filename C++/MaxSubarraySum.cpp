#include <iostream>
using namespace std;

int MaxSumSubArray(int a[], int n){
  int maxsum=0;
  int cursum = 0;
  for(int i=0 ; i<n ; i++){
    cursum = cursum + a[i];
    
    if(cursum>maxsum){
      maxsum = cursum;
    }
    if(cursum<0){
      cursum = 0;
    }
  }
  return maxsum ;
}

int main() 
{
  int T;
  cin>>T;
  while(T--){
    int N;
    cin>>N;
    int ar[N];
    for(int i=0 ; i<N ; i++){
      cin>>ar[i];
    }
    cout<<MaxSumSubArray(ar,N)<<endl;
  }
  return 0;
}