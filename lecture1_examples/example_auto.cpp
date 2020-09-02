#include <iostream>
#include <vector>
#include <stdio.h>

int main() {
//  С stile
  int y[]={1,2,3};
  for(int i=0;i<3;i++) {
    printf("%d \n",y[i]);
  }
  std::vector<int> x = {1,2,3};

  // C++03 - stile
  for(std::vector<int>::iterator it = x.begin(); it != x.end(); it++ ) {
    std::cout << *it << std::endl;
  }
  // C++11
  for(auto it = x.begin(); it != x.end(); it++ ) {
    std::cout << *it << std::endl;
  }
}
