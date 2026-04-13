# Competitive Programming Solutions Collection

A collection of C++ solutions for various competitive programming problems from platforms like AtCoder, CodeChef, and other online judges.

## 📋 Table of Contents

- [Overview](#overview)
- [Problems Solved](#problems-solved)
- [Compilation and Execution](#compilation-and-execution)
- [File Descriptions](#file-descriptions)
- [Requirements](#requirements)
- [Usage Examples](#usage-examples)
- [Problem Categories](#problem-categories)

## 🎯 Overview

This repository contains clean, efficient C++ implementations for competitive programming problems. Each solution is optimized for competitive programming constraints with focus on:
- Time complexity optimization
- Memory efficiency
- Clean, readable code
- Standard input/output handling

## 📝 Problems Solved

### 1. Binary String Flip (`flip.cpp`)
**Problem**: Given a binary string consisting of '0' and '1', flip all bits (replace '0' with '1' and '1' with '0').

**Constraints**:
- String length: 1 ≤ length ≤ 10
- Characters: '0' and '1' only

**Complexity**: O(n) time, O(1) space

**Input Format**:
```
s
```

**Output Format**:
```
flipped_string
```

**Example**:
```
Input:  01
Output: 10

Input:  1011
Output: 0100
```

---

### 2. Card Sorting (`short_sort.cpp`)
**Problem**: Given three cards with letters 'a', 'b', 'c' in some order, determine if they can be sorted to "abc" with at most one swap operation.

**Constraints**:
- Test cases: 1 ≤ t ≤ 6
- String contains exactly one each of 'a', 'b', 'c'

**Algorithm**: Count positions that differ from target "abc". If 0 or 2 positions differ, answer is YES.

**Complexity**: O(1) time per test case

**Input Format**:
```
t
string1
string2
...
```

**Output Format**:
```
YES/NO for each test case
```

**Example**:
```
Input:
6
abc
acb
bac
bca
cab
cba

Output:
YES
YES
YES
NO
NO
YES
```

---

### 3. Climbing Takahashi (`climbing_takahashi.cpp`)
**Problem**: Takahashi stands on N platforms arranged in a row. Starting from the leftmost platform, he moves right only if the next platform is strictly higher. Find the height of the final platform.

**Constraints**:
- 2 ≤ N ≤ 10⁵
- 1 ≤ Hᵢ ≤ 10⁹

**Complexity**: O(n) time, O(1) space

**Input Format**:
```
N
H1 H2 ... HN
```

**Output Format**:
```
final_height
```

**Example**:
```
Input:
5
1 5 10 4 2

Output:
10
```

**Explanation**: 1 → 5 (higher) → 10 (higher) → stops at 10 (next is 4, which is lower)

---

### 4. Double Click Detection (`double_click.cpp`)
**Problem**: Given N mouse clicks at times T₁, T₂, ..., Tₙ, find the first time a double-click was fired. A double-click occurs at time x₂ if (x₂ - x₁) ≤ D for consecutive clicks.

**Constraints**:
- 1 ≤ N ≤ 100
- 1 ≤ D ≤ 10⁹
- 1 ≤ Tᵢ ≤ 10⁹
- Times are strictly increasing

**Complexity**: O(n) time, O(1) space

**Input Format**:
```
N D
T1 T2 ... TN
```

**Output Format**:
```
time_of_first_double_click (or -1 if none)
```

**Example**:
```
Input:
4 500
300 900 1300 1700

Output:
1300
```

**Explanation**: 1300 - 900 = 400 ≤ 500, so double-click at 1300

---

### 5. Party Hall Capacity (`right_there.cpp`)
**Problem**: Chef wants to host a party with N people. The hall has capacity X. Determine if the party can be hosted.

**Constraints**:
- 1 ≤ T ≤ 100
- 1 ≤ N, X ≤ 10

**Complexity**: O(1) time per test case

**Input Format**:
```
T
N1 X1
N2 X2
...
```

**Output Format**:
```
YES/NO for each test case
```

**Example**:
```
Input:
4
2 5
4 3
6 6
10 9

Output:
YES
NO
YES
NO
```

---

### 6. Swapping Two Numbers (`swapping_two_numbers.cpp`)
**Problem**: Read pairs of integers and print them in ascending order. Stop when both integers are 0.

**Constraints**:
- 0 ≤ x, y ≤ 10,000
- Number of datasets ≤ 3000

**Complexity**: O(1) per pair

**Input Format**:
```
x1 y1
x2 y2
...
0 0
```

**Output Format**:
```
min max (for each pair)
```

**Example**:
```
Input:
3 2
2 2
5 3
0 0

Output:
2 3
2 2
3 5
```

---

### 7. YES String Validation (`yes_OR_yes.cpp`)
**Problem**: Given a string of length 3, determine if it is "YES" in any case combination (case-insensitive).

**Constraints**:
- 1 ≤ T ≤ 1000
- String length is exactly 3

**Complexity**: O(1) per test case

**Features**:
- Fast I/O optimization with `ios_base::sync_with_stdio(false)`
- Case-insensitive comparison using `toupper()`

**Input Format**:
```
T
string1
string2
...
```

**Output Format**:
```
YES/NO for each test case
```

**Example**:
```
Input:
5
YES
yes
Yes
YeS
NO

Output:
YES
YES
YES
YES
NO
```

---

## 🛠️ Compilation and Execution

### Windows (using g++)

```powershell
# Compile a single file
g++ -std=c++17 -O2 -Wall flip.cpp -o flip.exe

# Run the executable
.\flip.exe

# Or compile and run in one line
g++ -std=c++17 -O2 flip.cpp -o flip.exe ; .\flip.exe
```

### Compilation Flags Explained:
- `-std=c++17`: Use C++17 standard
- `-O2`: Optimization level 2 (good balance of speed and compilation time)
- `-Wall`: Show all warnings
- `-o filename.exe`: Specify output executable name

### Compile All Programs:

```powershell
g++ -std=c++17 -O2 flip.cpp -o flip.exe
g++ -std=c++17 -O2 short_sort.cpp -o short_sort.exe
g++ -std=c++17 -O2 climbing_takahashi.cpp -o climbing_takahashi.exe
g++ -std=c++17 -O2 double_click.cpp -o double_click.exe
g++ -std=c++17 -O2 right_there.cpp -o right_there.exe
g++ -std=c++17 -O2 swapping_two_numbers.cpp -o swapping_two_numbers.exe
g++ -std=c++17 -O2 yes_OR_yes.cpp -o yes_OR_yes.exe
```

## 📦 Requirements

- **Compiler**: g++ (MinGW on Windows) or any C++11 compatible compiler
- **C++ Standard**: C++11 or higher (C++17 recommended)
- **Operating System**: Windows, Linux, or macOS

### Installing g++ on Windows:
1. Download MinGW from [mingw-w64.org](https://www.mingw-w64.org/)
2. Install and add to PATH
3. Verify: `g++ --version`

## 💡 Usage Examples

### Example 1: Running flip.cpp

```powershell
# Compile
g++ flip.cpp -o flip.exe

# Run with input from console
.\flip.exe
# Type: 01
# Output: 10

# Run with input file
.\flip.exe < input.txt

# Run with input file and save output
.\flip.exe < input.txt > output.txt
```

### Example 2: Testing short_sort.cpp

Create `test_input.txt`:
```
3
abc
bca
cba
```

Run:
```powershell
g++ short_sort.cpp -o short_sort.exe
.\short_sort.exe < test_input.txt
```

Expected output:
```
YES
NO
YES
```

### Example 3: Batch Testing

Create a test script `test.ps1`:
```powershell
$programs = @("flip", "short_sort", "climbing_takahashi", "double_click", "right_there", "swapping_two_numbers", "yes_OR_yes")

foreach ($prog in $programs) {
    Write-Host "Compiling $prog.cpp..."
    g++ -std=c++17 -O2 "$prog.cpp" -o "$prog.exe"
    if ($LASTEXITCODE -eq 0) {
        Write-Host "✓ $prog compiled successfully" -ForegroundColor Green
    } else {
        Write-Host "✗ $prog compilation failed" -ForegroundColor Red
    }
}
```

Run: `.\test.ps1`

## 🏷️ Problem Categories

### String Manipulation
- `flip.cpp` - Binary string manipulation
- `short_sort.cpp` - String comparison and validation
- `yes_OR_yes.cpp` - Case-insensitive string matching

### Greedy Algorithms
- `climbing_takahashi.cpp` - Sequential decision making

### Simulation
- `double_click.cpp` - Event detection and timing

### Basic Logic
- `right_there.cpp` - Simple comparison
- `swapping_two_numbers.cpp` - Sorting two elements

## 📊 Time and Space Complexity Summary

| Program | Time Complexity | Space Complexity | Difficulty |
|---------|----------------|------------------|------------|
| flip.cpp | O(n) | O(1) | Easy |
| short_sort.cpp | O(1) | O(1) | Easy |
| climbing_takahashi.cpp | O(n) | O(1) | Easy |
| double_click.cpp | O(n) | O(1) | Easy |
| right_there.cpp | O(1) | O(1) | Easy |
| swapping_two_numbers.cpp | O(1) per pair | O(1) | Easy |
| yes_OR_yes.cpp | O(1) | O(1) | Easy |

## 🎓 Learning Points

### Key Programming Concepts Demonstrated:

1. **Input/Output Handling**
   - Standard input/output (`cin`, `cout`)
   - Fast I/O optimization
   - Multiple test case handling

2. **String Processing**
   - Character manipulation
   - Case conversion
   - String comparison

3. **Loop Patterns**
   - While loops with conditions
   - For loops with early termination
   - Reading until sentinel value

4. **Greedy Approach**
   - Making locally optimal choices
   - Early termination when solution found

5. **Edge Case Handling**
   - Empty inputs
   - Boundary values
   - Terminal conditions

## 🐛 Debugging Tips

### Common Issues and Solutions:

1. **Wrong Answer**
   - Check edge cases (minimum/maximum values)
   - Verify input/output format
   - Test with sample inputs

2. **Runtime Error**
   - Check array bounds
   - Verify input constraints
   - Handle division by zero

3. **Time Limit Exceeded**
   - Optimize loops
   - Use fast I/O
   - Check algorithm complexity

4. **Compilation Error**
   - Verify C++ standard version
   - Check header includes
   - Fix syntax errors

### Testing Strategy:

```powershell
# Test with sample input
echo "01" | .\flip.exe

# Test with edge cases
echo "0" | .\flip.exe
echo "1111111111" | .\flip.exe

# Test with multiple cases
@"
3
abc
bca
cba
"@ | .\short_sort.exe
```

## 📚 Additional Resources

- [AtCoder](https://atcoder.jp/) - Japanese competitive programming platform
- [CodeChef](https://www.codechef.com/) - Competitive programming platform
- [Codeforces](https://codeforces.com/) - Programming competitions
- [CP-Algorithms](https://cp-algorithms.com/) - Algorithm reference

## 👤 Author

Solutions implemented for competitive programming practice.

## 📅 Last Updated

January 26, 2026

---

**Happy Coding! 🚀**
