#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question
{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;

    int Correct_Answer;
    int Question_Score;

public:

    void setValues (string, string, string, string, string, int, int);
    void askQuestion ( );
};

int main()
{

    cout << "Welcome To The FOOTBALL QUIZ" << endl;


    string Name;

    cout <<"What is your name?" << endl;
    cin >> Name;
    cout << endl;
    string Respond;
    cout << "Are you ready to take the quiz " << Name << "? yes/no" << endl;
    cin >> Respond;
    if (Respond == "yes")
    {
        cout << endl;
        cout << "ok, goodluck!" << endl;
    }
    else {
        cout << "ok, goodbye!" << endl;
        return 0;
    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;


    q1.setValues ("Who is the FIFA most Ballon D'or winner ",
                  "Ricardo Kaka",
                  "Cristiano Ronaldo",
                  "Lionel Messi",
                  "Andres Iniesta",
                  3,
                  1);

    q2.setValues ("Which club won the UEFA Champions League in 2015?",
                  "FC Barcelona",
                  "Real Madrid CF",
                  "FC Bayern Munich",
                  "Manchester United",
                  1,
                  1);

    q3.setValues ("Which country has won the most World Cups?",
                  "Germany",
                  "France",
                  "Italy",
                  "Brazil",
                  4,
                  1);

    q4.setValues ("Who is the Champions League's top goalscorer of all time?.",
                  "Pele",
                  "Cristiano Ronaldo",
                  "Lionel Messi",
                  "Zlatan Ibrahimovic",
                  2,
                  1);

    q5.setValues ("Which country won the first ever World Cup in 1930?",
                  "Uruguay",
                  "Brazil",
                  "Germany",
                  "Argentine",
                  1,
                  1);


    q1.askQuestion();

    q2.askQuestion();

    q3.askQuestion();

    q4.askQuestion();

    q5.askQuestion();


    cout << "Your Total Score is " << Total << " out of 5" << endl;

    if (Total >= 3)
    {
        cout << "Great you passed the quiz!" << endl;
        cout << " Congrats " << endl;

    }

    else {

        cout << "Oh no! you failed the quiz." << endl;
        cout << "better luck next time" << endl;
    }
    return 0;
}

void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "Choose the number of the correct answer" << endl;
    cin >> Guess;
    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great! You are correct" << endl;
        Total = Total + Question_Score;
        cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "oh no! You are wrong." << endl;
        cout << "Score: 0" << " out of " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
    }

}

