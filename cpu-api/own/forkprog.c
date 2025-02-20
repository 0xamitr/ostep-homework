#include <stdio.h>

int main(int argc, char* argv[]){
    int x = 1000;
    int rc = fork();
    if(rc < 0){
        printf("fork failed\n");
    }
    else if(rc == 0){
        printf("Child process\n");
        printf("before change x = %d\n", x);
        x = 10;
        printf("after change x = %d\n", x);
    }
    else{
        wait();
        printf("Parent process\n");
        printf("before change x = %d\n", x);
        x = 20;
        printf("after change x = %d\n", x);
    }
}