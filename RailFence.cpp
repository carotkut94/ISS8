//
//  main.cpp
//  RailFence
//
//  Created by Sidhant Rajora on 26/05/16.
//  Copyright © 2016 Sidhant Rajora. All rights reserved.
//
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l;
    char a[20],c[20],d[20];
    printf("\nEnter the input string : ");
    gets(a);
    l = (int)strlen(a);
    
    /*Ciphering*/
    for(i=0,j=0;i<l;i++)
    {
        if(i%2==0)
            c[j++]=a[i];
    }
    for(i=0;i<l;i++)
    {
        if(i%2==1)
            c[j++]=a[i];
    }
    c[j]='\0';
    printf("\nCipher text after applying rail fence :");
    printf("\n%s",c);
    if(l%2==0)
        k=l/2;
    else
        k=(l/2)+1;
    for(i=0,j=0;i<k;i++)
    {
        d[j]=c[i];
        j=j+2;
    }
    for(i=k,j=1;i<l;i++)
    {
        
        d[j]=c[i];
        j=j+2;
    }
    d[l]='\0';
    printf("\nText after decryption : ");
    printf("%s",d);
    return 0;
}

