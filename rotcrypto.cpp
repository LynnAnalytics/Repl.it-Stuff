#include <iostream>
// Made this for a high school public speaking class. 
using namespace std;
// you can tell it's lazy because of the namespace.
int rotlooper(int a, string b);
int rotencrypt(string z);
int rotdecrypt(string z);
char rotcrypto(char c, int a);
 

int main() {
    string message;
    string answer;
    
    cout << "What's your sentence?" << endl;
    getline (cin,message);
    cout << "Are you encrypting or decrypting?" << endl;
    cin >> answer;
    if(answer == "e" || answer == "encrypting")
      {
        rotencrypt(message);
      }
    if(answer == "d" || answer == "decrypting") 
      {
       rotdecrypt(message);
      }
  return 0; 
}

int rotencrypt(string z) {
  int x;
  cout << "Rotate by how many places?";
  cin >> x;
  rotlooper(x,z);
  return 0;
}
int rotdecrypt(string z) {
  int x;
  cout << "How many places was your word rotated by?";
  cin >> x;
  rotlooper(26-x,z);
  return 0;
}
int rotlooper(int a, string b) {
  for(char& c: b){
    c = rotcrypto(c,a);
    }
  cout << b << endl;
  return 0;
}
char rotcrypto(char c, int a) { 
    if(c <= 'z' && c >= 'a')
  {
    c = (c-'a'+ a)%26 +'a'; 
    return c;
  }
  if(c <= 'Z' && c >= 'A')
  {
    c = (c-'A'+ a)%26 +'A';
    return c;
  }
  if(c < 'A' || c > 'z')
  {
    return c;
  }
}
