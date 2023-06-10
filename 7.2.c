#include <stdio.h>
#include <stdlib.h>
int main() {
	const unsigned char ROWS = 10;
		const unsigned char COLS = 10;
		const int LEFT_BORDER = -100;
		const int RIGHT_BORDER = 100;
		int m[ROWS][COLS];
		int sumSlaveDiag = 0;
		double averageSlaveDiag = 0;
		for(int ROW=0;ROW<ROWS;ROW++){
			for(int COL=0;COL<COLS;COL++){
				m[ROW][COL]= rand()%(RIGHT_BORDER-LEFT_BORDER+1)+LEFT_BORDER;
			printf("%5d", m[ROW][COL]);
		}
		printf("\n" );
		}
		for (int i=0; i<ROWS; i++){
			printf("col = %d, row = %d\n", i, ROWS - i - 1);
			printf("m = %d\n", m[ROWS - i - 1][i]);
			sumSlaveDiag +=m[ROWS - i - 1][i];
		}
		averageSlaveDiag = (double)sumSlaveDiag/COLS;
		printf("sum slave diagonal of matrix: %d.\n", sumSlaveDiag);
		printf("average slave diagonal of matrix: %6.2lf\n", averageSlaveDiag);
		return 0;
}
