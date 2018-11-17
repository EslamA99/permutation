#include <iostream>
#include <bits/stdc++.h>

using namespace std;



void permutation(string s,int i,int n)
{
    int j;
    if (i == n)
        cout << s << "\t";
    else
    {
        for (j = i; j < s.length(); j++)
        {
            char ch =s[j];
            swap(s[i],s[j]);
            permutation(s, i + 1, n);
            swap(s[i],ch);
        }
    }
}

int main()
{


    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << endl << "The permutations of the given string : " << endl;
    //p(s);
    permutation(s, 0, s.length()- 1);
    cout << endl;
}

