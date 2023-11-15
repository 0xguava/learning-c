#include<stdio.h>

int get_matrix(int r,int c,int matrix[r][c]);
int print_matrix(int r,int c,int matrix[r][c]);

int main(){
  int matA[3][3]={{1,2,-1},{3,2,0},{-4,0,2}}, matB[3][3]={{3,4,2},{0,1,0},{-2,0,1}}, matC[3][3];
  int i, j, k=0, m=0, n=0,sum=0;


  /* printf("Enter Matrix A:\n"); */
  /* get_matrix(3,3,matA); */
  /**/
  /* printf("Enter Matrix B:\n"); */
  /* get_matrix(3,3,matB); */
  /**/
  /* for(i=0;i<3;i++){ */
  /*   for(j=0;j<3;j++){ */
  /*     matC[i][j] = matA[i][j] + matB[i][j]; */
  /*   } */
  /* } */
  
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      matC[k][i] = matC[k][i] + (matA[i][j] * matB[j][i]); 
    }
    k += 1;  
  }
  
  for(i=0;i<2;i++){
    for(j=0;j<3;j++){
      matC[i+1][i] =  matC[i+1][i] + (matA[i+1][j] * matB[j][i]);
    }
  } 
   
  print_matrix(3,3,matA);
  printf("\n");
  print_matrix(3,3,matB);
  printf("\n");
  print_matrix(3,3,matC);
  
  /* printf("%d",sum); */

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
