#include <bits/stdc++.h>
#include <string>
#include <cctype>

using namespace std;

string processWord(const string &word)
{
    if (all_of(word.begin(), word.end(), ::isupper) ||
        (word.size() > 1 && all_of(word.begin() + 1, word.end(), ::isupper)))
    {
        string processedWord = word;
        for (char &c : processedWord)
        {
            if (::isalpha(c))
            {
                if (::isupper(c))
                {
                    c = ::tolower(c);
                }
                else
                {
                    c = ::toupper(c);
                }
            }
        }
        return processedWord;
    }
    return word;
}

int main()
{
    string word;
    cin >> word;

    string result = processWord(word);
    cout << result << endl;

    return 0;
}
