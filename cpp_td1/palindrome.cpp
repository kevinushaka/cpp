#include <iostream>
using namespace std;

bool isPalindrome(string word);

int main(){
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    if(isPalindrome(word))
        cout<<word<<" "<<"is a palindrome."<<endl;
    else{
        cout<<word<<" "<<"is not a palindrome."<<endl;
    }
    return 0;
}

bool isPalindrome(string word){
    int n= word.length();
    for(int i=0;i < n  ;i++)
    {
        if(word[i] != word[n-i-1])
        {
            return false;
        }
    }
    return true;
}