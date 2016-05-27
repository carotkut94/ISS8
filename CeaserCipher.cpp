//
//  main.cpp
//  CeaserCipher
//
//  Created by Sidhant Rajora on 26/05/16.
//  Copyright © 2016 Sidhant Rajora. All rights reserved.

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s = "TEST DATA";
    string t = "DATA SUPER";
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ' ')
            continue;
        else
         s[i] = (s[i] - 65 + 3) % 26 + 65;
    }
    cout<<"\nEncrypted Text:"<<s;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]==' ')
            continue;
        else
            t[i] = (char)(((t[i] - 3 - 65 + 26) % 26) + 65);
    }
    cout<<"\nDecrypted Text:"<<t;
}