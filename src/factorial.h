#include <stdio.h>
#include <stdint.h>

    unsigned long long int fact(int n){/*Factorial function inefficient for values after 20*/
        
        //variable declarations
        unsigned long long int fact;
        int i;
        
        //initialising variables
        fact=1;
        
        for(i=n;i>0;i--){
            
            fact*=i;
        
        }
        
        return fact;
        
    } //end of unsigned long long int fact(int n);

