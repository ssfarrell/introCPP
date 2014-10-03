
#include <iostream>

using namespace std;



int main()

{

	double total_years=0, 

			month=0;

	

	double  total_rain=0, 

			average=0, 

			averageMonth=0;



	cout << "\tThis program calculates the average rainfall over a period of years." << endl;

	cout << "\t--------------------------------------------------------------------" << endl;



	cout << "How many years would you like to average?" << endl;

	cin >> total_years;



	for(int i = 1; i <= total_years; i++)

	{

		for(int j = 1; (j <= (total_years * 12)); j++)

		{

			cout << "Please enter the rainfall (in inches) collected in month " << j << endl;

			cin >> month;

			total_rain += month;

			cout << "(" << total_rain << " inches so far)" << endl;

		}



		if (total_years == 1)

		{

			average = total_rain / total_years;

			averageMonth = total_rain / month; 

			cout << "The total rainfall you recieved over " << total_years << " year ( " << (total_years * 12) << " months)" << " was " << total_rain << " inches." << endl;

			cout << "That's an average of " << average << " inches per year, and " << averageMonth << " inches per month!" << endl;

			

		}

		else if (total_years != 1)

		{

			average = total_rain / total_years;

			averageMonth = total_rain / month; 

			cout << "The total rainfall you recieved over " << total_years << " years ( " <<  (total_years * 12) << " months)" << " was " << total_rain << " inches." << endl;

			cout << "That's an average of " << average << " inches per year, and " << averageMonth << " inches per month!" << endl;

			

		}

	}









	

	return 0;

}
