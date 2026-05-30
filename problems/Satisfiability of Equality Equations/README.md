# Name

[990. Satisfiability of Equality Equations](https://leetcode.com/problems/satisfiability-of-equality-equations/)

File: `0990-satisfiability-of-equality-equations.cpp`

# README

```md
# 990. Satisfiability of Equality Equations

## Description

You are given an array of equations involving lowercase variables.

Each equation is one of two forms:

- `a==b` → both variables must belong to the same group
- `a!=b` → both variables must belong to different groups

The task is to determine whether all equations can be satisfied simultaneously.

This problem is commonly solved using **Disjoint Set Union (DSU)** by grouping variables that must be equal.

---

## Example 1

Input:

equations =
[
 "a==b",
 "b==c",
 "a==c"
]

Output:

true

Explanation:

All equations are consistent.

- `a` and `b` belong to the same group
- `b` and `c` belong to the same group
- therefore `a` and `c` belong to the same group

No contradiction exists.

---

## Example 2

Input:

equations =
[
 "a==b",
 "b!=a"
]

Output:

false

Explanation:

- First equation requires `a` and `b` to be equal
- Second equation requires them to be different

Both conditions cannot be true simultaneously.

---

## Approach

### Main Idea

Process all equality equations first.

Why?

Because equalities create groups.

Once all equal variables are connected, we can verify whether any inequality violates those groups.

---

## Step-by-Step

### 1. Process All Equalities

For every equation:

`x==y`

- union both variables
- place them in the same component

After this step:
- every equality relationship has been established

---

### 2. Process All Inequalities

For every equation:

`x!=y`

Check whether:
- both variables belong to the same parent

If they do:
- contradiction found
- return false

Otherwise:
- inequality is valid

---

### 3. Return Result

If no contradiction exists after checking all inequalities:

return true

The entire problem boils down to:

"Build friendships first, then verify nobody demanded that two friends must also be enemies."

Humans somehow attempt this daily.

---

## Complexity Analysis

### Time Complexity

O(N × α(26))

Where:
- `N` = number of equations
- `α` = inverse Ackermann function

Since there are only 26 lowercase letters:

Effective complexity:

O(N)

---

### Space Complexity

O(26)

Used for:
- parent array
- rank/size array

Since the number of variables is fixed, space is constant.

---

## Constraints

- `1 <= equations.length <= 500`
- `equations[i].length == 4`
- `equations[i][0]` is a lowercase letter
- `equations[i][1]` is either `=` or `!`
- `equations[i][2]` is either `=` or `!`
- `equations[i][3]` is a lowercase letter

---

## Key Concepts

- Disjoint Set Union (DSU)
- Connected Components
- Equality Constraints
- Contradiction Detection
- Union by Rank
- Path Compression

This is one of the cleanest DSU applications because it teaches a powerful pattern:

First merge all relationships that must be true, then validate the relationships that must not be true.

That pattern appears surprisingly often in graph problems, databases, scheduling systems, and occasionally in family gatherings.
```
