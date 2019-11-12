#include <iostream>

int main(){

  double currentAverage = 0.0, counter = 0.0, userInput;

  std::cin >> userInput;

  while(userInput >0.0){
    currentAverage = (counter/(counter+1.0))*currentAverage + (userInput/(counter+1.0));
    ++counter;
    std::cout << currentAverage << std::endl;
    std::cin >> userInput;
  }
  return 0;
}
