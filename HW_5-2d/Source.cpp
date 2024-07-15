// Attached: HW_2d
// ===================================================
// Program: HW_2d
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> getScores(vector<int> &vec);
double calcavg(vector<int> &vec);
void displayAvg(vector<int> &vec);

int main() {

    vector<int> vec;

    //function calls
    getScores(vec);
    displayAvg(vec);


    return 0;
}

//function to get the users scores. As no limit to the scores.
vector<int> getScores(vector<int> &vec) {

cout << "Enter test scores (-1 to quit)\n";

    int score;
do {
        cout << "Enter a score: ";
        cin >> score;                   //user input
        if (score != -1) {
            vec.push_back(score);
        }
    } while (score != -1);              //if score = -1 quit

    return vec;                         //return a vector of scores
};

//function to calculate the average of the vector passes by ref
double calcavg(vector<int> &vec) {
    double score = 0;
    for (int value : vec) {         //add all values of vector
        score += value;
    }
    return score / vec.size();      //return the average
};

//function to display the average. uses calc avg function
void displayAvg(vector<int> &vec) {
    std::cout << "The average score is " << calcavg(vec) << endl;
};


/* OUTPUT:

Enter test scores (-1 to quit)
Enter a score: 100
Enter a score: 90
Enter a score: 80
Enter a score: 70
Enter a score: 60
Enter a score: 50
Enter a score: 40
Enter a score: 30
Enter a score: 20
Enter a score: 10
Enter a score: -1
The average score is 55

// ===================================================
*/