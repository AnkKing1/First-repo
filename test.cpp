#include<iostream>
using namespace std;

bool func(string s)
{
    int i=0;
    int e=s.length()-1;

    while(i<=e)
    {
        if(s[i]==s[e])
        {
            i++;
            e--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s="NOON";
    cout << " is the string s a " << func(s) << endl;
}