#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    const char *cstr = word.c_str();
    int n= word.length();
    bool isPalindrome=true;
    for(int i=0;i < n  ;i++)
    {
        if(cstr[i] != cstr[n-i-1])
        {
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome)
        cout<<word<<" "<<"is a palindrome."<<endl;
    else{
        cout<<word<<" "<<"is not a palindrome."<<endl;
    }
    return 0;
}