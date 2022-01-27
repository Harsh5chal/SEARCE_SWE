#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
    
    //s-> Stack to store values we are pushing
    stack<int> s;
    //max-> to store maximum value in stack 
    stack<int> max;
    max.push(0);
    
    //n -> no. of test cases e.g. 10
    int n;
    cin>>n;
    
    while (n--){
        //x-> operation 1 2 3
        //where 
        /* 1 x  -Push the element x into the stack.
           2    -Delete the element present at the top of the stack.
           3    -Print the maximum element in the stack. 
        */
        int x;
        cin>>x;

        if(x==1){
            //val -> value we want to insert in the stack
            int val;
            cin>>val;
            
            if(val>=max.top()) 
                max.push(val);
                s.push(val);
        }
        else if(x==2){
            if(s.top()==max.top()) 
                max.pop();
                s.pop();
        } 
        else if(x==3) 
                cout<<max.top()<<endl;
    }
    return 0;
}