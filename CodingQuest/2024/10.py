#!/usr/bin/env python3
import sys

def read_input_file(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
    return lines

def initialize_board():
    board = [[0 for _ in range(20)] for _ in range(20)]
    board[9][9] = 2  # Player 2 starts at j10
    board[9][10] = 1  # Player 1 starts at j11
    board[10][9] = 1  # Player 1 starts at k10
    board[10][10] = 2  # Player 2 starts at k11
    return board

def play_move(board, move, player):
    if move == "pass":
        print(f"Player {player} passed their turn")
        return

    row, col = move_to_coordinates(move)
    if is_valid_move(board, row, col, player):
        print(f"Player {player} played move: {move}")
        flip_tokens(board, row, col, player)
    else:
        print(f"Invalid move: {move} for player {player}")

def move_to_coordinates(move):
    row = ord(move[0]) - ord('a')
    col = int(move[1:]) - 1
    return row, col

def is_valid_move(board, row, col, player):
    if row < 0 or row >= 20 or col < 0 or col >= 20 or board[row][col] != 0:
        return False

    opponent = 2 if player == 1 else 1
    directions = [(0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1), (-1, 0), (-1, 1)]

    # Check if the new position is adjacent to an opponent's token
    for dx, dy in directions:
        x, y = row + dx, col + dy
        if 0 <= x < 20 and 0 <= y < 20 and board[x][y] == opponent:
            break
    else:
        return False

    # Check if the move will result in flipping at least one of the opponent's tokens
    for dx, dy in directions:
        x, y = row + dx, col + dy
        flippable_tokens = []

        while 0 <= x < 20 and 0 <= y < 20 and board[x][y] == opponent:
            flippable_tokens.append((x, y))
            x += dx
            y += dy

        if len(flippable_tokens) > 0 and 0 <= x < 20 and 0 <= y < 20 and board[x][y] == player:
            return True

    return False

def flip_tokens(board, row, col, player):
    board[row][col] = player
    opponent = 2 if player == 1 else 1
    directions = [(0, 1), (1, 1), (1, 0), (1, -1), (0, -1), (-1, -1), (-1, 0), (-1, 1)]

    for dx, dy in directions:
        x, y = row + dx, col + dy
        flippable_tokens = []

        while 0 <= x < 20 and 0 <= y < 20 and board[x][y] == opponent:
            flippable_tokens.append((x, y))
            x += dx
            y += dy

        if len(flippable_tokens) > 0 and 0 <= x < 20 and 0 <= y < 20 and board[x][y] == player:
            print(f"Flipping tokens: {[(chr(t[0] + ord('a')), t[1] + 1) for t in flippable_tokens]}")
            for x, y in flippable_tokens:
                board[x][y] = player

def count_tokens(board, player):
    count = 0
    for row in board:
        count += row.count(player)
    return count

def play_game(game_moves):
    board = initialize_board()
    player = 1
    for move in game_moves:
        try:
            play_move(board, move, player)
        except ValueError:
            pass  # Skip invalid moves
        player = 2 if player == 1 else 1

    player_1_score = count_tokens(board, 1)
    player_2_score = count_tokens(board, 2)
    print(f"Player 1 score: {player_1_score}")
    print(f"Player 2 score: {player_2_score}")
    return player_1_score, player_2_score

def main():
    input_file = sys.argv[1] if len(sys.argv) > 1 else 'in.txt'
    game_data = read_input_file(input_file)

    total_player_1_score = 0
    total_player_2_score = 0
    game_number = 1
    for game_moves in game_data:
        game_moves = game_moves.strip().split()
        print(f"Playing game {game_number}")
        player_1_score, player_2_score = play_game(game_moves)
        total_player_1_score += player_1_score
        total_player_2_score += player_2_score
        game_number += 1

    print(f"Total player 1 score: {total_player_1_score}")
    print(f"Total player 2 score: {total_player_2_score}")

if __name__ == "__main__":
    main()
