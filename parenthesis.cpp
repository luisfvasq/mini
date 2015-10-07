#include <iostream>

void printLeftLevel(int, int, std::string, int &);
void printRightLevel(int, int, std::string, int &);
void getUserInput(int &);

int main(){
  std::string output;
  int numPairs = 3;
  getUserInput(numPairs);
  int counter = 1;
  printLeftLevel(numPairs, numPairs, output, counter);
}

void getUserInput(int & number){
  std::cout << "Enter number of pairs: ";
  std::cin >> number;
}

void printLeftLevel(int left, int right, std::string output, int & counter){
  if(left <= 0){
    return;
  }
  
  output.append("(");
  printLeftLevel(left-1, right, output, counter);
  printRightLevel(left-1, right, output, counter);
  }
  
  void printRightLevel(int left, int right, std::string output, int & counter){
  if (right <= 0){
    std::cout << counter <<": " << output << std::endl;
    counter++;
    return;
  }
  
  if(left < right){
    output.append(")");
    right--;
    printRightLevel(left, right, output, counter);
    printLeftLevel(left, right, output, counter);
  }
}
