//
//  main.cpp
//  RSA
//
//  Created by Sidhant Rajora on 26/05/16.
//  Copyright © 2016 Sidhant Rajora. All rights reserved.
//
#include<stdio.h>
int phi,M,n,e,d,C,FLAG;
void encrypt()
{
    int i;
    C = 1;
    for(i=0;i< e;i++)
    {
        C=C*M%n;
    }
    C = C%n;
    printf("\n\tEncrypted keyword : %d",C);
}

void decrypt()
{
    int i;
    M = 1;
    for(i=0;i< d;i++)
    {
        M=M*C%n;
    }
    M = M%n;
    printf("\n\tDecrypted keyword : %d",M);
}

int main()
{
    int p,q,s;
    printf("Enter Two Relatively Prime Numbers\t: ");
    scanf("%d%d",&p,&q);
    n = p*q;
    phi=(p-1)*(q-1);
    printf("\n\tF(n) phi value\t= %d",phi);
    printf("\n\nEnter e which is prime number and less than phi:%d \t: ",n);
    scanf("%d",&e);
    d = 1;
    do
    {
        s = (d*e)%phi;
        d++;
    }while(s!=1);
    d = d-1;
    printf("\n\tPublic Key\t: {%d,%d}",e,n);
    printf("\n\tPrivate Key\t: {%d,%d}",d,n);
    printf("\n\nEnter The Plain Text\t: ");
    scanf("%d",&M);
    encrypt();
    printf("\n\nEnter the Cipher text\t: ");
    scanf("%d",&C);
    decrypt();
    return 0;
}