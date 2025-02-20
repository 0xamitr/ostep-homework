#include <stdio.h>

int main(){
    int data = open("hi.txt");
    printf("data = %d\n", data);

    int rc = fork();
    if(rc < 0){
        printf("fork failed\n");
    }
    else if(rc == 0){
        printf("Child process\n");
        printf("data = %d\n", data);

    }
    else{
        // wait();
        printf("Parent process\n");
        printf("data = %d\n", data);

    }
    
}