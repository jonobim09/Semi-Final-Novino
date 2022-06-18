/******************************************************************************
Pre-Finals Exam
Programmed by: Jolly Novino
Date Accomplished: 06/18/2022

//This program is a Computer Aided-Assisted Instruction (CAI)

*******************************************************************************/
#include <iostream>

int generateQuestions(int numberOfQuestions);
void generateResult(float correctAnswerCount, float numberOfQuestions);

using namespace std;


int main()
{
    int numberOfQuestions = 10;
    int correctAnswer = generateQuestions(numberOfQuestions);
    generateResult(correctAnswer, numberOfQuestions);
    
}

int generateQuestions(int numberOfQuestions) {
    int max = 10;
    int product;
    int answer;
    int correctAnswerCount = 0;
    
    srand(time(0));
    for (int i = 0; i < numberOfQuestions; i++) {
        int multiplier = rand()%max;
        int multiplicand = rand()%max;
        cout << "How much is " << multiplier << " X " << multiplicand << " ? ";
        cin >> answer;
        product = multiplier * multiplicand;
    
        if (product == answer)
        {
            cout << "Very Good!" << endl;
            correctAnswerCount += 1;
        }
        else
        {
            cout << "Sorry, incorrect answer." << endl;
        }
    }
    return correctAnswerCount;
}

void generateResult(float correctAnswerCount, float numberOfQuestions) {
     cout << "\n\nEvaluation Results: " << endl;
    cout << "Number of Correct answer: " << correctAnswerCount << endl;
    double accuracy = correctAnswerCount / numberOfQuestions * 100;
    cout << "Percentage of accuracy: " << accuracy << "%" << endl;
    
    float minExcellentGrade = 80;
    if (accuracy >= minExcellentGrade) {
        cout << "Excellent Work!." << endl;
    }
    else {
        cout << "Please review more and try again." << endl;
    }

    
}