//
//  main.cpp
//  Practise1
//
//  Created by EllaYang on 2022/10/22.
//

#include <iostream>
#include <stdio.h>
#include <string.h>


void reverse_string(char *string)
{
    int i =0;
    char j = 0;
    int len = strlen(string);
    char *str;
    str = string + len-1;
    
    for(i=0;i<len/2;i++)
    {
        j=*str;
        *str=*string;
        *string =j;
        string++;
        str--;
    }
    
}

int main(int argc, const char * argv[])
{
    // insert code here...
    float a = 0.302;
    float b = 128.101;
    double c = 123;
    float d = 112.64E3;
    double e = 0.7623e-2;
    float f = 0.23002230098;
    printf("a=%e \nb=%f \nc=%lf \nd=%lE \ne=%lf \nf=%f\n",a,b,c,d,e,f);
//    std::cout << "Hello, World!\n";
    
    char string[] = "abcooo";
    reverse_string(string);
    printf("%s\n",string);

    return 0;
}
