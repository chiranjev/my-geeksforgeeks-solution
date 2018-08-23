#include<bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define mod 1000000007

using namespace std;
void printPermutation(string s,int index,set<string>&stringset){
    if(index == s.size()){
        stringset.insert(s);
    }else{
        for(int i=index;i<s.size();i++){
            swap(s[i],s[index]);
            printPermutation(s,index+1,stringset);
            swap(s[i],s[index]);
        }
    }
}

int main()
{
	int i,j,k,len,n,sum,count;
	string str;
	int t;

	cin >> t;

	while(t--){
        cin >> str;
      set<string> stringset;
      printPermutation(str,0,stringset);
        for(string s:stringset){
            cout << s << " ";
        }
        cout << endl;
	}


	return 0;
}
