# Competitive Programming Solutions

This repository contains C++ solutions to various competitive programming problems.

## Files and Problem Descriptions

### 1. `make_it_white.cpp`
**Problem:** Make it White
**Description:** Given a strip of cells that are either white ('W') or black ('B'), find the minimum length of a continuous segment that needs to be painted white so that all cells become white.
**Algorithm:** Finds the indices of the first and last occurrence of 'B'. The answer is the distance between them (last - first + 1). If there are no black cells, the answer is 0.

### 2. `make_subarray.cpp`
**Problem:** Make Subarray (contiguous black cells)
**Description:** Given a binary string where '1' represents black and '0' represents white, find the minimum number of changes (white to black) needed so that all black cells form a contiguous subarray.
**Algorithm:** Finds the first and last occurrence of '1'. Then counts the number of '0's between these two indices. These '0's are the gaps that need to be filled.

### 3. `a_reverse.cpp`
**Problem:** A Reverse
**Description:** Given a string $S$ and integers $L$ and $R$, reverse the substring of $S$ from the $L$-th character to the $R$-th character.
**Algorithm:** Uses `std::reverse` on the substring defined by iterators corresponding to $L$ and $R$. Note that the problem uses 1-based indexing.

### 4. `vacation_together.cpp`
**Problem:** Vacation Together
**Description:** Given the schedules of $N$ people for $D$ days (represented by 'o' for free and 'x' for occupied), find the maximum number of consecutive days where everyone is free.
**Algorithm:** Iterates through each day. If all people are free on a given day, it increments a counter of current consecutive days. If not, it resets the counter. The maximum value of the counter is tracked and returned.

### 5. `ten_words_of_wisdom.cpp`
**Problem:** Ten Words of Wisdom
**Description:** In a game show, participants submit responses with a certain word count and quality. The winner is the response with the highest quality among those with at most 10 words.
**Algorithm:** Iterates through all responses. Checks if the word count is $\le 10$. If so, updates the winner if the current quality is higher than the maximum quality found so far.

### 6. `sereja_and_dima.cpp`
**Problem:** Sereja and Dima
**Description:** Two players play a game with a row of cards. They take turns picking the largest card from either the left or right end. Sereja goes first. Compute the final score of both players.
**Algorithm:** Uses a two-pointer approach (left and right indices). In each turn, compares the cards at the left and right ends, adds the larger one to the current player's score, and moves the corresponding pointer. Toggles the turn after each move.

## Compilation and Execution

All files are written in C++. You can compile them using `g++`.

**Example:**
To compile and run `make_it_white.cpp`:

```bash
g++ make_it_white.cpp -o make_it_white
./make_it_white
```

(On Windows, the executable will be `make_it_white.exe`, so run `.\make_it_white` or just `make_it_white`).

## Requirements
- A C++ compiler (like GCC/G++) supporting C++11 or later.

