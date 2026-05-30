# Name

[947. Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/)

File: `0947-most-stones-removed-with-same-row-or-column.cpp`

# README

```md
# 947. Most Stones Removed with Same Row or Column

## Description

You are given `n` stones placed on a 2D plane.

A stone can be removed if there exists another stone in:
- the same row, or
- the same column

The goal is to remove the maximum number of stones.

This problem is commonly solved using **Disjoint Set Union (DSU)** by treating stones that share a row or column as part of the same connected component.

---

## Example 1

Input:

stones =
[
 [0,0],
 [0,1],
 [1,0],
 [1,2],
 [2,1],
 [2,2]
]

Output:

5

Explanation:

All stones belong to a single connected component.

In every connected component:
- one stone must remain
- all other stones can be removed

Total stones = 6

Remaining stones = 1

Maximum removable stones = 5

---

## Example 2

Input:

stones =
[
 [0,0],
 [0,2],
 [1,1],
 [2,0],
 [2,2]
]

Output:

3

Explanation:

There are two connected components.

Total stones = 5

Components = 2

Maximum removable stones = 5 - 2 = 3

---

## Example 3

Input:

stones =
[
 [0,0]
]

Output:

0

Explanation:

Only one stone exists.

No stone can be removed.

---

## Approach

### Key Observation

A stone can be removed if another stone exists in the same connected group.

Eventually:

- Every connected component must keep exactly one stone.
- Every other stone inside that component can be removed.

Therefore:

Maximum Stones Removed =
Total Stones - Number of Connected Components

---

### DSU Idea

Treat every stone as a node.

For every pair of stones:

- If they share the same row
- Or they share the same column

Union them into the same component.

After processing all stones:

- Count the number of unique parents
- Each parent represents one connected component

Answer:

Total Stones - Components

---

## Why Does This Work?

Suppose a component contains:

5 stones

You can repeatedly remove stones while maintaining at least one stone connected to the group.

Eventually:

- 4 stones are removed
- 1 stone remains

This holds for every connected component.

So:

Removable Stones =
(Size of Component - 1)

Summing across all components gives:

Total Stones - Number of Components

A surprisingly elegant result hiding behind what initially looks like a weird stone-removal puzzle.

---

## Complexity Analysis

### Time Complexity

O(N² × α(N))

Where:

- `N` = number of stones
- Every pair of stones is checked
- DSU operations are nearly constant time

Effective complexity:

O(N²)

---

### Space Complexity

O(N)

Used for:

- parent array
- rank/size array

---

## Constraints

- `1 <= stones.length <= 1000`
- `0 <= xi, yi <= 10^4`
- No two stones occupy the same position

---

## Key Concepts

- Disjoint Set Union (DSU)
- Connected Components
- Union by Rank
- Path Compression
- Graph Connectivity

This is one of the most important DSU pattern problems because it teaches a powerful transformation:

"Don't think about removing items. Think about counting connected components."

Many hard graph problems become dramatically simpler once you stop focusing on the operations and start focusing on the structure underneath them.
```
