#include <iostream>
#include <vector>
#include "ttt_helper.hpp"

// 1 represents 'o' and 2 represents 'x'
// the places that haven't been filled is 
// occupied with 0's (placeholder)
/*
board index as shown below:
     |     |      
 1   |  2  |  3
_____|_____|_____ 
     |     |      
 4   |  5  |  6
_____|_____|_____ 
     |     |      
 7   |  8  |  9
     |     |      
*/

int main(void) {
  greetings();
  std::vector<char> board = {'.', '.', '.', '.', '.', '.', '.', '.', '.'};
  take_turns(board);
}