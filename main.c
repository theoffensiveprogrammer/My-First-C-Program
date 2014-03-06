//
//  main.c
//  MyFirstCProgram
//
//  Created by Keshav Kumar on 6/17/13.
//  Copyright (c) 2013 Engineers. All rights reserved.
//


#include <stdio.h>	// Defines printf etc.

int	main()
{
    int value1, value2, sum;
    
    
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;
    
    printf("The sume of %i and %i is %i", value1, value2, sum);
}

/*first line means that you want to tell your compiler it should put the contents of some other file here, just as if you had typed its contents there. You signal this using the #include command.
 
  <stdio.h> is the file that you're implementing
 
 You can enclose the name either in “<” and “>” or in quotes. The former means it’s a system file
 
  “stdio” is short for “standard input/output”. C was originally designed at a time when file names could only be 8 characters in length, 
 
 
 */