{
#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function(s) below*/
stack<int> auxilary;
void push(int a)
{
    s.push(a);
    if(auxilary.empty()){
        auxilary.push(a);
    }else{
        if(a<=auxilary.top()){
            auxilary.push(a);
        }
    }


}
bool isFull(int n)
{
    if(s.size()==n){
        return true;
    }
    return false;
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{
     if(s.empty()){
        return -1;
    }
    if(s.top()==auxilary.top()){
        auxilary.pop();
    }
    int x = s.top();
    s.pop();
    return x;
}
int getMin()
{
    if(!auxilary.empty()){
        return auxilary.top();
    }
    return -1;
}
