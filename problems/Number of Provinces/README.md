# Name

[547. Number of Provinces](https://leetcode.com/problems/number-of-provinces/)

File: `0547-number-of-provinces.cpp`


# README

```md
# 547. Number of Provinces

## Description

There are `n` cities represented using an adjacency matrix `isConnected`.

- `isConnected[i][j] = 1` means city `i` and city `j` are directly connected.
- A province is a group of cities connected directly or indirectly.

The goal is to return the total number of provinces.

This problem can be solved efficiently using **Disjoint Set Union (DSU)** by grouping connected cities into the same component.

---

## Example

Input:

```cpp
isConnected = [
 [1,1,0],
 [1,1,0],
 [0,0,1]
]
```

Output:

```cpp
2
```

Explanation:

- City `0` and city `1` belong to the same province.
- City `2` is isolated in another province.

So total provinces = `2`.

---

## Complexity Analysis

### Time Complexity

```cpp
O(n² * α(n))
```

Where:
- `n²` comes from traversing the adjacency matrix
- `α(n)` is the inverse Ackermann function from DSU operations

In practice, this behaves almost like:

```cpp
O(n²)
```

---

### Space Complexity

```cpp
O(n)
```

Used for:
- parent array
- rank array

---

## Constraints

```cpp
1 <= n <= 200
n == isConnected.length
n == isConnected[i].length
isConnected[i][j] is 0 or 1
isConnected[i][i] == 1
isConnected[i][j] == isConnected[j][i]
```

---

## Key Concepts

- Graph Connected Components
- Disjoint Set Union (DSU)
- Path Compression
- Union by Rank

A very standard DSU problem. Basically the algorithmic equivalent of figuring out which people at a family wedding are secretly connected through six layers of gossip and WhatsApp forwards.
```
