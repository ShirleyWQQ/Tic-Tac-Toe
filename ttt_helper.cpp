#include <iostream>
#include <cstdlib>
#include <vector>
#include "ttt_helper.hpp"

void current_board(std::vector<char> board) {
      std::cout << "     |     |      \n";
 
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";
}


bool is_win(std::vector<char> board) {
  if ((board[0] == 'o' || board[0] == 'x') &&board[0] == board[1] && board[1] == board[2]) {
    return true;
  } else if ((board[3] == 'o' || board[3] == 'x') && board[3] == board[4] && board[4] == board[5]) {
    return true;
  } else if ((board[6] == 'o' || board[6] == 'x') && board[6] == board[7] && board[7] == board[8]) {
    return true;
  } else if ((board[0] == 'o' || board[0] == 'x') && board[0] == board[3] && board[3] == board[6]) {
    return true;
  } else if ((board[1] == 'o' || board[1] == 'x') && board[1] == board[4] && board[4] == board[7]) {
    return true;
  } else if ((board[2] == 'o' || board[2] == 'x') && board[2] == board[5] && board[5] == board[8]) {
    return true;
  } else if ((board[0] == 'o' || board[0] == 'x') && board[0] == board[4] && board[4] == board[8]) {
    return true;
  } else if ((board[2] == 'o' || board[2] == 'x') && board[2] == board[4] && board[4] == board[6]) {
    return true;
  } else {
    return false;
  }
}



void greetings() {
  std::cout << "Welcome to Tic-Tac-Toe!\n";
  std::cout << "board indexes are shown below:\n";
  std::cout << "     |     |      \n";
        std::cout << "     |     |      \n";
    std::cout << "  " << '1' << "  |  " << '2' << "  |  " << '3' << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << '4' << "  |  " << '5' << "  |  " << '6' << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << '7' << "  |  " << '8' << "  |  " << '9' << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";
}



void take_turns(std::vector<char> board) {
  for (int i = 0; i < 9; i++) {
    if (i % 2 == 0) {
      int move_index = 0;
      std::cout << "Player 1's turn!\n";
      std::cout << "Enter a number between 1 and 9 (inclusive) as shown on the board.\n";
      current_board(board);
      std::cin >> move_index;
      while (board[move_index - 1] != '.') {
        std::cout << "This place is already taken! Try another place!\n";
        std::cin >> move_index;
      }
      board[move_index - 1] = 'o';
      current_board(board);
      if (is_win(board) == true) {
        std::cout << "Player 1 wins!\n";
        return;
      } 
    } else if (i % 2 == 1) {
      int move_index = 0;
      std::cout << "Player 2's turn!\n";
      std::cout << "Enter a number between 1 and 9 (inclusive) as shown on the board.\n";
      current_board(board);
      std::cin >> move_index;
   while (board[move_index - 1] != '.') {
        std::cout << "This place is already taken! Try another place!\n";
        std::cin >> move_index;
      }
      board[move_index - 1] = 'x';
      current_board(board);
            if (is_win(board) == true) {
        std::cout << "Player 2 wins!\n";
        return;
      } 
    }
  }
  std::cout << "Tie!\n";

}