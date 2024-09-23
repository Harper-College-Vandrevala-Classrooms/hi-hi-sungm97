#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int strcmp_case_insensitive(const string& str1, const string& str2) 
{
    string string1 = str1;
    string string2 = str2;
    transform(string1.begin(), string1.end(), string1.begin(), ::toupper);
    transform(string2.begin(), string2.end(), string2.begin(), ::toupper);
    if (string1 < string2)
    {
        return -1;
    }
    else if (string1 > string2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int result1 = strcmp_case_insensitive("string one", "string two");
    cout << result1 << endl;
    int result2 = strcmp_case_insensitive("string two", "string one");
    cout << result2 << endl;
    int result3 = strcmp_case_insensitive("string one", "string one");
    cout << result3 << endl;
}
