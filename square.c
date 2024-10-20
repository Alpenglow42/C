/* In a file called square.c:
a) Include the chess.h header file.
b) Write the printSquare(), function. It should print a single ASCII character for the
square. The character printed should be as follows:
See Handout
Note, that a Black piece symbol is the upper case version of a White piece symbol, which
are all lower case. You can take advantage of that in your function if you like.
In a file called chess.c:
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




struct PieceMap {
	enum Color color;
	enum Piece piece;
	char symbol;
};

    // Define mapping between pieces and ASCII characters using an array of structs
    struct PieceMap pieceMaparray[] = {
        {Black, Empty, '*'},    // Empty square
        {Black, Pawn, 'P'},     // Black Pawn
        {Black, Knight, 'N'},   // Black Knight
        {Black, Bishop, 'B'},   // Black Bishop
        {Black, Rook, 'R'},     // Black Rook
        {Black, Queen, 'Q'},    // Black Queen
        {Black, King, 'K'},     // Black King
        {White, Pawn, 'p'},     // White Pawn
        {White, Knight, 'n'},   // White Knight
        {White, Bishop, 'b'},   // White Bishop
        {White, Rook, 'r'},     // White Rook
        {White, Queen, 'q'},    // White Queen
        {White, King, 'k'}      // White King
    };
    

//define printSquare to print symbol for given square plot.
void printSquare(const struct Square *ptr) {

//loop through piecemaparray to find corrresponding symbol for the piece
    for(int i = 0; i < sizeof(pieceMaparray)/ sizeof(pieceMaparray[0]); i++) {
        
    	if (ptr->mypiece == pieceMaparray[i].piece && ptr->mycolor == pieceMaparray[i].color) {
            //print the symbol for the piece
            printf("%c", pieceMaparray[i].symbol);

            //exit the funtion
            return ;
    		
    	} 

    	
    } 
}//end of printSquare
