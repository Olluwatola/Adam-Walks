#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    // the below lines of code read the files
    FILE* filePointer;
    char string[50];
    filePointer = fopen("adam.in", "r");

    // the below if statement tests if the file being opened is 
    // not an invalid or inexistent file
    if (NULL == filePointer) {
        printf("file can't be opened \n");
    }else{

        int steps;
        // the below while loop loops through each line of the strings in the file scanned
        while (fgets(string, 50, filePointer) != NULL) {
            //the below line of code tests if the line being looped through 
            //is an integer or not


            int numOutput = atoi(string);
            
            //if it passes as integer , it is skipped and no steps are counted
            if(numOutput!=0){
                printf(" ");
            }else{
                //if it does not pass as an integer, the steps are counted
                char breakerCharacter[] = "D";
                printf("The line being tested for is : %s \n", string);
                steps = strcspn(string, breakerCharacter);
                printf("The steps before fall are :  %d\n \n", steps);
    }    }
    printf("\n \n and we are done!!");

    fclose(filePointer);
    return 0;}
}