#include <stdio.h>


void show_value(int value){
	printf("\nThis is the value:%d", value);
}


void show_two_value(int value, int value2){
	printf("\nThis the first value:%d", value);
	printf("\nThis is the second value:%d", value2);

}



int main(){
	printf("Selected values below:");
	show_value(5);
    show_value(-15);
    printf("\nthat's the values!\n");
    int valueInput;
      printf("\n");
        printf("\n");
    
    printf("Insert a value:\n");
    scanf("%d", &valueInput);
    show_value(valueInput);
    printf("\n");
      printf("\n");
    
    int firstValue;
    int secondValue;
    
    	
    	printf("\nWrite the first value:\n");
        scanf("%d", &firstValue);
        printf("Write the second value:\n");
        scanf("%d", &secondValue);
    
    
    show_two_value(firstValue,secondValue);
    
	return 0;
	
}

