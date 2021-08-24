
// PLACE THE NECESSARY include, etc... STATEMENTS HERE
//
#include <iostream>
#include <string>
#include <cctype>
using namespace std;


// DECLARE THE FUNCTIONS HERE:
// 
void cleanUp(string&);
bool isPalindrome(string);

int main() {
    string p;
    cout << "Enter sentence:\n";
    getline(cin, p);
    
    cleanUp(p);
    bool answer = isPalindrome(p);
   
    if (answer) {
        cout << "It is a palindrome.\n";
    } else {
        cout << "It is not a palindrome.\n";
    }

    return 0;
}

// DEFINE THE FUNCTIONS HERE:
//
void cleanUp(string& str)
{
    string new_str;
    for (int i = 0; i!=str.size(); ++i)
        if (isalpha(str[i]))
            new_str+=tolower(str[i]);
    str = (new_str);
}
bool isPalindrome(string str)
{
    if (str.size() <= 1)
        return true;
    bool compared = str[0] == str[str.size()-1];
    // std::cout<<str[0]<<str[str.size()-1]<<":"<<compared<<std::endl;
    return isPalindrome(str.substr(1, str.size()-2)) & compared;

}


