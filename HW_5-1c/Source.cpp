Formatting for homework:

// Attached: HW_5-1c
// ===================================================
// Program: HW_5-1c
// ===================================================
// Programmer: Jacob Fishel
// Class: CS CMPR 131
// ===================================================

//SOURCE CODE

// ===================================================

#include <iostream>
#include <vector>

void getTestScores(std::vector<int>& testScores);
double calcAvg(std::vector<int>& testScores);
void displayAvg(std::vector<int>& testScores);

int main() {
  //vector of size 5 of test scores
  std::vector<int> testScores(5);

  //get the test scores from user
  getTestScores(testScores);

  //display the avg
  displayAvg(testScores);

  return 0;
}

//function to get 5 test scores and insert it into testScores vector
void getTestScores(std::vector<int>& testScores) {

  std::cout << "Enter 5 test scores\n";

  //loop to get 5 test scores from user
  for(int i = 0; i < 5; i++) {
    int testScore;
    std::cout << "Enter student #" << i + 1 << ": ";
    std::cin >> testScore;
    testScores[i] = testScore;
  }

};

//function to get the average of the testScores vector
double calcAvg(std::vector<int>& testScores) {

  double scores = 0;
  //iterator to loop through testScores
  std::vector<int>::iterator it;
  for (it = testScores.begin(); it != testScores.end(); it++) {
    scores += *it;
  }

  //return the avg
  return scores / static_cast<double>(testScores.size());
};

//functoin to display the average
void displayAvg(std::vector<int>& testScores) {
  std::cout << "The average score is " << calcAvg(testScores) << std::endl;
};

/* OUTPUT:

// ===================================================
Enter 5 test scores
Enter student #1: 100
Enter student #2: 80
Enter student #3: 60
Enter student #4: 40
Enter student #5: 20
The average score is 60
*/
