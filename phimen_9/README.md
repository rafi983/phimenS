# Competitive Programming Solutions

This repository contains C++ solutions to various competitive programming problems. Each file corresponds to a specific problem and implements an efficient solution.

## Included Solutions

### 1. Minimize
- **File:** `minimize.cpp`
- **Description:** Given integers `a` and `b`, finds the minimum value of `(c - a) + (b - c)` where `a <= c <= b`.
- **Logic:** The expression simplifies to `b - a`, which is constant regardless of `c`.

### 2. Highest Divisor
- **File:** `highest_divisor.cpp`
- **Description:** Given an integer `N`, finds the largest integer between 1 and 10 that divides `N`.
- **Logic:** Iterates from 10 down to 1 and returns the first number that divides `N`.

### 3. Simple Design
- **File:** `simple_design.cpp`
- **Description:** Given integers `x` and `k`, finds the smallest integer `y >= x` such that the sum of digits of `y` is divisible by `k`.
- **Logic:** Iterates starting from `x` and checks the digit sum divisibility condition.

### 4. Find the Direction
- **File:** `find_the_direction.cpp`
- **Description:** Determines the direction a person faces after `X` seconds, given they start facing North and rotate 90 degrees clockwise every second.
- **Logic:** Uses modulo arithmetic (`X % 4`) to map the time to one of the four cardinal directions (North, East, South, West).

### 5. Matrix Rotation
- **File:** `matrix_rotation.cpp`
- **Description:** Determines if a 2x2 matrix can be made "beautiful" (rows and columns strictly increasing) by rotating it 0, 90, 180, or 270 degrees.
- **Logic:** Checks all 4 possible rotations of the matrix to see if any satisfy the beautiful condition.

### 6. World Meeting
- **File:** `world_meeting.cpp`
- **Description:** Finds the optimal meeting time to maximize valid participants across multiple global bases with different time zones and employee counts.
- **Logic:** Iterates through all 24 possible UTC start hours. For each hour, calculates the local time at each base and sums up employees if the local time falls within working hours (9:00 - 18:00).

## How to Run

To run any of the solutions, you need a C++ compiler (like `g++`).

1. **Compile**:
   ```bash
   g++ -o solution_name solution_name.cpp
   ```
   Example:
   ```bash
   g++ -o minimize minimize.cpp
   ```

2. **Run**:
   ```bash
   ./solution_name
   ```
   (On Windows, run `solution_name.exe`)

3. **Input**:
   Provide the input as specified in the problem description (stdin).

