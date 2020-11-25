/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>
#include <stack>
#include <queue>
using namespace std;
bool IsPalindrome(string & inpstr);

int main()
{
    string argStr;
    cout<<"Enter a String"<<endl;
    cin>>argStr;
    
    bool deat = IsPalindrome(argStr);
    
    if(deat){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}
bool IsPalindrome(string & inpstr){
    bool CharsEqual = true;
    char nextChar, QueFront, StackTop;
    //create an empty queue and an empty stackqueue
    queue <char> ForwQue;
    stack <char>BackStack;
    
    for(int i = 0; i<=inpstr.size();i++){
        ForwQue.push(inpstr[i]);
        BackStack.push(inpstr[i]);
        
    }
    
    while (!BackStack.empty() && !ForwQue.empty())
	{
		if (ForwQue.front() != BackStack.top())
		{
			CharsEqual = false;
			break;
		}
		else{
		    ForwQue.pop();
		    BackStack.pop();
		    CharsEqual = true;
		}
		
		
		
	}
	
    return CharsEqual;
    //return CharsEqual;
        
    }