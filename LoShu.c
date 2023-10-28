#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool isLoShu(int array[3][3]){

    int row1, row2, row3, diag, diag2, col1, col2, col3 = 0;

    row1 = array[0][0] + array[0][1] + array[0][2];
    row2 = array[1][0] + array[1][1] + array[1][2];
    row3 = array[2][0] + array[2][1] + array[2][2];

    diag = array[0][0] + array[1][1] + array[2][2];
    diag2 = array[2][0] + array[1][1] + array[0][2];

    col1 = array[0][0] + array[1][0] + array[2][0];
    col2 = array[0][1] + array[1][1] + array[2][1];
    col3 = array[0][2] + array[1][2] + array[2][2];
    if(row1 == row2 && row1 == row3 && row1 == diag && row1 == diag2 && row1 == col1 && row1 == col2 && row1 == col3){
        return true;
    }
   
    return false;
    
}

int main(){
    time_t t;
    int attempts = 0;
    int test2D[3][3];
    srand((unsigned) time(&t));

    do{
        int val = 0;
        int k=0;
        int loop = 0;
        int random[9]= {0,0,0,0,0,0,0,0,0};

        while(loop<9){
            while(1==1){
                val = (rand()%10);
                if(random[val]==0){
                    random[val]=loop;
                    break;
                }
            }
            loop++;
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                test2D[i][j] = random[k];
                k++;
            }
        }
        attempts += 1;
    }while(!isLoShu(test2D));

    printf("It took %d attempts to generate a Lo Shu Magic Square\n", attempts);
    printf("[%d %d %d]\n", test2D[0][0], test2D[0][1], test2D[0][2]);
    printf("[%d %d %d]\n", test2D[1][0], test2D[1][1], test2D[1][2]);
    printf("[%d %d %d]\n", test2D[2][0], test2D[2][1], test2D[2][2]);
    
    return 0;
}