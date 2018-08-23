#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;

int base_pos = 1;
int ans = 0;
int reverseDigit(int n){
    if(n>0){
        reverseDigit(n/10);
        ans+=n%10*base_pos;
        base_pos*=10;
    }
    return ans;

}

int main()
{
	int i,j,k,len,n,sum,count;
	string str;
	int t;

	cin >> t;

	while(t--){
        cin >> n;
        ans = 0;
        base_pos = 1;
        cout << reverseDigit(n) << endl;
	}


	return 0;
}
