#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void initialize_board(char board[3][3]);
void display_board(char board[3][3]);
bool place_marker(char board[3][3], int row, int col, char marker);
bool check_win(char board[3][3], char marker);
bool is_board_full(char board[3][3]);
void ai_move(char board[3][3]);
void reset_game(char board[3][3]);

int main() {
    char board[3][3];
    char current_marker = 'X'; 
    int row, col;
    bool game_over = false;
    char play_again;
    int game_mode;

    do {
        initialize_board(board);

        printf("Welcome to Tic Tac Toe!\n");

       
        printf("Select game mode:\n");
        printf("1. Play against another player\n");
        printf("2. Play against the computer (AI)\n");
        printf("Enter your choice (1-2): ");
        scanf("%d", &game_mode);

        while (game_mode != 1 && game_mode != 2) {
            printf("Invalid choice. Please enter 1 or 2: ");
            scanf("%d", &game_mode);
        }

        if (game_mode == 1) {
            printf("Two-player mode selected. Player 1 (X) - Player 2 (O)\n\n");
        } else {
            printf("One-player mode selected. Player 1 (X) - Computer (O)\n\n");
        }

        while (!game_over) {
            display_board(board);

            // Player's move
            if (game_mode == 1 || current_marker == 'X') {
                printf("Player %c, enter your move (row [1-3] column [1-3]): ", current_marker);
                while (true) {
                    scanf("%d %d", &row, &col);
                    row--;
                    col--;

                    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
                        break;
                    } else {
                        printf("Invalid move. Please enter again: ");
                    }
                }
                place_marker(board, row, col, current_marker);
            } else {
              
                ai_move(board);
            }

         
            if (check_win(board, current_marker)) {
                display_board(board);
                if (game_mode == 1) {
                    printf("Player %c wins!\n", current_marker);
                } else {
                    if (current_marker == 'X') {
                        printf("Player 1 (X) wins!\n");
                    } else {
                        printf("Computer (O) wins!\n");
                    }
                }
                game_over = true;
            } else if (is_board_full(board)) {
                display_board(board);
                printf("It's a draw!\n");
                game_over = true;
            } else {
              
                current_marker = (current_marker == 'X') ? 'O' : 'X';
            }
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &play_again);
        if (play_again == 'y' || play_again == 'Y') {
            reset_game(board);
            game_over = false;
            current_marker = 'X';
        }

    } while (play_again == 'y' || play_again == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}

void initialize_board(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void display_board(char board[3][3]) {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

bool place_marker(char board[3][3], int row, int col, char marker) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = marker;
        return true;
    } else {
        return false;
    }
}

bool check_win(char board[3][3], char marker) {
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == marker && board[i][1] == marker && board[i][2] == marker) ||
            (board[0][i] == marker && board[1][i] == marker && board[2][i] == marker)) {
            return true;
        }
    }
    if ((board[0][0] == marker && board[1][1] == marker && board[2][2] == marker) ||
        (board[0][2] == marker && board[1][1] == marker && board[2][0] == marker)) {
        return true;
    }
    return false;
}

bool is_board_full(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

void ai_move(char board[3][3]) {
   
    for (int i = 0; i < 3; i++) {
      
        if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == ' ') {
            place_marker(board, i, 2, 'O');
            return;
        }
        
        if (board[i][0] == 'O' && board[i][2] == 'O' && board[i][1] == ' ') {
            place_marker(board, i, 1, 'O');
            return;
        }
        if (board[i][1] == 'O' && board[i][2] == 'O' && board[i][0] == ' ') {
            place_marker(board, i, 0, 'O');
            return;
        }
        if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == ' ') {
            place_marker(board, 2, i, 'O');
            return;
        }
        if (board[0][i] == 'O' && board[2][i] == 'O' && board[1][i] == ' ') {
            place_marker(board, 1, i, 'O');
            return;
        }
        if (board[1][i] == 'O' && board[2][i] == 'O' && board[0][i] == ' ') {
            place_marker(board, 0, i, 'O');
            return;
        }
    }

    if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == ' ') {
        place_marker(board, 2, 2, 'O');
        return;
    }
    if (board[0][0] == 'O' && board[2][2] == 'O' && board[1][1] == ' ') {
        place_marker(board, 1, 1, 'O');
        return;
    }
    if (board[1][1] == 'O' && board[2][2] == 'O' && board[0][0] == ' ') {
        place_marker(board, 0, 0, 'O');
        return;
    }
    if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == ' ') {
        place_marker(board, 2, 0, 'O');
        return;
    }
    if (board[0][2] == 'O' && board[2][0] == 'O' && board[1][1] == ' ') {
        place_marker(board, 1, 1, 'O');
        return;
    }
    if (board[1][1] == 'O' && board[2][0] == 'O' && board[0][2] == ' ') {
        place_marker(board, 0, 2, 'O');
        return;
    }

    for (int i = 0; i < 3; i++) {
        if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == ' ') {
            place_marker(board, i, 2, 'O');
            return;
        }
        if (board[i][0] == 'X' && board[i][2] == 'X' && board[i][1] == ' ') {
            place_marker(board, i, 1, 'O');
            return;
        }
        if (board[i][1] == 'X' && board[i][2] == 'X' && board[i][0] == ' ') {
            place_marker(board, i, 0, 'O');
            return;
        }
        if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == ' ') {
            place_marker(board, 2, i, 'O');
            return;
        }
        if (board[0][i] == 'X' && board[2][i] == 'X' && board[1][i] == ' ') {
            place_marker(board, 1, i, 'O');
            return;
        }
        if (board[1][i] == 'X' && board[2][i] == 'X' && board[0][i] == ' ') {
            place_marker(board, 0, i, 'O');
            return;
        }
    }

    if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == ' ') {
        place_marker(board, 2, 2, 'O');
        return;
    }
    if (board[0][0] == 'X' && board[2][2] == 'X' && board[1][1] == ' ') {
        place_marker(board, 1, 1, 'O');
        return;
    }
    if (board[1][1] == 'X' && board[2][2] == 'X' && board[0][0] == ' ') {
        place_marker(board, 0, 0, 'O');
        return;
    }
    if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == ' ') {
        place_marker(board, 2, 0, 'O');
        return;
    }
    if (board[0][2] == 'X' && board[2][0] == 'X' && board[1][1] == ' ') {
        place_marker(board, 1, 1, 'O');
        return;
    }
    if (board[1][1] == 'X' && board[2][0] == 'X' && board[0][2] == ' ') {
        place_marker(board, 0, 2, 'O');
        return;
    }

    if (board[1][1] == ' ') {
        place_marker(board, 1, 1, 'O');
        return;
    }

    if (board[0][0] == ' ') {
        place_marker(board, 0, 0, 'O');
        return;
    }
    if (board[0][2] == ' ') {
        place_marker(board, 0, 2, 'O');
        return;
    }
    if (board[2][0] == ' ') {
        place_marker(board, 2, 0, 'O');
        return;
    }
    if (board[2][2] == ' ') {
        place_marker(board, 2, 2, 'O');
        return;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                place_marker(board, i, j, 'O');
                return;
            }
        }
    }
}

void reset_game(char board[3][3]) {
    initialize_board(board);
}
void ai_move(char board[3][3], int player_moves[9][2], int num_player_moves) {
   
    for (int i = 0; i < num_player_moves; i++) {
        int player_row = player_moves[i][0];
        int player_col = player_moves[i][1];

        if (board[player_row][0] == ' ' && board[player_row][1] == ' ' && board[player_row][2] == ' ') {
          
        }
       
    }

  
}