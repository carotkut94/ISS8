//
//  main.cpp
//  DiffieHellman
//
//  Created by Sidhant Rajora on 26/05/16.
//  Copyright © 2016 Sidhant Rajora. All rights reserved.
//
#include <iostream>
#include <math.h>
using namespace std;
int alice(int,int,int);
int bob(int,int,int);
int main()
{
    long int g,x,y,a,b,k1,k2,n;
    cout<<"\nEnter value of n & g";
    cin>>n>>g;
    cout<<"\nEnter value of x & y";
    cin>>x>>y;
    a=alice(n,g,x);
    cout<<"\nalice end value:"<<a;
    b=bob(n,g,y);
    cout<<"\nbob end value:"<<b;
    k1=alice(n,b,x);
    cout<<"\nvalueof k1 :"<<k1;
    k2=alice(n,a,y);
    cout<<"\nvalueof k2 :"<<k2;
}
int alice(int n,int g,int x)
{
    long int a,a1;
    a1=pow(g,x);
    a=a1%n;
    return(a);
}
int bob(int n,int g,int y)
{
    long int b,b1;
    b1=pow(g,y);
    b=b1%n;
    return(b);
}