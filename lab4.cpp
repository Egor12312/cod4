/**************************
 * Автор: Устинов Егор    *
 * Вариант: 13            *
 **************************/
 
#include <stdio.h>

using namespace std;

int main() {
  int numberOfRows, numberOfColumns;
  int lineNumber, columnNumber;
  int matrix[100][100];
  double summa;
 
  printf("Enter the number of lines: \n");
  scanf("%d", &numberOfRows);
 
  printf("Enter the number of columns: \n");
  scanf("%d", &numberOfColumns);
 
  printf("Enter the elements of the matrix: \n");
 
  for (lineNumber = 0; lineNumber < numberOfRows; ++lineNumber) {
     for (columnNumber = 0; columnNumber < numberOfColumns; ++columnNumber) {
         scanf("%d", &matrix[lineNumber][columnNumber]);
     }
  }

  printf("Matrix: \n");
  for (lineNumber = 0; lineNumber<numberOfRows; ++lineNumber) {
      for (columnNumber = 0; columnNumber < numberOfColumns; ++columnNumber) {
          printf("%7d", matrix[lineNumber][columnNumber]);
      }  
      printf("\n");
  }

  printf("The arithmetic mean of the columns: \n");
  
  for (columnNumber = 0; columnNumber < numberOfColumns; ++columnNumber) {
    summa = 0;
    for (lineNumber = 0; lineNumber < numberOfRows; ++lineNumber) {
        summa += matrix[lineNumber][columnNumber];
    }   
    summa = summa / numberOfRows;
    printf("%7.3lf", summa);
  }  
  
  printf("\n"); 
  return 0;
}
