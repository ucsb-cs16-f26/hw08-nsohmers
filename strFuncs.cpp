#include "strFuncs.h"
#include <cctype>

using namespace std;


/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *
 * Palindromes are NOT case-sensitive - "RaCecaR" is a valid palindrome
 *
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
    int len = s1.length();

    if (len == 0 || len == 1) {
      return true;
    }
    
    if (tolower(s1[0]) != tolower(s1[len - 1])) {
      return false;
    }

    return isPalindrome(s1.substr(1, len - 2));
}
