
#include <iostream>
#include <vector>
#include <string>;
using namespace std;
int main()
{
    string word;
    int m{}, n{};
    cout << "Enter the word and the indexes"<< endl;
    cin >> word >> m >> n;
    string slice1{};
    if (n < size(slice1))
    {
        for (m; m <= n; m++)
        {
            slice1 += word[m];
        }
    }
    else
    {
        n = size(word) - 1;
        for (m; m <= n; m++)
        {
            slice1 += word[m];
        }
    }
    cout << slice1 << endl;
    return 0;
}
