🧭 Problem Statement: Autonomous Cleaning Robot Navigation (Langton's Ant Simulation)
Scenario:

You're developing a prototype for an autonomous floor-cleaning robot that navigates a 2D grid room. The robot follows simple rules based on the state of the tile it is on—similar to Langton's Ant. Each tile in the room is either clean (white) or dirty (black).

Due to limited onboard computation, the robot cannot store a map or plan its route in advance. Instead, it uses a fixed set of rules:

If on a clean tile, it turns right, marks it dirty (simulates drying), and moves forward.

If on a dirty tile, it turns left, marks it clean (simulates cleaning), and moves forward.

Over time, the robot should cover more of the room through emergent behavior, even if the path appears chaotic at first.

Your Task:

Create a function GridCleaner with the following parameters:

grid - a two-dimensional array of 1s and 0s
// representing white and black cells respectively

column - horizontal position of the ant

row - ant's vertical position

n - number of iterations

direction - ant's current direction
// 0 - north, 1 - east, 2 - south, 3 - west
// default value will be 0

... and returns the state of the grid after n iterations.

example

Grid_Cleaner([[1]], 0, 0, 1, 0) ➞ [[0, 0]]
// Initially facing north (0), at the first iteration the ant turns
// right because it stands on a white square, 1. After that, it flips
// the square and moves forward.

Grid_Cleaner([[0]], 0, 0, 1, 0) ➞ [[0, 1]]