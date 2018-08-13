#include<bits/stdc++.h>

using namespace std;

int dp[10000] = {0};

int unlabeledBinaryTrees(int n){
  if(n==1||n==0){
    return 1;
  }else if(n==2){
    return 2;
  }
  int sum = 0;
  for(int i=0;i<n;i++){
      int a,b;
      if(dp[i] == 0){
          a = unlabeledBinaryTrees(i);
          dp[i] = a;
      }else{
          a = dp[i];
      }
      if(dp[n-i-1] == 0){
        b = unlabeledBinaryTrees(n-i-1);
        dp[n-i-1] = b;
      }else{
          b = dp[n-i-1];
      }
    sum+=a*b;
  }
  return sum;
}

int main(){

  int n = 3;

  cout << unlabeledBinaryTrees(n) << endl;

  return 0;
}
