# 🚀 First N Fibonacci Numbers Using Recursion + Memoization (DP)

This project demonstrates how to generate the **first N Fibonacci numbers** using **Recursion with Dynamic Programming (Memoization)** in **C++**.

The solution is optimized using a DP array to avoid repeated recursive calculations and improve performance.

---

# 📌 Problem Statement

Given a number `n`, return an array containing the first `n` Fibonacci numbers.

The Fibonacci sequence is defined as:

\[
F(n) = F(n-1) + F(n-2)
\]

Where:

- `F(0) = 0`
- `F(1) = 1`

---

# 🧠 Concepts Used

This solution uses:

- ✅ Recursion
- ✅ Dynamic Programming
- ✅ Memoization
- ✅ Vectors in C++
- ✅ Top-Down DP Approach

---

# 💡 What is Memoization?

Memoization is a Dynamic Programming technique where previously computed results are stored and reused later.

Instead of recalculating the same Fibonacci values multiple times, we save them in a `dp` array.

This significantly improves performance.

---

# ⚡ Why Normal Recursion is Slow

Without memoization:

```txt
fib(5)
├── fib(4)
│   ├── fib(3)
│   │   ├── fib(2)
│   │   └── fib(1)
│   └── fib(2)
└── fib(3)
```

Many function calls repeat again and again.

For example:
- `fib(3)` gets calculated multiple times.
- `fib(2)` gets calculated multiple times.

This increases time complexity exponentially.

---

# ✅ Optimized Solution

Using memoization:

- Every Fibonacci number is calculated only once.
- Results are stored in the `dp` array.
- Future calls directly use stored values.

---

# ⏱️ Time Complexity

| Approach | Time Complexity |
|----------|----------------|
| Normal Recursion | \(O(2^n)\) |
| Memoization | \(O(n)\) |

---

# 💾 Space Complexity

| Type | Complexity |
|------|------------|
| DP Array | \(O(n)\) |
| Recursion Stack | \(O(n)\) |

---

# 💻 C++ Code

```cpp
// User function template for C++

class Solution {
  public:
  
    // Function to calculate fibonacci numbers using recursion + memoization
    int Solve(int n, vector<int> &dp)
    {
        if(n == 0)
        {
            return 0;
        }

        if(n == 1)
        {
            return 1;
        }

        // If already calculated
        if(dp[n] != -1)
        {
            return dp[n];
        }

        // Store result in dp array
        dp[n] = Solve(n-1, dp) + Solve(n-2, dp);

        return dp[n];
    }

    // Function to return first n fibonacci numbers
    vector<int> fibonacciNumbers(int n) {
        
        vector<int> ans;

        // DP array initialized with -1
        vector<int> dp(n+1, -1);

        for(int i = 0; i < n; i++)
        {
            ans.push_back(Solve(i, dp));
        }

        return ans;
    }
};
```

---

# 📥 Example

## Input

```txt
n = 5
```

## Output

```txt
[0, 1, 1, 2, 3]
```

---

# 🔍 Dry Run

For `n = 5`

Fibonacci sequence becomes:

```txt
0 → 1 → 1 → 2 → 3
```

Returned vector:

```txt
[0, 1, 1, 2, 3]
```

---

# 🔥 Key Learning Outcomes

Through this problem, we learn:

- Recursive problem solving
- Dynamic Programming basics
- Memoization optimization
- Space-Time tradeoffs
- Using vectors efficiently in C++

---

# 🛠️ Technologies Used

- C++
- STL Vector
- Recursion
- Dynamic Programming

---

# 🎯 Advantages of This Approach

✅ Faster than normal recursion  
✅ Avoids repeated calculations  
✅ Easy to understand  
✅ Beginner-friendly DP problem  
✅ Great introduction to memoization  

---

# 📚 Applications of Fibonacci

Fibonacci concepts are used in:

- Dynamic Programming
- Tree Problems
- Graph Algorithms
- Mathematical Modeling
- Competitive Programming
- Interview Questions

---

# 🌟 Platform

Problem solved on:

👉 GeeksforGeeks

---

# 👨‍💻 Author

## Mohd Wasim

Passionate about:
- Data Structures & Algorithms
- Competitive Programming
- Problem Solving
- C++ Development

---

# ⭐ Support

If you found this project helpful:

- ⭐ Star this repository
- 🍴 Fork the repository
- 📢 Share with others learning DSA

---

# 📌 Tags

`C++` `DSA` `Dynamic Programming` `Memoization` `Recursion` `GeeksforGeeks` `Fibonacci`

---
