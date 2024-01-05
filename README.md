# Dynamic Programming

Dynamic programming is a powerful technique used for solving optimization problems by breaking them down into simpler subproblems. It is often employed when a problem exhibits overlapping subproblems and optimal substructure.

## Table of Contents
- [Introduction](#introduction)
- [Basic Concept](#basic-concept)
- [Approaches](#approaches)
- [Examples](#examples)

## Introduction

Dynamic Programming (DP) is a method for efficiently solving a broad range of search and optimization problems which exhibit the property of overlapping subproblems. Unlike divide and conquer, DP solves each subproblem just once and saves its answer in a table, thereby avoiding unnecessary recomputation.

## Basic Concept

The key idea behind dynamic programming involves solving complex problems by breaking them down into simpler subproblems. DP algorithms typically involve the following steps:
- **Identify Overlapping Subproblems:** Recognize situations where the problem can be broken down into smaller, overlapping subproblems.
- **Define the Recurrence Relation:** Formulate a recursive relation that expresses the solution to a subproblem in terms of the solutions to its smaller subproblems.
- **Memoization or Tabulation:** Use memoization (top-down) or tabulation (bottom-up) techniques to store and reuse the results of solved subproblems to avoid redundant computations.
- **Construct the Solution:** Build the solution to the original problem using the results obtained from solved subproblems.

## Approaches

There are two primary approaches to solving problems using dynamic programming:
- **Top-Down Approach (Memoization):** In this approach, recursion is used along with memoization to store the results of overlapping subproblems to avoid redundant computations.
- **Bottom-Up Approach (Tabulation):** This method involves solving the problem by building a table and filling it iteratively in a bottom-up manner, starting from the simplest subproblems.

## Examples

### Fibonacci Series
```python
#Using BottomUp dp
def fibonacci(n):
    if n <= 1:
        return n
    else:
        dp = [0] * (n + 1)
        dp[0] = 0
        dp[1] = 1
        for i in range(2, n + 1):
            dp[i] = dp[i - 1] + dp[i - 2]
        return dp[n]

# Example usage
print(fibonacci(10))  # Output: 55
