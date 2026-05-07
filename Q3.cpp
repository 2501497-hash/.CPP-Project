#include <iostream>
using namespace std;

void Count(string s)
{
    int ch=0, sp=0, tb=0, ln=1;

    for(int i=0;i<s.length();i++)
    {
        ch++;

        if(s[i]==' ') sp++;
        else if(s[i]=='\t') tb++;
        else if(s[i]=='\n') ln++;
    }

    cout<<ch<<" "<<sp<<" "<<tb<<" "<<ln;
}

int main()
{
    string s;
    getline(cin,s);

    Count(s);

    return 0;
}