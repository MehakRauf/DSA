#include <iostream>
#include <algorithm>

using namespace std;

bool isFreqSame(int arr1[], int arr2[]){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}
bool palindromeExist(string s1, string s2)
{
    int freq[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i] - 'a']++;
    }
    int windowSize = s1.length();
    for (int i = 0; i < s2.length(); i++)
    {
        int idx = i, windowIdx = 0;
        int windowFreq[26] = {0};

        while (windowIdx < windowSize && idx < s2.length())
        {
            windowFreq[s2[idx] - 'a']++;
            windowIdx++;
            idx++;
        }
        if(isFreqSame(freq, windowFreq)){
            return true;
        }
    }
    return false;
}
int main()
{
    cout<<palindromeExist("ab","eidbaooo");
    return 0;
}