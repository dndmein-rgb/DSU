# Name

[Number of Connected Components in an Undirected Graph](https://neetcode.io/problems/count-connected-components)

File: `number-of-connected-components-in-an-undirected-graph.cpp`

# README

```md
# Number of Connected Components in an Undirected Graph

## Description

You are given:
- `n` nodes labeled from `0` to `n - 1`
- a list of undirected edges

The task is to return the total number of connected components in the graph.

A connected component is a group of nodes where every node is reachable from every other node in that group.

This problem is commonly solved using **Disjoint Set Union (DSU)** by grouping connected nodes into the same component.

---

## Example 1

Input:

n = 5

edges =
[
 [0,1],
 [1,2],
 [3,4]
]

Output:

2

Explanation:

Connected components are:
- `[0,1,2]`
- `[3,4]`

So total connected components = `2`.

---

## Example 2

Input:

n = 5

edges =
[
 [0,1],
 [1,2],
 [2,3],
 [3,4]
]

Output:

1

Explanation:

All nodes are connected together.

So only one connected component exists.

---

## Approach

### Main Idea

Initially:
- every node belongs to its own component

For every edge:
- union both nodes
- merge their connected components together

At the end:
- count how many unique parents remain

That count represents the number of connected components.

---

## Step-by-Step

### 1. Initialize DSU

Each node starts as its own parent.

Initially:

- `n` nodes
- `n` components

---

### 2. Process Edges

For every edge:
- if nodes belong to different parents:
  - union them
  - reduce component count

---

### 3. Return Final Count

After processing all edges:
- remaining unique components = answer

Simple idea. Extremely important. Entire distributed systems basically revolve around figuring out who belongs to which group while pretending it’s more glamorous than this.

---

## Complexity Analysis

### Time Complexity

O(E * α(N))

Where:
- `E` = number of edges
- `N` = number of nodes
- `α(N)` = inverse Ackermann function

DSU operations are nearly constant time.

Effective complexity:

O(E)

---

### Space Complexity

O(N)

Used for:
- parent array
- rank/size array

---

## Constraints

- `1 <= n <= 2000`
- `1 <= edges.length <= 5000`
- `edges[i].length == 2`
- `0 <= ai, bi < n`
- `ai != bi`
- No repeated edges

---

## Key Concepts

- Disjoint Set Union (DSU)
- Connected Components
- Graph Connectivity
- Union by Rank
- Path Compression

This is one of the core DSU problems because it teaches the foundational idea:

"Every union reduces the number of disconnected groups."

Tiny sentence. Massive algorithmic importance. Kind of like how one wrong semicolon can ruin an entire evening.
```
