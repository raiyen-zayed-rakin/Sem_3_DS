#include<iostream>

using namespace std;

bool checkPalindrome(string& s,int i, int j){
  if(i > j){
    return true;
  }
  
  if(s[i] != s[j]){
    return false; 
  }
  else{
    return checkPalindrome(s,i+1,j-1);
  }
}

int main(){
  string a = "moom"; 
  //cin>>a;

  if(checkPalindrome(a, 0, a.length()-1)){
    cout<<"Palindrome"<<endl;
  }
  else{
    cout<<"Not Palindrome"<<endl;
  }

  

  return 0;
}