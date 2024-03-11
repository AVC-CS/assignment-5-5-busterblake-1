
#include <iostream>
using namespace std;

int main()
{
	int N; // the number of students;
	int M; // the number of scores;
	int score; // the score of a student;
	double sum = 0.00; // the sum of the scores;
	double average = 0.00; // the average of the scores;
	string name; // the name of a student;


	cout << "Enter the number of students: " ;
	cin >> N;
	cout << "Enter the number of scores for each student: " ;
	cin >> M;

	for(int i=0; i<N; i++)
	{
		cout << "Enter the name of a student: " ;
		cin >> name;

		for (int j=0; j<M; j++)
		{
			cout << "Enter a score: " ;
			cin >> score;
			sum += score;
		}
		//sum and average of x name
		average = sum / M;
		cout << name << " " << sum << " " << average << endl;
		sum = 0;
		average = 0;
	}
}
