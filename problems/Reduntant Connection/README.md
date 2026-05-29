# Name

[684. Redundant Connection](https://leetcode.com/problems/redundant-connection/)

File: `0684-redundant-connection.cpp`

# README

```md
# 684. Redundant Connection

## Description

You are given a graph that started as a tree with `n` nodes.

A tree:
- is fully connected
- contains no cycles

One extra edge is added to the graph, creating exactly one cycle.

The task is to return the edge that can be removed so the graph becomes a tree again.

This problem is commonly solved using **Disjoint Set Union (DSU)** to detect cycles efficiently.

---

## Example

Input:

edges =
[
 [1,2],
 [1,3],
 [2,3]
]

Output:

[2,3]

Explanation:

- Adding edge `[1,2]` connects two separate nodes.
- Adding edge `[1,3]` also connects different components.
- Adding edge `[2,3]` creates a cycle because both nodes are already indirectly connected.

So `[2,3]` is the redundant connection.

---

## Approach

The main idea is:

- If two nodes already belong to the same component,
  adding another edge between them creates a cycle.
- DSU helps quickly determine whether two nodes already share the same parent.

For every edge:
1. Find the parent of both nodes.
2. If parents are same:
   - cycle detected
   - return current edge
3. Otherwise:
   - union both nodes into the same component

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

- `n == edges.length`
- `3 <= n <= 1000`
- `edges[i].length == 2`
- `1 <= ai < bi <= edges.length`
- `ai != bi`
- There are no repeated edges
- Graph is connected

---

## Key Concepts

- Disjoint Set Union (DSU)
- Cycle Detection
- Union by Rank
- Path Compression
- Graph Connectivity

This is one of the most important DSU cycle-detection problems. Basically the algorithmic version of noticing one extra friendship in a group chat is about to create absolute social chaos.
```
