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

void update_board(array<array<char,8>,8> &board, array<int,2> &k_b, array<int,2> &r_b, array<int,2> &k_w){
    fill_board(board);
    board[k_b[0]][k_b[1]]='K';
    board[k_w[0]][k_w[1]]='k';
    board[r_b[0]][r_b[1]]='R';
}

void random_position(array<int,2> &mas){
    srand(time(NULL));
    mas[0]=rand()%8;
    Sleep(100);
    mas[1]=rand()%8;
}

void true_rand(array<int,2> &mas1, array<int,2> &mas2, array<int,2> &mas3){
    random_position(mas1);
    random_position(mas2);
    random_position(mas3);
    while(dist(mas1, mas2)<1){
        random_position(mas2);
    }
    while(dist(mas3, mas2)<=1 || dist(mas1, mas3)<2){
        random_position(mas3);
    }    
}

void angle(array<int,2> &k_b, array<int,2> &r_b, array<int,2> &k_w){
    if(dist(r_b, k_w)<=2){

    }
}

void get_move(array<int,2> &point, array<char,8> &letters){
    string temp;
    cin >> temp;
    int pos=-1;
    for(int i=0; i<8; i++){
        if(temp[0]==letters[i]){
            pos=i;
        }
    }
    int tmp=int(temp[1])-'0';
    if(pos==-1 || tmp>=9 || tmp<=0 || size(temp)>2){
            cout << "Incorrect move\n";

    }
    else{
        point[1]=pos;
        point[0]=(8-tmp);
    }
}

void move(array<int,2> &fig, array<int,2> &point){
    fig[0]=point[0];
    fig[1]=point[1];
}

int is_possible(array<int,2> &k_b, array<int,2> &r_b, array<int,2> &k_w, array<int,2> &point){
    if(dist(k_w, point)<2 && dist(k_w, point)>0 && dist(k_b, point)>=2 && dist(r_b, point)>0 && point[0]!=r_b[0] && point[1]!=r_b[1]){
        return 1;
    }
    else{
        cout << "Incorrect move\n";
        return 0;
    }
}

int main()
{
    array < array<char,8>, 8> board;
    array<char,8> letters={'a','b','c','d','e','f','g','h'};
    array<int,2> king_b={0,0};
    array<int,2> king_w={0,0};
    array<int,2> rook_b={0,0};
    array<int,2> point={0,0};

    fill_board(board);
    true_rand(king_b, rook_b, king_w);
    update_board(board, king_b, rook_b, king_w);
    show_board(board, letters);

    for(int i=0; i<10;i++){
        get_move(point, letters);
        if(is_possible(king_b, rook_b, king_w, point)){
            move(king_w, point);
            update_board(board, king_b, rook_b, king_w);
            show_board(board, letters);
        }
    }
    return 0;
}