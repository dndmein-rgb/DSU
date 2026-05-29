# Name

[721. Accounts Merge](https://leetcode.com/problems/accounts-merge/)

File: `0721-accounts-merge.cpp`

# README

```md
# 721. Accounts Merge

## Description

You are given a list of accounts where:

- The first element is the account holder's name
- Remaining elements are email addresses associated with that account

Two accounts belong to the same person if they share at least one common email.

The task is to merge all connected accounts and return:
- the user's name
- all unique emails in sorted order

Even if two accounts have the same name, they may belong to different people unless an email connects them.

This problem is commonly solved using **Disjoint Set Union (DSU)** to group connected accounts efficiently.

---

## Example

Input:

accounts =
[
 ["John","johnsmith@mail.com","john_newyork@mail.com"],
 ["John","johnsmith@mail.com","john00@mail.com"],
 ["Mary","mary@mail.com"],
 ["John","johnnybravo@mail.com"]
]

Output:

[
 ["John","john00@mail.com","john_newyork@mail.com","johnsmith@mail.com"],
 ["Mary","mary@mail.com"],
 ["John","johnnybravo@mail.com"]
]

Explanation:

- The first two John's share:
  
  johnsmith@mail.com

- So they belong to the same person and must be merged.
- Mary has no shared emails.
- johnnybravo@mail.com is isolated.

---

## Approach

### Main Idea

Treat each account index as a node.

If two accounts share an email:
- connect them using DSU

---

### Step-by-Step

### 1. Map Emails to Account Index

For every email:
- if email is seen first time → store its account index
- otherwise:
  - another account already owns this email
  - union both account indices

---

### 2. Build Connected Components

After all unions:
- accounts sharing emails belong to the same parent

---

### 3. Group Emails by Parent

For every email:
- find its ultimate parent
- store email under that parent

This forms merged accounts.

---

### 4. Sort Emails

Emails inside each merged account must be sorted lexicographically.

Because apparently humans cannot tolerate unsorted email lists. Civilization hangs by a thread.

---

## Complexity Analysis

Let:
- `N` = number of accounts
- `E` = total number of emails

### Time Complexity

O(E * α(N) + E log E)

Where:
- DSU operations are nearly constant
- sorting emails dominates final step

Effective complexity:

O(E log E)

---

### Space Complexity

O(E + N)

Used for:
- DSU arrays
- email mappings
- grouped email storage

---

## Constraints

- `1 <= accounts.length <= 1000`
- `2 <= accounts[i].length <= 10`
- `1 <= accounts[i][j].length <= 30`
- `accounts[i][0]` contains English letters
- Emails are valid strings

---

## Key Concepts

- Disjoint Set Union (DSU)
- Connected Components
- Graph Grouping
- Union by Rank
- Path Compression
- Hash Mapping

This is one of the most important DSU problems because it teaches indirect connectivity through shared attributes. Basically social networking logic disguised as email management.
```
