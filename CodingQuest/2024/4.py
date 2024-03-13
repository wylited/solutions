#!/usr/bin/env python3

import math

def find_closest_pair(star_data):
    min_distance = float('inf')
    closest_pair = None

    for i in range(len(star_data)):
        star1 = star_data[i]
        for j in range(i + 1, len(star_data)):
            star2 = star_data[j]
            print(star1[1], star2[1])
            dist = math.sqrt((star1[1]-star2[1])**2 + (star1[2]-star2[2])**2 + (star1[3]-star2[3])**2)
            if dist < min_distance:
                min_distance = dist
                closest_pair = (star1[0], star2[0])

    return closest_pair, min_distance

def read_input_file(filename):
    star_data = []
    with open(filename, 'r') as file:
        next(file)  # Skip the header line
        for line in file:
            parts = line.strip().split()
            name = ' '.join(parts[:2])
            x = float(parts[-3])
            y = float(parts[-2])
            z = float(parts[-1])
            star_data.append((name, x, y, z))
    return star_data

def write_output_file(filename, closest_pair, min_distance):
    with open(filename, 'w') as file:
        file.write(f"The closest pair of star systems is: {closest_pair[0]} and {closest_pair[1]}\n")
        file.write(f"Distance: {min_distance:.3f} light years")

# Main code
star_data = read_input_file('in.txt')
closest_pair, min_distance = find_closest_pair(star_data)
print(f"The closest pair of star systems is: {closest_pair[0]} and {closest_pair[1]}")
print(f"Distance: {min_distance:.3f} light years")
write_output_file('out.txt', closest_pair, min_distance)
