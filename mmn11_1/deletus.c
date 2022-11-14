#include <stdio.h>
#include <string.h>
#include "header.h"

void delet(char str[])
{
    int len =0; /*length of sequence*/
    int rem =0; /*remove counter*/
	int i;
    
    	for(i =1; i<size-1 && str[i] !='\0';i++)
    	{
            /*checks if the char is an alphabetical and if it's in consecutive order*/
            if (((str[i]> 'A' && str[i] < 'Z') || (str[i] > 'a' && str[i] < 'z')) && ((int)str[i] == (int)str[i-1]+1))
         	{
                
                ++len;
                if (len>2)
                {
                	str[i-rem]=str[i];
                	rem++;
                	
                }
                else if (len>1)
                	{
                		str[i-1-rem]='-';
                	}
                str[i-rem]=str[i];
                
            }
            else 
            {
        	    len=0;
        	    str[i-rem]=str[i];
    	    }
            /*deletes the duplicated end*/
        }

        while(rem>0)
        {
        	str[i-rem]='\0';
        	rem--;
        }
}
