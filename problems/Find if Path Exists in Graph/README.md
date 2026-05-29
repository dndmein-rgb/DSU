# Name

[1971. Find if Path Exists in Graph](https://leetcode.com/problems/find-if-path-exists-in-graph/)

File: `1971-find-if-path-exists-in-graph.cpp`

# README

```md
# 1971. Find if Path Exists in Graph

## Description

You are given:
- `n` vertices labeled from `0` to `n - 1`
- a list of undirected edges
- a source node
- a destination node

The task is to determine whether there exists a valid path between the source and destination.

This problem can be solved efficiently using **Disjoint Set Union (DSU)** by grouping connected nodes into the same component.

---

## Example 1

Input:

n = 3

edges =
[
 [0,1],
 [1,2],
 [2,0]
]

source = 0

destination = 2

Output:

true

Explanation:

There are multiple paths from `0` to `2`:
- `0 → 1 → 2`
- `0 → 2`

So a valid path exists.

---

## Example 2

Input:

n = 6

edges =
[
 [0,1],
 [0,2],
 [3,5],
 [5,4],
 [4,3]
]

source = 0

destination = 5

Output:

false

Explanation:

- Nodes `0,1,2` belong to one connected component.
- Nodes `3,4,5` belong to another component.

Since source and destination are in different groups, no valid path exists.

---

## Approach

### Main Idea

If two nodes belong to the same connected component, then a path exists between them.

Using DSU:
- connect all edges
- check whether source and destination have the same parent

---

### Step-by-Step

### 1. Initialize DSU

Each node initially belongs to its own component.

---

### 2. Process All Edges

For every edge:
- union both vertices
- this merges connected components together

---

### 3. Check Connectivity

After processing:
- if source and destination share the same ultimate parent:
  
  path exists

- otherwise:
  
  no path exists

Very clean problem. No tricks. Just connectivity. Rare moment where graph questions choose peace instead of psychological warfare.

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

- `1 <= n <= 2 * 10^5`
- `0 <= edges.length <= 2 * 10^5`
- `edges[i].length == 2`
- `0 <= ui, vi < n`
- `ui != vi`
- `0 <= source, destination < n`
- No duplicate edges
- No self edges

---

## Key Concepts

- Disjoint Set Union (DSU)
- Graph Connectivity
- Connected Components
- Union by Rank
- Path Compression

This is one of the cleanest DSU introduction problems because it directly teaches the core idea:

"If two nodes belong to the same parent, they are connected."

Simple concept. Ridiculously powerful. Entire networking systems, social graphs, and distributed infrastructures basically survive on this idea while humans keep forgetting passwords every six minutes.
```
