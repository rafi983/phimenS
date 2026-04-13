# Competitive Programming Solutions

This repository contains C++ solutions to various competitive programming problems. Each file represents a solution to a specific algorithmic challenge.

## Problems Solved

Here is a list of the problems solved in this repository:

*   **`not_quite_latin_square.cpp`**: Solution for finding the missing letter in a 3x3 Latin Square configuration.
*   **`weak_beats.cpp`**: Solution to check if all even-indexed characters in a binary string of length 16 are '0'.
*   **`treasure_chest.cpp`**: Solution to determine if a '*' character lies between two '|' characters in a string.
*   **`subarray_sums.cpp`**: Sliding window sequence algorithm to count the number of continuous subarrays that sum up to a target value `x`.
*   **`distinct_numbers.cpp`**: $O(n \log n)$ sorting approach to find the number of unique integer values in a given set.
*   **`dice_combinations.cpp`**: Dynamic programming approach to count the number of ways to construct a sum `n` by throwing a 6-sided die.
*   **`flight_routes.cpp`**: Graph algorithm utilizing Dijkstra's to find the `k` shortest flight routes between two cities.
*   **`string_matching.cpp`**: Knuth-Morris-Pratt (KMP) string search algorithm to find the number of occurrences of a string pattern within a larger text string in $O(N+M)$ time.
*   **`static_range_sum_queries.cpp`**: Prefix sum array technique to compute limits and sums between indexes $[a, b]$ in an array in $O(1)$ constant time for $q$ queries.
*   **`shortest_routes_II.cpp`**: Floyd-Warshall algorithm implementing an all-pairs shortest paths dynamic programming routine inside an adjacency matrix to quickly answer queries in $O(1)$ time.

## Compilation and Execution

These solutions are written in standard C++ and can be compiled using any modern C++ compiler (like GCC, Clang, or MSVC).

To compile a solution using `g++`, open your terminal and run:

```bash
g++ -O2 -std=c++17 -o <executable_name> <filename.cpp>
```

For example, to compile and run `dice_combinations.cpp`:

```bash
g++ -O2 -std=c++17 -o dice_combinations dice_combinations.cpp
./dice_combinations
```

Input should be provided via Standard Input (stdin), generally matching the formats specified by the respective competitive programming platforms.

## Requirements
* C++ 11 or higher (C++ 17 recommended)

