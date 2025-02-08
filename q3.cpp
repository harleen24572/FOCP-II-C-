#include <iostream>
using namespace std;

int isPalindrome(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) 
            return false;
        l++;
        r--;
    }
    return true;
}

void frequency(string s) {
    int freq[256] = {0};
    for (char ch : s) 
        freq[ch]++;
    
    cout << "Character frequencies \n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) 
            cout << "'" << char(i) << "' -> " << freq[i] << " times\n";
    }
}

void replaceVowel(string &s) {
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            s[i] = '*';  
        }
    }
}
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s)) 
        cout << "The string is a palindrome " << endl;
    else 
        cout << "The string is not a palindrome " << endl;

    frequency(s);
    replaceVowel(s);
    cout << "String after replacing vowels: " << s << endl;

    return 0;
}
