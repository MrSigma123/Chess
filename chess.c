/* chess.c console version of chess
  GOAL: Fully functional chess for two players or very easy CPU opponent
  (level 0) with reandom moves

  TODO:

  - implement all pieces moves
  - castling (probably would be most challenging)
  - pawn promotion
  - en passant
  - consider move highlighting
  - write down algebraic inscription outside the board

  - DONE: design the chessboard representation

  - for future releases - expand the program core with GUI with different
    languages and packages

  Further explanations:
  - modules (functions):
    * chess engine
      @ submodules for every piece, pawns, promotion, castling, check, mate, stalemate
    * position display (console GUI)
    * random move for CPU (level 0)
    * display move history on the side (algebraic notation)
    * choose color or choose randomly
  */
