#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	int sum = 0;
	int array[5] = { 1, 2, 3, 4, 5 };
	ofstream fout;
	fout.open("Task1.txt", ios::out);
	if (fout)
	{
		cout << "File successfully created" << endl;
		for (int i = 0; i < 5; i++)
		{
			fout << array[i] << " ";
		}
	}
	else cout << "Error.";
	fout.close();
	
	ifstream fin;
	fin.open("Task1.txt", ios::in);
	if (fin)
	{
		cout << "File successfully accessed" <<endl<< "Writing array's numbers" << endl << "The retrived array is" << endl;
		for (int i = 0; i < 5; i++)
		{
			fin >> array[i];
			cout << array[i] << " ";
			sum += array[i];
		}	
	}
	else cout << "Unable to open file.";
	fin.close();

	ofstream sout;
    sout.open("Task1.txt", ios::out);
	if (sout)
	{
		sout << "Sum is: " << sum;
	}
	else cout << "Error.";
	sout.close();

	ifstream sin;
	sin.open("Task1.txt", ios::in);
	if (sin)
	{
		cout << endl << "Sum appended successfully" << endl;
		sin >> sum;
		cout << "Sum is: " << sum;
	}
	else cout<<"Error";
	sin.close();

}
