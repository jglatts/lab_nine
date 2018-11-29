#include <stdio.h>
#include <string.h>

void reverse(char[]);

void main(){
// type 1: regular string(only last element is "\0")
    char string1[] = "a sample string";

// type 2: String that do not use all available space
    char string2[20];
    strcpy(string2, "Good News!");

// type 3: empty string
    char string3[5];
    string3[0]='\0';


    printf("\nthe original string1 is:   %s\n",string1);
    reverse(string1);
    printf("the reversed string1 is:   %s\n\n",string1);

    printf("the original string2 is:   %s\n",string2);
    reverse(string2);
    printf("the reversed string2 is:   %s\n\n",string2);


    reverse(string3);

}

void reverse(char string[]){

    int size  = strlen(string);
    int index = size - 1;
    char temp;
    char compare;

    if (string!=NULL){ // ensure it is not a NULL
        if (strlen(string) != 0){
            for (int i = 0; i < size / 2; ++i) {
                temp = string[i];
                string[i] = string[index];
                string[index] = temp;
                index--;
                //printf(" %d ", i);
            }
            printf("\n");
        }
        else{ // it's a empty string starting with "\0"
            /*write code here, print information to tell user nothing to do with empty string*/
            printf("\nEmpty String");
        }

    }

}
