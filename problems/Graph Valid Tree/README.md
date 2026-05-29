# Name

[Graph Valid Tree](https://neetcode.io/problems/valid-tree)

File: `graph-valid-tree.cpp`

# README

```md
# Graph Valid Tree

## Description

You are given:
- `n` nodes labeled from `0` to `n - 1`
- a list of undirected edges

The task is to determine whether the given graph forms a valid tree.

A graph is considered a valid tree if:
1. It is fully connected
2. It contains no cycles

This problem is commonly solved using **Disjoint Set Union (DSU)** for efficient cycle detection and connectivity checking.

---

## Example 1

Input:

n = 5

edges =
[
 [0,1],
 [0,2],
 [0,3],
 [1,4]
]

Output:

true

Explanation:

- All nodes are connected
- No cycle exists

So the graph forms a valid tree.

---

## Example 2

Input:

n = 5

edges =
[
 [0,1],
 [1,2],
 [2,3],
 [1,3],
 [1,4]
]

Output:

false

Explanation:

- Edge `[1,3]` creates a cycle
- A valid tree cannot contain cycles

So the graph is not a valid tree.

---

## Approach

A valid tree must satisfy two conditions:

### 1. No Cycles

While processing edges:
- if two nodes already belong to the same component,
  adding another edge creates a cycle

DSU helps detect this efficiently.

---

### 2. Exactly `n - 1` Edges

A tree with `n` nodes must contain exactly:

n - 1 edges

Why?

- Fewer edges → graph becomes disconnected
- More edges → cycle must exist

This condition is one of the fastest sanity checks in graph problems and saves people from writing unnecessary DFS rituals at midnight.

---

## Complexity Analysis

### Time Complexity

O(n * α(n))

Where:
- `n` = number of edges
- `α(n)` = inverse Ackermann function

In practice, DSU operations are nearly constant time.

Effective complexity:

O(n)

---

### Space Complexity

O(n)

Used for:
- parent array
- rank/size array

---

## Constraints

- `1 <= n <= 100`
- `0 <= edges.length <= n * (n - 1) / 2`
- No duplicate edges
- Graph is undirected

---

## Key Concepts

- Disjoint Set Union (DSU)
- Cycle Detection
- Graph Connectivity
- Union by Rank
- Path Compression
- Tree Properties

A very important foundational graph problem. Half of graph interviews are basically different ways of asking whether something secretly contains a cycle while pretending to be sophisticated about it.
```
