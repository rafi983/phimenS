# Competitive Programming Solutions

This repository contains C++ solutions to various competitive programming problems. Each file corresponds to a specific problem solution.

## Files Description

### 1. `11_11.cpp`
**Problem Description:**
Calculates the number of "repdigit" dates in a year (or over a period). A repdigit date is likely defined as a date where valid digits form a sequence of identical characters (e.g., 1/1, 11/11). 
*(Note: Based on code inspection)*

### 2. `good_kid.cpp`
**Problem:** [Good Kid (Codeforces - Likely)](https://codeforces.com/problemset/problem/1873/B)
**Description:**
Given an array of integers, the goal is to maximize the product of the array elements by incrementing exactly one element by 1. The strategy implemented finds the minimum element and increments it.

### 3. `similar_string.cpp`
**Problem Description:**
Determines if two strings are "similar". Similarity is defined by specific character equivalences:
- `x` is similar to `y` if `x == y`.
- `'1'` is treated as similar to `'l'`.
- `'0'` is treated as similar to `'o'`.

### 4. `sum_of_round_numbers.cpp`
**Problem:** [Sum of Round Numbers (Codeforces - Likely)](https://codeforces.com/problemset/problem/1352/A)
**Description:**
Decomposes a given positive integer into a sum of "round" numbers. A round number is a number that has only one non-zero digit (e.g., 4000, 5, 20).

### 5. `triple.cpp`
**Problem:** [Triple (Codeforces - Likely)](https://codeforces.com/problemset/problem/1669/B)
**Description:**
Given an array of $n$ elements, the program finds an element that occurs at least three times. If multiple such elements exist, it prints any one of them. If none exist, it typically outputs -1.


## How to Run

You can compile and run any of these files using a C++ compiler like `g++`.

**Example:**
```bash
g++ sum_of_round_numbers.cpp -o sum_of_round_numbers
./sum_of_round_numbers
```

Ensure you provide the input in the format expected by the specific problem statement.
