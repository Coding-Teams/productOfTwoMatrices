#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	setbuf(stdout, NULL);

	int aMatrixHeight, aMatrixWidth, bMatrixHeight, bMatrixWidth;

	printf("Matrix 1 (Rows Columns) - ");
	scanf("%d %d",&aMatrixHeight,&aMatrixWidth);
	printf("Matrix 2 (Rows Columns) - ");
	scanf("%d %d",&bMatrixHeight,&bMatrixWidth);

	if(aMatrixWidth == bMatrixHeight){
		printf("The result will have\n%d rows e %d columns",aMatrixHeight,bMatrixWidth);

		//Input matrices
		int aMatrix[aMatrixHeight][aMatrixWidth], bMatrix[bMatrixHeight][bMatrixWidth];
		printf("Matrix 1\n");
		for(int i = 0; i < aMatrixHeight; i++){
			for(int j = 0; j < aMatrixWidth; j++){
				printf("Row %d, Column %d - ",i+1,j+1);
				scanf("%d",&aMatrix[i][j]);
			}
		}
		printf("Matrix 2\n");
		for(int i = 0; i < bMatrixHeight; i++){
			for(int j = 0; j < bMatrixWidth; j++){
				printf("Row %d, Column %d - ",i+1,j+1);
				scanf("%d",&bMatrix[i][j]);
			}
		}

		//Crunch numbers
		int resultMatrix[aMatrixHeight][bMatrixWidth];
		for(int i = 0; i < aMatrixHeight; i++){
			for(int j = 0; j < bMatrixWidth; j++){
				int cellResult = 0;
				for(int k = 0; k < aMatrixWidth; k++){
					cellResult += aMatrix[i][k] * bMatrix[k][j];
				}
				resultMatrix[i][j] = cellResult;
			}
		}

		//Print final table
		for(int i = 0;i < aMatrixHeight;i++){
			for(int j = 0; j < bMatrixWidth;j++){
				printf("%d\t",resultMatrix[i][j]);
			}
			printf("\n");
		}

	}else{
		printf("Can't use this sizes");
	}

	return 0;
}
