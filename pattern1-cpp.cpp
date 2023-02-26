#include <bits/stdc++.h>
using namespace std;

// Pattern-1
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
void print1(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			cout << "*"
				 << " ";
		}
		cout << endl;
	}
}

// Pattern-2
//  *
//  * *
//  * * *
//  * * * *
void print2(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*"
				 << " ";
		}
		cout << endl;
	}
}

// Pattern-3
//  1
//  1 2
//  1 2 3
//  1 2 3 4
//  1 2 3 4 5
void print3(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

// Pattern-4
//  1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5
void print4(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << " ";
		}
		cout << endl;
	}
}

// Pattern-5
//  * * * * *
//  * * * *
//  * * *
//  * *
//  *
void print5(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 0; j < num - i + 1; j++)
		{
			cout << "*"
				 << " ";
		}
		cout << endl;
	}
}

// Pattern-6
//  1 2 3 4 5
//  1 2 3 4
//  1 2 3
//  1 2
//  1
void print6(int num)
{
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= num - i + 1; j++)
		{
			cout << j << " ";
		}
		cout << endl;
	}
}

// Pattern-7
//       *
//      ***
//     *****
//    *******
//   *********

void print7(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i -1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}

		for (int j = 0; j < num - i - 1; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print8(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-9
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *

void print9(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num - i -1; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			cout << "*";
		}

		for (int j = 0; j < num - i - 1; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-10
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * 
// * * *
// * *
// *

void print10(int num)
{
	for (int i = 1; i <= 2*num-1; i++)
	{
		int star = i;
		if(i>num) star=2*num-i;
		for (int j = 1; j <= star; j++)
		{
			cout << "* ";
		}
		cout<<endl;
		
	}	
}

// Pattern-11
// 1
// 01
// 101
// 0101
// 10101

void print11(int num)
{
	int start= 1;
	for (int i = 0; i < num; i++)
	{
		if(i%2==0) start =1;
		else start=0;
		for (int j = 0; j <= i; j++)
		{
			cout <<start;
			start = 1-start;
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print12(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print13(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print14(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print15(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print16(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print17(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print18(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print19(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print20(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

// Pattern-8
// *********
//  *******
//   *****
//    ***
//     *

void print21(int num)
{
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = 0; j < 2*num - (2 * i + 1); j++)
		{
			cout << "*";
		}

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << endl;
	}
	
}

int main()
{
	int num;
	cin >> num;
	print11(num);

	return 0;
}
