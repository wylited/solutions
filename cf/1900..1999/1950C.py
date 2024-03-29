#!/usr/bin/env python3

def convert(time_str):
    hours, minutes = time_str.split(':')

    hours = int(hours)
    minutes = int(minutes)

    if hours >= 12:
        meridian = 'PM'
        if hours > 12:
            hours -= 12
    else:
        meridian = 'AM'
        if hours == 0:
            hours = 12

    output = f"{hours:02d}:{minutes:02d} {meridian}"

    return output

t = int(input())
for _ in range(t):
    s = input()
    print(convert(s))
