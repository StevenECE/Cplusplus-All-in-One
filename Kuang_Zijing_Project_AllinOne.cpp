// Kuang_Zijing_Project_AllinOne.cpp
// program that contains multiple sub-functions
#include <iostream> // allow program to perform input and output
#include <iomanip> // define manipulator functions
using namespace std; // program uses names from the std namespace

void f1(int, int);
void f2(int);
void f3(double, double);
void f4(double, double);
void f5(int, int);
int gcd(int, int);
void f6(int, int, int, int, int, int, int, int, int, int);
void quickSort(int * const, int, int);
void swap(int * const, int * const);
void quickSort(int * const, int, int);
void f7(int, int, int, int, int, int, int, int, int, int);
int recursiveMinimum(const int a[], int, int);

// function main begins program execution
int main()
{
	// variable declarations
	int choice, back, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, side, sn, pn;
	double principal, rate, side1, side2, tdv, a1[5][6] = {}, a2[6] = {}, ts;
	
	// display main menu
	cout << "\t\t\t\tWelcome to ALL IN ONE!!!\n\n"
		<< "\tPlease enter the corresponding number of the function you want to use.\n\n"
		<< "\t1. Calculation function that displays the sum, product, difference, and\n"
		<< "\t   quotient of two integers given by user\n\n"
		<< "\t2. Graphing function that prints the square with size given by user\n\n"
		<< "\t3. Compound interest function that calculates and prints the amount of\n"
		<< "\t   money on deposit at the end of each year for 10 years according to\n"
		<< "\t   principal and interest rate given by user\n\n"
		<< "\t4. Calculation function that displays the hypotenuse of a triangle with\n"
		<< "\t   two sides given by user\n\n"
		<< "\t5. Calculation function that displays the greatest common divisor of two\n"
		<< "\t   integers given by user\n\n"
		<< "\t6. Sorting function that sorts 10 integers given by user into ascending\n"
		<< "\t   order\n\n"
		<< "\t7. Searching function that finds and displays the smallest integer among\n"
		<< "\t   10 integers given by user\n\n"
		<< "\t8. Calculation function that reads all information for last month\'s sales\n"
		<< "\t   from user and summarizes the total sales by salesperson by product\n\n";
	cin >> choice;

	// enter different sub-functions according to user's choice
	switch (choice)
	{
		case 1:
			cout << "Enter first integer: ";
			cin >> n1;
			cout << "Enter second integer: ";
			cin >> n2;
			f1(n1, n2);
			cout << "\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 2:
			cout << "Please enter side: ";
			cin >> side;
			cout << endl;
			f2(side);
			cout << "\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 3:
			cout << "Please enter principal and interest rate (ex: 1000 5 = $1000 5%): ";
			cin >> principal >> rate;
			f3(principal, rate);
			cout << "\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 4:
			cout << "Please enter the two sides of a right triangle: ";
			cin >> side1 >> side2;
			f4(side1, side2);
			cout << "\n\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 5:
			cout << "Please enter two integers: ";
			cin >> n1 >> n2;
			f5(n1, n2);
			cout << "\n\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 6:
			cout << "Please enter 10 integers: ";
			cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
			f6(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
			cout << "\n\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 7:
			cout << "Please enter 10 integers: ";
			cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;
			f7(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);
			cout << "\n\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		case 8:
			// corresponding sub-function of number 8
			cout << fixed << setprecision(2);
			cout << "Enter the salesperson (1 - 4), product number (1 - 5), and total sales.\n"
				<< "Enter -1 for the salesperson to end input.\n";
			cin >> sn;
			while (sn != -1)
			{
				cin >> pn >> tdv;
				a1[sn][pn] += tdv;
				if (sn < 1 || sn > 4 || pn < 1 || pn > 5)
					cout << "Incorrect value entered. Please enter a new value." << endl;
				cin >> sn;
			}
			cout << "\nThe total sales for each salesperson are displayed at the end of each row,\n"
				<< "and the total sales for each product are diaplayed at the bottom of each\n"
				<< "column.\n"
				<< setw(13) << "1" << setw(12) << "2" << setw(12) << "3" << setw(12) << "4" << setw(12) << "5" << setw(13) << "Total\n";
			for (int i = 1; i < 5; ++i)
			{
				ts = 0;
				cout << i;
				for (int j = 1; j < 6; ++j)
				{
					ts += a1[i][j];
					cout << setw(12) << a1[i][j];
					a2[j] += a1[i][j];
				}
				cout << setw(12) << ts << '\n';
			}
			cout << "\nTotal" << setw(8) << a2[1];
			for (int j = 2; j < 6; ++j)
				cout << setw(12) << a2[j];
			cout << "\n\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
		default:
			cout << "Incorrect number enter.\n\n";
			cout << "Enter -1 to return to the main menu.\n";
			cin >> back;
			if (back == -1)
				return main();
			break;
	}
}

// corresponding sub-function of number 1
void f1(int n1, int n2)
{
	cout << "Sum is " << n1 + n2 << endl; 
	cout << "Product is " << n1 * n2 << endl;
	cout << "Difference is " << n1 - n2 << endl;
	cout << "Quotient is " << n1 / n2 << endl;
}

// corresponding sub-function of number 2
void f2(int s)
{
	for (int row = 1; row <= s; row++)
	{
		for (int col = 1; col <= s; col++)
			cout << "*";
		cout << "\n";
	}
}

// corresponding sub-function of number 3
void f3(double principal, double rate)
{
	double amount;
	cout << fixed << setprecision(2);
	cout << "\nYear\tAmount on deposit\n";        
	for (int year = 1; year <= 10; year++)
	{
		amount = principal * pow(1 + (rate / 100.0), year);
		cout << year << "\t" << amount << "\n";
	}
}

// corresponding sub-function of number 4
void f4(double x, double y)
{
	cout << "The hypotenuse of the triangle is " << sqrt(pow(x, 2) + pow(y, 2));
}

// corresponding sub-function of number 5
void f5(int n1, int n2)
{
	cout << "The greatest common divisor of the two integers is "
		<< gcd(n1, n2);
}

// function to recursively find and return the greatest common divisor of the two given integers
int gcd(int x, int y)
{
	int gcdv = 1;
	if (y == 0)
		gcdv = x;
	if (x == 0)
		gcdv = y;
	for (int d = 2; d <= ((x < y) ? x : y); ++d)
		if (x % d == 0 && y % d == 0)
			gcdv = d;
	return gcdv;
}

// corresponding sub-function of number 6
void f6(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10)
{
	int a[10] = {}, l;
	a[0] = n1;
	a[1] = n2;
	a[2] = n3;
	a[3] = n4;
	a[4] = n5;
	a[5] = n6;
	a[6] = n7;
	a[7] = n8;
	a[8] = n9;
	a[9] = n10;
	cout << "Unsorted array is:\n";
	for (l = 0; l < 10; ++l)
		cout << setw(5) << a[l];
	cout << "\n\n";
	quickSort(a, 0, 9);
	cout << "Sorted array is:\n";
	for (l = 0; l < 10; ++l)
		cout << setw(5) << a[l];
}

// function to sort a single subscripted integer array
void quickSort(int * const array, int first, int last)
{
	int partition(int * const, int, int);
	int cl;
	if (first >= last)
		return;
	cl = partition(array, first, last);
	quickSort(array, first, cl - 1);
	quickSort(array, cl + 1, last);
}

// function to compare the partitioning element with other elements of the array
int partition(int * const array, int left, int right)
{
	int position = left;
	while (true)
	{
		while (array[position] <= array[right] && position != right)
			--right;
		if (position == right)
			return position;
		if (array[position] > array[right])
		{
			swap(&array[position], &array[right]);
			position = right;
		}
		while (array[left] <= array[position] && left != position)
			++left;
		if (position == left)
			return position;
		if (array[left] > array[position])
		{
			swap(&array[position], &array[left]);
			position = left;
		}
	}
}

// function to switch position
void swap(int * const ptr1, int * const ptr2)
{
	int tp;
	tp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tp;
}

// corresponding sub-function of number 7
void f7(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10)
{
	int a[10] = {}, smallest;
	a[0] = n1;
	a[1] = n2;
	a[2] = n3;
	a[3] = n4;
	a[4] = n5;
	a[5] = n6;
	a[6] = n7;
	a[7] = n8;
	a[8] = n9;
	a[9] = n10;
	smallest = recursiveMinimum(a, 0, 9);
	cout << "\nThe smallest integer is: " << smallest;
}

// function to recursively find the smallest array element
int recursiveMinimum(const int a[], int s, int e)
{
	static int smallest = 1000;
	if (a[s] < smallest)
		smallest = a[s];
	return s == e ? smallest : recursiveMinimum(a, s + 1, e);
}