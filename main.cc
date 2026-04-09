//Garrison Grajek
//808666069
//12 PM section
//Hack a long worksheet 21
#include <iostream>
#include <string>
#include <vector>

int sumVector (int index, const std::vector<int>& vec){
  if(index == vec.size()){
    return 0;
  } else  {
    int tmp1 = vec[index];
    int tmp2 = sumVector(index + 1, vec);
    return tmp1 + tmp2;
  }
}

int main() {
  std::vector<int> myVector = {3, 5, 7};
  int finalTotal = sumVector(0, myVector);
  std::cout << "The sum of the vector is " << finalTotal << "\n";
  return 0;
}
