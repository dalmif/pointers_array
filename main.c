//
//  main.c
//  algo
//
//  Created by Mohammad Fallah on 9/14/1397 AP.
//  Copyright © 1397 Mohammad Fallah. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int** input_array(int n,int m);
void output_array(int** a,int n,int m);
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int** a;
    a = input_array(n,n);
    output_array(a,n,n);
    return 0;
}
int** input_array(int n,int m){
    int** myArray = (int**) malloc(sizeof(int*) * n);
    for (int z =0; z<m; z++) {
        *(myArray+z) = (int*) malloc(sizeof(int) *m);
    }
    
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++)
            scanf("%d",(*(myArray + (i)) + j));
    }
    return myArray;
}
void output_array(int** a,int n,int m) {
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<m;j++)
            printf("%d\n",*(*(a + (i )) + j));
    }
}
