#include <iostream>
#include <iomanip>
using namespace std;


int RandomNubers(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void fill3X3MatrixWithRandomNumbers(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			arr[i][x] = RandomNubers(0, 1);
		}
	}
}

void printMatrix3X3(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int x = 0; x < Colos; x++)
		{
			cout << setw(3) << arr[i][x] << "	";
			//printf("  %d ", arr[i][x]);
		}
		cout << endl;
	}
	cout << endl;
}

bool isIdentityMatrix(int arr[3][3], int Rows, int Colos)
{
	for (int i = 0; i < Rows; i++) //{ {1, 2, 3}, { 4,5,6 }, {7,8,9} }
	{
		for (int x = 0; x < Colos; x++)
		{
			if ((i == x) && arr[i][x] != 1)
			{
				return false;
			}
			else if((i != x) && arr[i][x] != 0)
			{
				cout << "here\n";
				return false;
			}
		}
		cout << endl;
	}
	return true;
}

void printResult(int arr1[3][3], int Rows, int Colos)
{
	if (isIdentityMatrix(arr1, Rows, Colos))
		cout << "   Yes: Matrix is Identity.\n";
	else
		cout << "   No: Matrix is not Identity.\n";
}

int main()
{
	srand((unsigned)time(NULL));
	//int arr[3][3];
	int arr[3][3] = { {1,0,0},{0, 01, 0},{0, 0, 1} };

	//fill3X3MatrixWithRandomNumbers(arr, 3, 3);
	cout << "  The Original Matrix: \n";
	printMatrix3X3(arr, 3, 3);
	
	printResult(arr, 3, 3);





	return 0;
}



