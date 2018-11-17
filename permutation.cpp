#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void permutation(string s,int i,int n)///(my word , beginning index of the string , last index of the string)
{
    int j;
    if (i == n)///if i choose all characters of the string
        cout << s << "\t";///print the string
    else
    {
        for (j = i; j < s.length(); j++)
        {
            char ch =s[j];///put the first character of the string in ch
            swap(s[i],s[j]);///ordinary swap to 2 character
            permutation(s, i + 1, n);///recursion to take the remaining letters
            swap(s[i],ch);///swap s[i] with the first character of the string that i taken in any loops
        }
    }
}


int main()
{
    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << endl << "The permutations of the given string : " << endl;
    permutation(s, 0, s.length()- 1);
    cout << endl;
}
