/*
 * reverse_int.c
 * Rishi Dutta 912790628
 * This program takes a number inputed by the user and then reverses the number real number. 
 * The reversed number is also a real number so therefore the reversed integer has no leading 0's and will not end with a negative sign if the inputed integer was negative.
 * The program also checks if there were any non-digit characters entered along with digit characters, and checks if there were absolutely no digits entered.
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char number[1000];
    int input = 0;
    int i, j, temp;
    printf("Enter a number to reverse: ");
    while((number[input] = getchar()) == '\n'){
        printf("Error: no digits have been read.\n");
        return 0;
        return EXIT_FAILURE;
    }
    while((number[input] = getchar()) != '\n'){ 
        input++;
    }
    int new_input = input - 1;
    
    
    if (number[0] == '-'){ 
        if(!isdigit(number[1])){
            for (int i = 1; i < new_input; i++){
                if(isdigit(number[i])){
                    printf("Error: non-digit character entered\n");
                    return 0;
                    return EXIT_FAILURE;
                }
            }
	}	
        for (int check = 1; check < input - 1; check++){
            if(!isdigit(number[check])){
	        for (int d = 1; d < input - 1; d++){
                    if(isdigit(number[1])){
                        printf("Error: non-digit character entered\n");
                        return 0;
                        return EXIT_FAILURE;
                    }
                    else{
                        printf("Error: no digits have been read.\n");
                        return 0;
                        return EXIT_FAILURE;
                    }
                }
            }
        }
    }
    else if(!isdigit(number[0])){
        for (int check = 0; check < input; check++){
	    if(isdigit(number[check])){
	        printf("Error: non-digit character entered\n");
		    return 0;
		    return EXIT_FAILURE;
	    }
	}
    }
    else {
        for (int check = 0; check < input; check++){
	    if(!isdigit(number[check])){
	        for (int d = 0; d < input; d++){
	            if(isdigit(number[0])){
		        printf("Error: non-digit character entered\n");
			return 0;
			return EXIT_FAILURE;
		    }
		    else{
		        printf("Error: no digits have been read.\n");
			return 0;
			return EXIT_FAILURE;
		    }	
		}
	    }
	}
    }
    if (number[0] == '-'){ 
        for (i=0; i < input / 2; i++){
            temp = number[i];
            number[i] = number[input-i-1];
            number[input-i-1] = temp;
	}
	for (temp = 1; temp < new_input; temp++){
            if(number[temp] == '0'){
                for(j = temp; j < input; j++){
                    number[j] = number[j+1];
                    temp--;
                }
                        new_input--;
                        }
                }
		printf("-");
        	for (temp = 0; temp < new_input; temp++){
			printf("%c", number[temp]);
        	}
        	printf("\n");
        	return 0;
		return EXIT_SUCCESS;
    }   	
    for (i=0; i < input/2; i++){
        temp = number[i];
        number[i] = number[input-i-1];
        number[input-i-1] = temp;
    }
    for (temp = 0; temp < input; temp++){
        if(number[temp] == '0'){
            for(j = temp; j < input; j++){
                number[j] = number[j+1];
                temp--;
            }
            input--;
        }
    }	
    for (temp = 0; temp < input; temp++){
        printf("%c", number[temp]);
    }
    printf("\n");
    return 0;
    return EXIT_SUCCESS;
}
	




	
