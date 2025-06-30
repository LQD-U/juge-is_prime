#include<iostream>
#define STUDENT_COUNT 10

using namespace std;

void mathScores(int scores[]) {
	cout << "\nplease enter" << STUDENT_COUNT << "student's math scores" << endl;
	for (int i = 0; i < STUDENT_COUNT; i++) {
		cout << "student" << (i + 1) << "score:";
		cin >> scores[i];

		while (scores[i] > 100 || scores[i] < 0) {
			cout << "The score should between 1 to 100,reenter:";
			cin >> scores[i];
		}
	}
}

void displayScores(int scores[]) {
	cout << "\nAll scores:" << endl;
	for (int i = 0; i < STUDENT_COUNT;i++) {
		cout <<"student"<<(i+1)<<":" << scores[i] << endl;
	}
}

double average(int scores[]) {
	int sum = 0;
	for (int i = 0; i < STUDENT_COUNT; i++) {
		sum += scores[i];
	}
	return (double)sum / STUDENT_COUNT;
}

int findMax(int scores[]) {
	int max;
	for (int i = 0; i < STUDENT_COUNT-1; i++) {
		if (scores[i] > scores[i + 1]) {
			int sam = scores[i];
			scores[i] = scores[i + 1];
			scores[i + 1] = sam;
		}
	}
	return max = scores[STUDENT_COUNT - 1];
}

int main() {
	int choice;
	int score[STUDENT_COUNT];
	do {
		cout << "\n=========student math score symtem=========" << endl;
		cout << "1.Enter scores" << endl;
		cout << "2.Display scores" << endl;
		cout << "3.Get average score" << endl;
		cout << "4.Search higest score" << endl;
		cout << "0.Quit symtem" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			mathScores(score);
			break;

		case 2:
			displayScores(score);
			break;
		case 3:
			cout << "aveage score is:" << average(score) << endl;
			break;
		case 4:
			cout << "the higest score is" << findMax(score) << endl;
			break;
		case 0:
			cout << "thanks for using" << endl;
			break;
		default:
			cout << "wore choice " << endl;
		}
	} while (choice != 0);
	return 0;
}




