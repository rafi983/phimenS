# Competitive Programming Solutions

This repository contains C++ solutions to various competitive programming problems. Each solution is optimized for correctness and efficiency.

## 📋 Table of Contents

- [Problems](#problems)
  - [1. Echo (String Doubling)](#1-echo-string-doubling)
  - [2. Overall Winner](#2-overall-winner)
  - [3. Chessboard Locator](#3-chessboard-locator)
  - [4. ASCII Art Generator](#4-ascii-art-generator)
  - [5. Who Is Missing?](#5-who-is-missing)
- [Compilation and Usage](#compilation-and-usage)
- [Requirements](#requirements)
- [Testing](#testing)

---

## Problems

### 1. Echo (String Doubling)

**File:** `echo.cpp`

**Problem Description:**
Given a string `S` of length `N`, output a new string where each character is duplicated consecutively.

**Input:**
```
N
S
```
- `N` (1 ≤ N ≤ 50): Length of the string
- `S`: A string of N lowercase English letters

**Output:**
A string of length 2N where each character from S appears twice consecutively.

**Example:**
```
Input:
8
beginner

Output:
bbeeggiinnnneerr
```

**Algorithm:**
- Simple iteration through the string
- Print each character twice
- Time Complexity: O(N)
- Space Complexity: O(1)

---

### 2. Overall Winner

**File:** `overall_winner.cpp`

**Problem Description:**
Takahashi and Aoki play N games. Determine the overall winner based on:
1. Who won more games
2. If tied, who reached that number of wins first

**Input:**
```
N
S
```
- `N` (1 ≤ N ≤ 100): Number of games
- `S`: String of length N consisting of 'T' (Takahashi win) and 'A' (Aoki win)

**Output:**
- `T` if Takahashi is the overall winner
- `A` if Aoki is the overall winner

**Example:**
```
Input:
6
ATTATA

Output:
T
```

**Algorithm:**
1. Count total wins for each player
2. If one has more wins, they win overall
3. If tied, simulate games and find who reached the final count first
- Time Complexity: O(N)
- Space Complexity: O(1)

---

### 3. Chessboard Locator

**File:** `chessboard.cpp`

**Problem Description:**
Given an 8×8 grid representing a chessboard, find the position of a single piece marked with `*`.

**Input:**
```
S1
S2
...
S8
```
- 8 strings of length 8
- Each string contains '.' (empty) or '*' (piece)
- Exactly one '*' exists in the entire grid

**Output:**
The chess notation of the square containing the piece (e.g., "a1", "h8").

**Chess Notation:**
- Columns: a-h (left to right)
- Rows: 1-8 (bottom to top)
- Input is given from top to bottom (S1 = row 8, S8 = row 1)

**Example:**
```
Input:
........
........
........
........
........
.*......
........
........

Output:
b3
```

**Algorithm:**
- Scan the 8×8 grid for the '*' character
- Convert grid coordinates to chess notation
- Column: 'a' + column_index
- Row: 8 - row_index
- Time Complexity: O(1) - fixed 64 squares
- Space Complexity: O(1)

---

### 4. ASCII Art Generator

**File:** `ASCII_art.cpp`

**Problem Description:**
Convert an H×W matrix of integers (0-26) into ASCII art where:
- 0 becomes '.'
- 1 becomes 'A', 2 becomes 'B', ..., 26 becomes 'Z'

**Input:**
```
H W
A[1,1] A[1,2] ... A[1,W]
A[2,1] A[2,2] ... A[2,W]
...
A[H,1] A[H,2] ... A[H,W]
```
- `H` (1 ≤ H ≤ 100): Number of rows
- `W` (1 ≤ W ≤ 100): Number of columns
- `A[i,j]` (0 ≤ A[i,j] ≤ 26): Matrix elements

**Output:**
H lines, each containing W characters forming the ASCII art.

**Example:**
```
Input:
2 3
0 1 2
0 0 3

Output:
.AB
..C
```

**Algorithm:**
- Read matrix dimensions and values
- Convert each value to corresponding character
- 0 → '.', n → ('A' + n - 1)
- Time Complexity: O(H × W)
- Space Complexity: O(1)

---

### 5. Who Is Missing?

**File:** `who_is_missing.cpp`

**Problem Description:**
Given 4N-1 cards where originally there were 4 cards each with numbers 1 through N, find which number is missing one card.

**Input:**
```
N
A1 A2 ... A[4N-1]
```
- `N` (1 ≤ N ≤ 10^5): Maximum card value
- `A[i]` (1 ≤ A[i] ≤ N): Card values

**Output:**
The integer that appears only 3 times (missing one card).

**Example:**
```
Input:
3
1 3 2 3 3 2 2 1 1 1 2

Output:
3
```

**Algorithm:**
- Use frequency counting array
- Count occurrences of each number from 1 to N
- Find the number that appears exactly 3 times (missing one of its 4 cards)
- Time Complexity: O(N)
- Space Complexity: O(N)

---

## Compilation and Usage

### Prerequisites
- C++ compiler with C++11 support or later (g++, clang++, MSVC)
- Standard C++ library

### Compilation

**Windows (using g++):**
```powershell
g++ -std=c++11 -o echo.exe echo.cpp
g++ -std=c++11 -o overall_winner.exe overall_winner.cpp
g++ -std=c++11 -o chessboard.exe chessboard.cpp
g++ -std=c++11 -o ASCII_art.exe ASCII_art.cpp
g++ -std=c++11 -o who_is_missing.exe who_is_missing.cpp
```

**Linux/Mac:**
```bash
g++ -std=c++11 -o echo echo.cpp
g++ -std=c++11 -o overall_winner overall_winner.cpp
g++ -std=c++11 -o chessboard chessboard.cpp
g++ -std=c++11 -o ASCII_art ASCII_art.cpp
g++ -std=c++11 -o who_is_missing who_is_missing.cpp
```

### Running

**Windows:**
```powershell
# Using input redirection
.\echo.exe < input.txt

# Or pipe input
echo "8`nbeginner" | .\echo.exe
```

**Linux/Mac:**
```bash
# Using input redirection
./echo < input.txt

# Or pipe input
echo -e "8\nbeginner" | ./echo
```

---

## Requirements

- **Language:** C++ (C++11 or later)
- **Standard Library:** iostream, string, vector
- **Platform:** Cross-platform (Windows, Linux, macOS)
- **Memory:** All solutions use minimal memory
- **Time Limits:** Solutions are optimized for competitive programming time constraints

---

## Testing

### Test Case Format

Each problem includes sample test cases. Create input files and verify outputs:

**Example: Testing echo.cpp**

Create `test_echo.txt`:
```
8
beginner
```

Run:
```powershell
.\echo.exe < test_echo.txt
```

Expected output:
```
bbeeggiinnnneerr
```

### Automated Testing Script (PowerShell)

```powershell
# test_all.ps1
$problems = @("echo", "overall_winner", "chessboard", "ASCII_art", "who_is_missing")

foreach ($problem in $problems) {
    Write-Host "Testing $problem..." -ForegroundColor Cyan
    g++ -std=c++11 -o "$problem.exe" "$problem.cpp"
    if ($LASTEXITCODE -eq 0) {
        Write-Host "✓ Compiled successfully" -ForegroundColor Green
    } else {
        Write-Host "✗ Compilation failed" -ForegroundColor Red
    }
}
```

---

## Problem Source

These problems are typical competitive programming problems, similar to those found on platforms like:
- AtCoder Beginner Contest (ABC)
- Codeforces
- LeetCode
- HackerRank

---

## Author

Solutions implemented in January 2026.

## License

This code is provided for educational purposes. Feel free to use and modify for learning competitive programming.

---

## Tips for Competitive Programming

1. **Read the problem carefully** - Pay attention to constraints
2. **Start with brute force** - Optimize only if needed
3. **Test with sample inputs** - Always verify with provided examples
4. **Consider edge cases** - Minimum/maximum values, empty inputs
5. **Time complexity matters** - Ensure your solution fits within time limits
6. **Space optimization** - Sometimes trading time for space is necessary

## Common Patterns Used

- **Frequency Counting** (who_is_missing.cpp)
- **String Manipulation** (echo.cpp)
- **Simulation** (overall_winner.cpp)
- **Grid/Matrix Processing** (chessboard.cpp, ASCII_art.cpp)
- **Early Exit Optimization** (chessboard.cpp)

---

**Happy Coding! 🚀**
