/* In a file called chess.c:
a) Include chess.h.
b) Using the Square type from chess.h, define an 8x8 array called board that can store
the entire contents of a chessboard.c) Add an initializer to the declaration in part a) so that board corresponds to the usual
placement at the start of a chess game. A square that’s not occupied by a piece should
have an “empty” piece value, and a color black.
d) Write a main() function which uses nested loops to print the Chessboard by calling
printSquare(), for each of the elements of the board array. There should be a
space between each column and each row of the board should be on a different line.
Y */



#include <stdio.h>
#include "chess.h"

int main() {
    // Define an 8x8 array called board to represent the chessboard
    struct Square board[8][8];


    // Initialize the board with the usual placement at the start of a chess game
    enum Color currentColor;
    for (int row = 0; row < 8; row++) {
       // enum Color currentColor = (row < 2) ? White : (row > 5) ? White : Black;
        if (row < 2) {
                currentColor = Black;
            } else if (row > 5) {
                currentColor = White;
            }
            
    
        for (int col = 0; col < 8; col++) {
            struct Square square;
    
            // Set the color of the square
            square.mycolor = currentColor;
    
            // Initialize pieces according to their positions
            if (row == 0 || row == 7) {
                if (col == 0 || col == 7) {
                    square.mypiece = Rook;
                } else if (col == 1 || col == 6) {
                    square.mypiece = Knight;
                } else if (col == 2 || col == 5) {
                    square.mypiece = Bishop;
                } else if (col == 3) {
                    square.mypiece = Queen;
                } else if (col == 4) {
                    square.mypiece = King;
                } else {
                    square.mypiece = Empty;
                }
            } else if (row == 1 || row == 6) {
                square.mypiece = Pawn;
            } else {
                square.mypiece = Empty;
            }
    
            // Assign the created Square struct to the corresponding element in the board array
            board[row][col] = square;
        }
    }

    // Print the chessboard by calling printSquare() for each element of the board array
    for (int row = 0; row < 8; row++) {
        for (int col = 0; col < 8; col++) {
            // Call printSquare() for the current square
            printSquare(&board[row][col]);

            // Print a space between each column
            printf(" ");
        }

        // Print a newline after each row
        printf("\n");
    }

    return 0;
}
