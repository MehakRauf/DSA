#include <iostream>
#include <vector>

using namespace std;

int stringCompression(vector<char> chars)
{
    int n = chars.size();
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        char ch = chars[i];
        while ((i < n) && (ch == chars[i]))
        {
            count++;
            i++;
        }
        if (count == 1)
        {
            chars[idx++] = ch;
        }
        else
        {
            chars[idx++] = ch;
            string toString = to_string(count);// if 12 so it will treated as '1' and '2'
            for (char digit : toString)
            {
                chars[idx++] = digit;
            }
        }
        i--;
    }
    return idx;
}
int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << stringCompression(chars) << endl;
    return 0;
}