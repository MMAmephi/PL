#include <iostream>
#include <ctime>
#include <cmath>
#include <array>
#include <windows.h>

using namespace std;

double dist(array<int,2> &mas1, array<int,2> &mas2){
    return sqrt(pow(((mas1[0]-mas2[0])),2)+pow(((mas1[1]-mas2[1])),2));
}

void fill_board(array<array<char,8>,8> &board){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            board[i][j]='0';
        }
    }    
}

void random_position(array<int,2> &mas){
    srand(time(NULL));
    mas[0]=rand()%8;
    mas[1]=rand()%8;
}

void show_board(array<array<char,8>,8> &board, array<char,8> &letters){
    for(int i=0; i<8; i++){
        cout << 8-i << " ";
        for(int j=0; j<8; j++){
            cout << board[i][j] << " "; 
        }
        cout << "\n";
    }
    cout << "  ";
    for(int j=0; j<8; j++){
        cout << letters[j] << " "; 
    } 
    cout << "\n"; 
}

int main()
{
    array < array<char,8>, 8> board;
    array<char,8> letters={'a','b','c','d','e','f','g','h'};
    array<int,2> king_b={0,0};
    array<int,2> king_w={0,0};
    array<int,2> rook_b={0,0};

    fill_board(board);

    while(dist(king_b, king_w)<2 || dist(king_b, rook_b)<1. || dist(king_w, rook_b)<=1.){
        random_position(king_b);
        random_position(king_w);
        random_position(rook_b);
        cout << "!!!\n";
    }

    board[king_b[0]][king_b[1]]='K';
    board[king_w[0]][king_w[1]]='k';
    board[rook_b[0]][rook_b[1]]='R';

    show_board(board, letters);
    cout << dist(king_b, king_w);
    return 0;
}