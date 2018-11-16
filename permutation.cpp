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
/*
void p(string s) {
    string result;

        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            string result1=s.substr(0,i)+s.substr(i+1);
            result += ch + result1+"   ";
            p(result1);
            }
        cout<<result;
        return ;
}*/

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



















/*void permute(char a[], int i, int n)
{
    int j;
    if (i == n)                  // If we've chosen all the characters then:
       cout << a << endl;        // we're done, so output it
    else
    {
        for (j = i; j <= n; j++) // Otherwise, we've chosen characters a[0] to a[j-1]
        {                        // so let's try all possible characters for a[j]
            swap(a[i], a[j]);    // Choose which one out of a[j] to a[n] you will choose
            permute(a, i+1, n);  // Choose the remaining letters
            swap(a[i], a[j]);    // Undo the previous swap so we can choose the next possibility for a[j]
        }
    }
} */

