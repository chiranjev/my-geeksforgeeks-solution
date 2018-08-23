#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int preprintVal(int val){
    cout << val << " ";
    if(val<=0){
        return val;
    }else{
        return preprintVal(val-5);
    }
}

void postPrintVal(int val,int n){
    cout << val << " ";
    if(val==n){
        return;
    }else{
        postPrintVal(val+5,n);
    }
}

int main()
{
	int i,j,k,len,n,sum,count;
	string str;
	int t;

	cin >> t;

	while(t--){
        cin >> n;
        int val = preprintVal(n);
        postPrintVal(val+5,n);
        cout << endl;
	}


	return 0;
}
