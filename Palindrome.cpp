#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    int length;
    bool isPalindrome = true;

    cout << "Enter a word: ";

    getline(cin, word);

    length = word.length();

    for (int i = 0; i < (length / 2); i++)
    {
        if (word[i] != word[(length - 1) - i])
            isPalindrome = false;
    }

    if (isPalindrome == true)
        cout << word << " is a palindrome" << endl;

    else
        cout << word << " is not a palindrome" << endl;

    
    return 0;
    
    
}
