#!/usr/bin/env python3
from collections import deque

def bfs(maze, ladders, start, end):
    queue = deque([(start, 0)])
    visited = set()

    while queue:
        (r, c, layer), steps = queue.popleft()
        pos = (r, c, layer)
        print("checking", pos)

        if (r, c) == (end[0], end[1]):
            return steps

        if pos not in visited:
            visited.add(pos)

            for dr, dc in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                new_r, new_c = r + dr, c + dc
                if (
                    0 <= new_r < len(maze[layer])
                    and 0 <= new_c < len(maze[layer][0])
                    and maze[layer][new_r][new_c] != "#"
                ):
                    new_pos = (new_r, new_c, layer)
                    if new_pos not in visited:
                        queue.append((new_pos, steps + 1))
                        print(f"add {new_pos} ")

            for ladder_r, ladder_c, _ in ladders:
                if r == ladder_r and c == ladder_c:
                    other_layer = 1 - layer
                    new_pos = (ladder_r, ladder_c, other_layer)
                    if new_pos not in visited:
                        queue.append((new_pos, steps + 1))
                        print(f"add {new_pos} LADDER GAMING")

    return -1  # No path found

def read_input(filename):
    with open(filename, 'r') as file:
        ls = file.readls()

    grid_size = len(ls[0].strip())
    upper_layer = []
    lower_layer = []
    ladders = []
    start = None
    end = None

    for i, l in enumerate(ls):
        r = list(l.strip())
        if i < grid_size:
            upper_layer.append(r)
            if start is None:
                if r[0] == '.':
                    start = (i, 0, 0)
            if end is None:
                if r[-1] == '.':
                    end = (i, len(r) - 1, 0)
            for j, char in enumerate(r):
                if char == '$':
                    ladders.append((i, j, 0))  # (r, c, layer)
        else:
            lower_layer.append([char for char in r])  # fix something about list indexing
            for j, char in enumerate(r):
                if char == '$':
                    ladders.append((i - grid_size - 1, j, 1))

    return [upper_layer, lower_layer], ladders, start, end

maze, ladders, start, end = read_input('in.txt')
print("Start:", start)
print("End:", end)
win = bfs(maze, ladders, start, end)
print(win)
