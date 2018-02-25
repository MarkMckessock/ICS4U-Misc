#include <stdio.h>

int array_1[5][6], array_2[6][5];

void transpose_array(int origin_rows,int origin_columns, int origin[origin_rows][origin_columns],
    int target_rows, int target_columns, int target[target_rows][target_columns]){
  int i,j;
  for (i=0;i<origin_rows;i++){
    for (j=0;j<origin_columns;j++){
      target[j][i] = origin[i][j];
    }
  }
}

void print_array (int rows, int columns, int array[rows][columns]){
  int i,j;
  for (i=0;i<rows;i++){
    for(j=0;j<columns;j++){
      printf("%i ",array[i][j]);
      if (j == columns - 1){
        printf("\n");
      }
    }
  }
}

int main (void) {
  int i,j;
  for (i=0;i<5;i++){
    for (j=0;j<6;j++){
      array_1[i][j]=5;
      array_2[j][i]=0;
    }
  }

  print_array(sizeof(array_1)/sizeof(array_1[0]),sizeof(array_1[0])/sizeof(array_1[0][0]),array_1);
  print_array(sizeof(array_2)/sizeof(array_2[0]),sizeof(array_2[0])/sizeof(array_2[0][0]),array_2);
  transpose_array(sizeof(array_1)/sizeof(array_1[0]),sizeof(array_1[0])/sizeof(array_1[0][0]),array_1,
    sizeof(array_2)/sizeof(array_2[0]),sizeof(array_2[0])/sizeof(array_2[0][0]),array_2);
  print_array(sizeof(array_1)/sizeof(array_1[0]),sizeof(array_1[0])/sizeof(array_1[0][0]),array_1);
  print_array(sizeof(array_2)/sizeof(array_2[0]),sizeof(array_2[0])/sizeof(array_2[0][0]),array_2);
}
