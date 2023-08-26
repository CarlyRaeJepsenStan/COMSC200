// 1. These lines are usually used in most C++ programs.  #include <iostream>
// allows us to use common i/o functions, like cout 
// using namespace std; makes code more concise by not having to write std::

#include <iostream>
using namespace std;
//2. This line defines a constant value, which can not be changed.
//This can be seen in the const keyword in the beginning of the line, and 
//the capitalization of the variable
const int COLS = 5;

//3. These lines are function prototypes, allowing us to define the functions later
int getTotal(int[][COLS], int);
double getAverage(int[][COLS], int);
int getRowTotal(int[][COLS], int);
int getColumnTotal(int[][COLS], int, int);
int getHighestInRow(int[][COLS], int);
int getLowestInRow(int[][COLS], int);

//4. This line defines the main function, the core of any C++ program 
int main() {
  const int ROWS = 4;

  int testArray[ROWS][COLS] = {{1, 2, 3, 4, 5},
                               {6, 7, 8, 9, 10},
                               {11, 12, 13, 14, 15},
                               {16, 17, 18, 19, 20}};

  cout << "The total of the array elements is " << getTotal(testArray, ROWS)
       << endl;

  cout << "The average value of an element is " << getAverage(testArray, ROWS)
       << endl;

  cout << "The total of row 0 is " << getRowTotal(testArray, 0) << endl;

  cout << "The total of col 2 is " << getColumnTotal(testArray, 2, ROWS)
       << endl;

  cout << "The highest value in row 2 is " << getHighestInRow(testArray, 2)
       << endl;

  cout << "The lowest value in row 2 is " << getLowestInRow(testArray, 2)
       << endl;

  system("PAUSE");
	//5. while not absolutely necessary, returning 0 is common practice
	//in many cases, 0 exit code is interpreted as success, and is also 
	//good practice because the main function returns type int
  return 0;
}

int getTotal(int array[][COLS], int rows) {
  int sum = 0;
	//6. in these lines, we use a nested loop to first traverse every row
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
			//7. We increment the sum by each successive element
      sum += array[i][j];
    }
  }
	//8. finally, we return the number for use by the main function
  return sum;
}

double getAverage(int array[][COLS], int rows) {
  float sum = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++) {
      //			cout << array[i][j];
      sum += array[i][j];
    }
  }
	//9. to find the average of the values, we use the same code we used to find the sum
	// and divide it by the total number of elements
	// we can treat the two-dimensional array like a square, and multiply the dimensions to find the 
	// total number of elements
  return sum / (COLS * rows);
}

int getRowTotal(int array[][COLS], int rowToTotal) {
  int sum = 0;
  for (int i = 0; i < COLS; i++) {
    sum += array[rowToTotal][i];
  }
  return sum;
}

int getColumnTotal(int array[][COLS], int colToTotal, int rows) {
  int sum = 0;
  for (int i = 0; i < rows; i++) {
    sum += array[i][colToTotal];
  }
  return sum;
}
int getHighestInRow(int array[][COLS], int rowToSearch) {
  int highestValue = 0;
  for (int i = 0; i < COLS; i++) {
    if (highestValue < array[rowToSearch][i]) {
      highestValue = array[rowToSearch][i];
    }
  }
  return highestValue;
}

int getLowestInRow(int array[][COLS], int rowToSearch) {

  int lowestValue = 2147482647;
	//10. I set the lowest value to the largest possible number an INT can be 
	//(according to google) so it will be set to the true lowest in the array
  for (int i = 0; i < COLS; i++) {
    if (lowestValue > array[rowToSearch][i]) {
      lowestValue = array[rowToSearch][i];
    }
  }
  return lowestValue;
}
