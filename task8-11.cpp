#include <iostream>
#include <string>
#include <algorithm>    // std::count
using namespace std;
int main()
{
    // Задание 8
    string word;
    int m{}, n{};
    cout << "Enter the word and the indexes"<< endl;
    cin >> word >> m >> n;
    string slice1{};
    if (n < word.size())
    {
        for (m; m <= n; m++)
        {
            slice1 += word[m];
        }
    }
    else
    {
        n = word.size() - 1;
        for (m; m <= n; m++)
        {
            slice1 += word[m];
        }
    }
    cout << slice1 << endl;

    // Задание 9
    string word9;
    cout << "Enter a word 9:" << endl;
    cin >> word9;
    string new_word9 = word9;
    int i = 0;
    while (i != word9.length())
    {
        new_word9 = '*' + new_word9;
        i ++;
    }
    i = 0;
    while (i != word9.length())
    {
        new_word9 += '*';
        i++;
    }
    cout << new_word9 << endl;

    // Задание 10
    string sent10;
    cout << "Enter a sentence 10:" << endl;
    cin >> sent10;
    double leng10 = sent10.length();
    double count10 = count(sent10.begin(), sent10.end(), 'a');
    double arith =  count10 / leng10;
    cout << arith << endl;

    // Задание 11
    string word11;
    string sent11 = "Can you can a can as a canner can can a can?";
    cout << "Enter a word 11:" << endl;
    cin >> word11;
    i = 0;
    int str_pos{sent11.find("Can")};
    while (i != sent11.length())
    {
        if (str_pos < sent11.length())
        {
            sent11.replace(str_pos, 3, word11);
            str_pos = sent11.find("can");
        }
        i++;
    }
    cout<< sent11<< endl;

    return 0;
}
