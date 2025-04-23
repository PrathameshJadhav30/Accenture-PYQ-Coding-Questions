
import math

def calculate_distance(x1, y1, x2, y2):
    return math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)

x1, y1 = 1, 1
x2, y2 = 2, 4
x3, y3 = 3, 6

dist1 = calculate_distance(x1, y1, x2, y2)
dist2 = calculate_distance(x2, y2, x3, y3)
dist3 = calculate_distance(x1, y1, x3, y3)

total_distance = dist1 + dist2 + dist3

print("Total distance is:", total_distance)
