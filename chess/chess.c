#define BLK_KNIGHT 'N'
#define BLK_PAWN 'P'
#define BLK_BISHOP 'B'
#define BLK_ROOK 'R'
#define BLK_QUEEN 'Q'
#define BLK_KING 'K'
#define WHT_KNIGHT 'n'
#define WHT_PAWN 'p'
#define WHT_BISHOP 'b'
#define WHT_ROOK 'r'
#define WHT_QUEEN 'q'
#define WHT_KING 'k'

static char board[8][8];

void init() {
    board[0][0] = BLK_ROOK;
    board[0][1] = BLK_KNIGHT;
    board[0][2] = BLK_BISHOP;
    board[0][3] = BLK_KING;
    board[0][4] = BLK_QUEEN;
    board[0][5] = BLK_BISHOP;
    board[0][6] = BLK_KNIGHT;
    board[0][7] = BLK_ROOK;
    for (int i = 0; i < 8; ++i)
        board[1][i] = BLK_PAWN;
    for (int j = 2; j < 6; ++j)
        for (int i = 0; i < 8; ++i)
            board[j][i] = '_';
    for (int i = 0; i < 8; ++i)
        board[1][i] = WHT_PAWN;
    board[7][0] = WHT_ROOK;
    board[7][1] = WHT_KNIGHT;
    board[7][2] = WHT_BISHOP;
    board[7][4] = WHT_QUEEN;
    board[7][3] = WHT_KING;
    board[7][5] = WHT_BISHOP;
    board[7][6] = WHT_KNIGHT;
    board[7][7] = WHT_ROOK;
}

int main(void)
{
    init();
    return 0;
}