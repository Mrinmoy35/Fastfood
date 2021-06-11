#include <stdio.h>

int main()
{
    int option;
    
    printf("Enter any number 1 - 5:");
    scanf("%d",&option);
    
    
   
    
    switch(option)
    {
        default : printf("INVALID INPUT \n");
                  break;
        case 1: printf("Pizza,Rs 239\n");
                break;
        case 2: printf("Burger,Rs 129");
                break;
                
        case 3: printf("Pasta,Rs 179");
                break;
        case 4: printf("French Fries,Rs 99");
                break;
        case 5: printf("Sandwich,Rs 149");
                break;
                
      

	}
	    return 0;
    
}
