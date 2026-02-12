#include<stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=1;j<i+1;j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int k=4;k>=1;k--) {
        for (int l=1;l<k+1;l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}//
// Created by DELL on 12-02-2026.
//