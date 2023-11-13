#include<stdio.h>

int get_matrix(int r,int c,int matrix[r][c]);
int print_matrix(int r,int c,int matrix[r][c]);

int main(){
  int matA[3][3], matB[3][3], matC[3][3];
  int i, j;

  printf("Enter Matrix A:\n");
  get_matrix(3,3,matA);

  printf("Enter Matrix B:\n");
  get_matrix(3,3,matB);

  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      matC[i][j] = matA[i][j] + matB[i][j];
    }
  }

  print_matrix(3,3,matA);
  printf("\n");
  print_matrix(3,3,matB);
  printf("\n");
  print_matrix(3,3,matC);

  return 0;
}

int get_matrix(int r,int c,int matrix[r][c]){
  int i, j;

  for(i=0;i<r;i++){
    printf("\tEnter elements of row %d: ",i+1);
    for(j=0;j<c;j++){
      scanf("%d",&matrix[i][j]);
    }
  }

  return 0;
}

int print_matrix(int r,int c,int matrix[r][c]){
  int i,j;
  
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}
