{
#include<bits/stdc++.h>
using namespace std;
class SortedStack{
public:
	stack<int> s;
	void sort();
};
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("
");
}
int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/
/* The below method sorts the stack s
you are required to complete the below method */

void sortedInsert(stack<int> &s,int val){
    if(s.empty()||s.top()<=val){
        s.push(val);
    }else{
        int temp = s.top();
        s.pop();
        sortedInsert(s,val);
        s.push(temp);
    }
}
void SortedStack :: sort()
{
    if(!s.empty()){
        int temp = s.top();
        s.pop();
        sort();
        sortedInsert(s,temp);
    }
}
