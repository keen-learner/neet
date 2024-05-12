# Algo Problem Solutions (Count = 31/150(112))

# Index
  01. [Arrays & Hashing (Count = 8/9)](#01-arrays--hashing) 
  02. [Partition, 2 Pointers (Count = 5/5)](#02-partition-2-pointers) 
  03. [Binary Search (Count = 5/7)](#03-binary-search) 
  04. [Sliding Window (Count = 6/6)](#04-sliding-window) 
  05. [Intervals (Count = 5/6)](#05-intervals) 
  06. [Stack (Count = 5/7)](#06-stack) 
  07. [LinkedList (Count = 11/11)](#07-linkedlist) 
  08. [Trees (Count = 14/15)](#08-trees) 
  09. [Tries (Count = 2/3)](#09-tries) 
  10. [Backtracking (Count = 8/9)](#10-backtracking) 
  11. [Heap, Priority Queue (Count = 3/7)](#11-heap-priority-queue) 
  12. [Graphs (Count = 9/13)](#12-graphs)
  13. [1d Dynamic Programming (Count = 10/12)](#13-1d-dynamic-programming) 
  14. [Greedy (Count = 3/8)](#14-greedy) 
  15. [Advanced Graphs (Count = 6)](#15-advanced-graphs)
  16. [2d Dynamic Programming (Count = 6/11)](#16-2d-dynamic-programming) 
  17. [Bit Manipulation (Count = 6/7)](#17-bit-manipulation) 
  18. [Math & Geometry (Count = 6/8)](#18-math--geometry) 


## 01. Arrays & Hashing

| SNo | Problem# | Problem                                                                                     | Solution | Notes                    | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------------------------- | -------- | ------------------------ | ---------------- |
| 01  | 217      | [Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)        | [C++](./c++/217-ContainsDuplicate.cpp)         | ⭐⭐⭐<br>sorting, map, set | 219, 220, 2357   |
| 02  | 242      | [Valid Anagram](https://leetcode.com/problems/valid-anagram/)        | [C++](./c++/242-ValidAnagram.cpp)         | ⭐⭐⭐<br>sorting, map      | 49,266,438       |
| 03  | 1        | [Two Sum](https://leetcode.com/problems/two-sum/)                                           |  [C++](./c++/1-TwoSum.cpp)        |                          |                  |
| 04  | 49       | [Group Anagrams](https://leetcode.com/problems/group-anagrams/)                             | [C++](./c++/49-GroupAnagrams.cpp) |                          |                  |
| 05  | 347      | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/)           | [C++](./c++/347-TopKFrequentElements.cpp) |                          |                  |
| 06  | 238      | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | [C++](./c++/238-ProductOfArrayExceptSelf.cpp) |   ⭐⭐⭐     | 42, 152, 265, 2163, 2906 |
| 07  | 36       | [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)                                 | [C++](./c++/36-ValidSudoku.cpp)   |                          |                  |
| 08  | 271      | [Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/)       |          | Paid                     |                  |
| 09  | 128      | [Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) | [C++](./c++/128-LongestConsecutiveSequence.cpp)  |  | 298, 300, 2177, 2274, 2414, 3020 |
 
<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 02. Partition, 2 Pointers

| SNo | Problem# | Problem                                                                                             | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 125      | [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)          | [C++](./c++/125-ValidPalindrome.cpp)         |       |                  |
| 02  | 167      | [Two Sum II Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) | [C++](./c++/167-TwoSumIIInputArrayIsSorted.cpp)    |       |                  |
| 03  | 15       | [3Sum](https://leetcode.com/problems/3sum/)    | [C++](./c++/15-3Sum.cpp)         |       |                  |
| 04  | 11       | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/)  | [C++](./c++/11-ContainerWithMostWater.cpp) |       |                  |
| 05  | 42       | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | [C++](./c++/42-TrappingRainWater.cpp)         |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 03. Binary Search

| SNo | Problem# | Problem                                                                                                     | Solution | Notes  | Similar Problems |
| --- | -------- | ----------------------------------------------------------------------------------------------------------- | -------- | ------ | ---------------- |
| 01  | 704      | [Binary Search](https://leetcode.com/problems/binary-search/)                                               | [C++](./c++/704-BinarySearch.cpp)  |        |                  |
| 02  | 74       | [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)                                     | [C++](./c++/74-SearchA2dMatrix.cpp)   |        |                  |
| 03  | 875      | [Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/)                                   |          |        |                  |
| 04  | 153      | [Find Minimum In Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | [C++](./c++/153-FindMinimumInRotatedSortedArray.cpp) |        |                  |
| 05  | 33       | [Search In Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)             | [C++](./c++/33-SearchInRotatedSortedArray.cpp) |        |                  |
| 06  | 981      | [Time Based Key Value Store](https://leetcode.com/problems/time-based-key-value-store/)                     |          |        |                  |
| 07  | 4        | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)                   | [C++](./c++/4-MedianOfTwoSortedArrays.cpp)| 💥💥💥 |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 04. Sliding Window

| SNo | Problem# | Problem                                                                                                                         | Solution | Notes | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 121      | [Best Time to Buy And Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)                               | [C++](./c++/121-BestTimeToBuyAndSellStock.cpp)         |       | 53,122,123,188,309,2012,2016,2291 |
| 02  | 3        | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./c++/3-LongestSubstringWithoutRepeatingCharacters.cpp)     |       | 159,340,992,1695,2067,2260,2401,2405,2799,2981, 2982 |
| 03  | 424      | [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)  | [C++](./c++/424-LongestRepeatingCharacterReplacement.cpp) |       |                  |
| 04  | 567      | [Permutation In String](https://leetcode.com/problems/permutation-in-string/)     | [C++](./c++/567-PermutationInString.cpp) |       |                  |
| 05  | 76       | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)   | [C++](./c++/76-MinimumWindowSubstring.cpp)  |       |                  |
| 06  | 239      | [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/)  | [C++](./c++/239-SlidingWindowMaximum.cpp)  |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 05. Intervals

| SNo | Problem# | Problem                                                                                                         | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 57       | [Insert Interval](https://leetcode.com/problems/insert-interval/)  | [C++](./c++/57-InsertInterval.cpp)  |       |              |
| 02  | 56       | [Merge Intervals](https://leetcode.com/problems/merge-intervals/)  | [C++](./c++/56-MergeIntervals.cpp) |       |                  |
| 03  | 435      | [Non Overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)    | [C++](./c++/435-NonOverlappingIntervals.cpp)         |       |                  |
| 04  | 252      | [Meeting Rooms](https://leetcode.com/problems/meeting-rooms/)  | [C++](./c++/252-MeetingRooms.cpp) | Paid  |                  |
| 05  | 253      | [Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/)     | [C++](./c++/253-MeetingRoomsII.cpp)   | Paid  |                  |
| 06  | 1851     | [Minimum Interval to Include Each Query](https://leetcode.com/problems/minimum-interval-to-include-each-query/) |          |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 06. Stack

| SNo | Problem# | Problem                                                                                             | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 20       | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)                               | [C++](./c++/20-ValidParentheses.cpp) |       |                  |
| 02  | 155      | [Min Stack](https://leetcode.com/problems/min-stack/)                                               | [C++](./c++/155-MinStack.cpp)   |       |                  |
| 03  | 150      | [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) | [C++](./c++/150-EvaluateReversePolishNotation.cpp) |       |                  |
| 04  | 22       | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)                         | [C++](./c++/22-GenerateParentheses.cpp) |       |                  |
| 05  | 739      | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/)                             |          |       |                  |
| 06  | 853      | [Car Fleet](https://leetcode.com/problems/car-fleet/)                                               |          |       |                  |
| 07  | 84       | [Largest Rectangle In Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/)     | [C++](./c++/84-LargestRectangleInHistogram.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 07. LinkedList

| SNo | Problem# | Problem                                                                                             | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 206      | [Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/)      | [C++](./c++/206-ReverseLinkedList.cpp)         |       |                  |
| 02  | 21       | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)    | [C++](./c++/21-MergeTwoSortedLists.cpp) |       |                  |
| 03  | 143      | [Reorder List](https://leetcode.com/problems/reorder-list/)     | [C++](./c++/143-ReorderList.cpp)  |       |                  |
| 04  | 19       | [Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) | [C++](./c++/19-RemoveNthNodeFromEndOfList.cpp) |       |                  |
| 05  | 138      | [Copy List With Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/)       | [C++](./c++/138-CopyListWithRandomPointer.cpp) |       |                  |
| 06  | 2        | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)    | [C++](./c++/2-AddTwoNumbers.cpp)  |       |                  |
| 07  | 141      | [Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/)       |[C++](./c++/141-LinkedListCycle.cpp)      |       |                  |
| 08  | 287      | [Find The Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number/)     | [C++](./c++/287-FindTheDuplicateNumber.cpp) |       |                  |
| 09  | 146      | [LRU Cache](https://leetcode.com/problems/lru-cache/)    | [C++](./c++/146-LRUCache.cpp) |       |                  |
| 10  | 23       | [Merge K Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)   | [C++](./c++/23-MergeKSortedLists.cpp)  |       |                  |
| 11  | 25       | [Reverse Nodes In K Group](https://leetcode.com/problems/reverse-nodes-in-k-group/)     | [C++](./c++/25-ReverseNodesInKGroup.cpp)  |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 08. Trees

| SNo | Problem# | Problem                                                                                             | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 226      | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)      | [C++](./c++/226-InvertBinaryTree.cpp) | 💥💥💥<br> see stack approach  |  2415  |
| 02  | 104      | [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)    |[C++](./c++/104-MaximumDepthOfBinaryTree.cpp)  |       |                  |
| 03  | 543      | [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)  | [C++](./c++/543-DiameterOfBinaryTree.cpp) |       |                  |
| 04  | 110      | [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)    | [C++](./c++/110-BalancedBinaryTree.cpp) |       |                  |
| 05  | 100      | [Same Tree](https://leetcode.com/problems/same-tree/)    | [C++](./c++/100-SameTree.cpp) | ⭐⭐⭐ | 314,1644,1676    |
| 06  | 572      | [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)  | [C++](./c++/572-SubtreeOfAnotherTree.cpp)|       |                  |
| 07  | 235      | [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/) | [C++](./c++/235-LowestCommonAncestorOfABinarySearchTree.cpp) |       |                  |
| 08  | 102      | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | [C++](./c++/102-BinaryTreeLevelOrderTraversal.cpp)       |                  |
| 09  | 199      | [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)  |[C++](./c++/199-BinaryTreeRightSideView.cpp)  |   💥💥💥<br> see dfs approach    | 116, 545 |
| 10  | 1448     | [Count Good Nodes In Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)                                                     |  |       |                  |
| 11  | 98       | [Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)    | [C++](./c++/98-ValidateBinarySearchTree.cpp) |       |                  |
| 12  | 230      | [Kth Smallest Element In a Bst](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)   | [C++](./c++/230-KthSmallestElementInABST.cpp)  |       |                  |
| 13  | 105      | [Construct Binary Tree From Preorder And Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | [C++](./c++/105-ConstructBinaryTreeFromPreorderAndInorderTraversal.cpp) |       |                  |
| 14  | 124      | [Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)   |[C++](./c++/124-BinaryTreeMaximumPathSum.cpp) |       |                  |
| 15  | 297      | [Serialize And Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)  | [C++](./c++/297-SerializeAndDeserializeBinaryTree.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 09. Tries

| SNo | Problem# | Problem                                                                                                                 | Solution | Notes | Similar Problems |
| --- | -------- | ----------------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 208      | [Implement Trie Prefix Tree](https://leetcode.com/problems/implement-trie-prefix-tree/)                                 | [C++](./c++/208-ImplementTrie.cpp) |       |                  |
| 02  | 211      | [Design Add And Search Words Data Structure](https://leetcode.com/problems/design-add-and-search-words-data-structure/) | [C++](./c++/211-DesignAddAndSearchWordsDataStructure.cpp) |       |                  |
| 03  | 212      | [Word Search II](https://leetcode.com/problems/word-search-ii/)                                                         |          |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 10. Backtracking

| SNo | Problem# | Problem                                                                                                       | Solution | Notes | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 78       | [Subsets](https://leetcode.com/problems/subsets/)                                                             | [C++](./c++/78-Subsets.cpp)   |       |                  |
| 02  | 39       | [Combination Sum](https://leetcode.com/problems/combination-sum/)                                             | [C++](./c++/39-CombinationSum.cpp)         |       |                  |
| 03  | 46       | [Permutations](https://leetcode.com/problems/permutations/)                                                   | [C++](./c++/46-Permutations.cpp)         |       |                  |
| 04  | 90       | [Subsets II](https://leetcode.com/problems/subsets-ii/)                                                       | [C++](./c++/90-SubsetsII.cpp)   |       |                  |
| 05  | 40       | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/)                                       | [C++](./c++/40-CombinationSumII.cpp)  |       |                  |
| 06  | 79       | [Word Search](https://leetcode.com/problems/word-search/)                                                     | [C++](./c++/79-WordSearch.cpp) |       |                  |
| 07  | 131      | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/)                             | [C++](./c++/131-PalindromePartitioning.cpp)   |       |                  |
| 08  | 17       | [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) | [C++](./c++/17-LetterCombinationsOfAPhoneNumber.cpp)         |       |                  |
| 09  | 51       | [N Queens](https://leetcode.com/problems/n-queens/)                                                           |          |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 11. Heap, Priority Queue

| SNo | Problem# | Problem                                                                                           | Solution | Notes | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 703      | [Kth Largest Element In a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) |          |       |                  |
| 02  | 1046     | [Last Stone Weight](https://leetcode.com/problems/last-stone-weight/)                             |          |       |                  |
| 03  | 973      | [K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)           |          |       |                  |
| 04  | 215      | [Kth Largest Element In An Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | [C++](./c++/215-KthLargestElementInAnArray.cpp)  |       |                  |
| 05  | 621      | [Task Scheduler](https://leetcode.com/problems/task-scheduler/)                                   | [C++](./c++/621-TaskScheduler.cpp)  |       |                  |
| 06  | 355      | [Design Twitter](https://leetcode.com/problems/design-twitter/)                                   |          |       |                  |
| 07  | 295      | [Find Median From Data Stream](https://leetcode.com/problems/find-median-from-data-stream/)       | [C++](./c++/295-FindMedianFromDataStream.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 12. Graphs

| SNo | Problem# | Problem                                                                                                                                       | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 200      | [Number of Islands](https://leetcode.com/problems/number-of-islands/)                                                                         | [C++](./c++/200-NumberOfIslands.cpp) |       |                  |
| 02  | 133      | [Clone Graph](https://leetcode.com/problems/clone-graph/)                                                                                     | [C++](./c++/133-CloneGraph.cpp) |       |                  |
| 03  | 695      | [Max Area of Island](https://leetcode.com/problems/max-area-of-island/)                                                                       | [C++](./c++/695-MaxAreaOfIsland.cpp) |       |                  |
| 04  | 417      | [Pacific Atlantic Water Flow](https://leetcode.com/problems/pacific-atlantic-water-flow/)                                                     |          |       |                  |
| 05  | 130      | [Surrounded Regions](https://leetcode.com/problems/surrounded-regions/)                                                                       | [C++](./c++/130-SurroundedRegions.cpp)  |       |                  |
| 06  | 994      | [Rotting Oranges](https://leetcode.com/problems/rotting-oranges/)                                                                             |          |       |                  |
| 07  | 286      | [Walls And Gates](https://leetcode.com/problems/walls-and-gates/)                                                                             | [C++](./c++/286-WallsAndGates.cpp) | Paid  |                  |
| 08  | 207      | [Course Schedule](https://leetcode.com/problems/course-schedule/)                                                                             | [C++](./c++/207-CourseSchedule.cpp) |       |                  |
| 09  | 210      | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/)                                                                       | [C++](./c++/210-CourseScheduleII.cpp) |       |                  |
| 10  | 684      | [Redundant Connection](https://leetcode.com/problems/redundant-connection/)                                                                   |          |       |                  |
| 11  | 323      | [Number of Connected Components In An Undirected Graph](https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/) |          | Paid  |                  |
| 12  | 261      | [Graph Valid Tree](https://leetcode.com/problems/graph-valid-tree/)                                                                           | [C++](./c++/261-GraphValidTree.cpp)  | Paid  |                  |
| 13  | 127      | [Word Ladder](https://leetcode.com/problems/word-ladder/)                                                                                     | [C++](./c++/127-WordLadder.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 13. 1D Dynamic Programming

| SNo | Problem# | Problem                                                                                         | Solution | Notes | Similar Problems |
| --- | -------- | ----------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 70       | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/)                               | [C++](./c++/70-ClimbingStairs.cpp) |       | 746,509,1137,2244,2320,2400,2466,2498 |
| 02  | 746      | [Min Cost Climbing Stairs](https://leetcode.com/problems/min-cost-climbing-stairs/)             |          |       |                  |
| 03  | 198      | [House Robber](https://leetcode.com/problems/house-robber/)                                     | [C++](./c++/198-HouseRobber.cpp)        |       |                  |
| 04  | 213      | [House Robber II](https://leetcode.com/problems/house-robber-ii/)                               |          |       |                  |
| 05  | 5        | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)   | [C++](./c++/5-LongestPalindromicSubstring.cpp) |       |                  |
| 06  | 647      | [Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/)                 | [C++](./c++/647-PalindromicSubstrings.cpp) |       |                  |
| 07  | 91       | [Decode Ways](https://leetcode.com/problems/decode-ways/)                                       | [C++](./c++/91-DecodeWays.cpp) |       |                  |
| 08  | 322      | [Coin Change](https://leetcode.com/problems/coin-change/)                                       | [C++](./c++/322-CoinChange.cpp) |       |                  |
| 09  | 152      | [Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/)             | [C++](./c++/152-MaximumProductSubarray.cpp) |       |                  |
| 10  | 139      | [Word Break](https://leetcode.com/problems/word-break/)                                         | [C++](./c++/139-WordBreak.cpp) |       |                  |
| 11  | 300      | [Longest Increasing Subsequence](https://leetcode.com/problems/longest-increasing-subsequence/) | [C++](./c++/300-LongestIncreasingSubsequence.cpp) |       |                  |
| 12  | 416      | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/)         | [C++](./c++/416-PartitionEqualSubsetSum.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 14. Greedy

| SNo | Problem# | Problem                                                                                                       | Solution | Notes | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 53       | [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)                                           | [C++](./c++/53-MaximumSubarray.cpp) |       |                  |
| 02  | 55       | [Jump Game](https://leetcode.com/problems/jump-game/)                                                         | [C++](./c++/55-JumpGame.cpp) |       |                  |
| 03  | 45       | [Jump Game II](https://leetcode.com/problems/jump-game-ii/)                                                   |          |       |                  |
| 04  | 134      | [Gas Station](https://leetcode.com/problems/gas-station/)                                                     | [C++](./c++/134-GasStation.cpp) |       |                  |
| 05  | 846      | [Hand of Straights](https://leetcode.com/problems/hand-of-straights/)                                         |          |       |                  |
| 06  | 1899     | [Merge Triplets to Form Target Triplet](https://leetcode.com/problems/merge-triplets-to-form-target-triplet/) |          |       |                  |
| 07  | 763      | [Partition Labels](https://leetcode.com/problems/partition-labels/)                                           |          |       |                  |
| 08  | 678      | [Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/)                           |          |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 15. Advanced Graphs

| SNo | Problem# | Problem                                                                                           | Solution | Notes | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 332      | [Reconstruct Itinerary](https://leetcode.com/problems/reconstruct-itinerary/)                     |          |       |                  |
| 02  | 1584     | [Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/)   |          |       |                  |
| 03  | 743      | [Network Delay Time](https://leetcode.com/problems/network-delay-time/)                           |          |       |                  |
| 04  | 778      | [Swim In Rising Water](https://leetcode.com/problems/swim-in-rising-water/)                       |          |       |                  |
| 05  | 269      | [Alien Dictionary](https://leetcode.com/problems/alien-dictionary/)                               |          | Paid  |                  |
| 06  | 787      | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) |          |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 16. 2D Dynamic Programming

| SNo | Problem# | Problem                                                                                                                       | Solution | Notes | Similar Problems |
| --- | -------- | ----------------------------------------------------------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 62       | [Unique Paths](https://leetcode.com/problems/unique-paths/)                                                                   | [C++](./c++/62-UniquePaths.cpp) |       |                  |
| 02  | 1143     | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/)                                       |          |       |                  |
| 03  | 309      | [Best Time to Buy And Sell Stock With Cooldown](https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/) | [C++](./c++/309-BestTimeToBuyAndSellStockWithCooldown.cpp) |       |                  |
| 04  | 518      | [Coin Change II](https://leetcode.com/problems/coin-change-ii/)                                                               |          |       |                  |
| 05  | 494      | [Target Sum](https://leetcode.com/problems/target-sum/)                                                                       | [C++](./c++/494-TargetSum.cpp) |       |                  |
| 06  | 97       | [Interleaving String](https://leetcode.com/problems/interleaving-string/)                                                     |          |       |                  |
| 07  | 329      | [Longest Increasing Path In a Matrix](https://leetcode.com/problems/longest-increasing-path-in-a-matrix/)                     | [C++](./c++/329-LongestIncreasingPathInAMatrix.cpp) |       |                  |
| 08  | 115      | [Distinct Subsequences](https://leetcode.com/problems/distinct-subsequences/)                                                 |          |       |                  |
| 09  | 72       | [Edit Distance](https://leetcode.com/problems/edit-distance/)                                                                 | [C++](./c++/72-EditDistance.cpp)  |       |                  |
| 10  | 312      | [Burst Balloons](https://leetcode.com/problems/burst-balloons/)                                                               |          |       |                  |
| 11  | 10       | [Regular Expression Matching](https://leetcode.com/problems/regular-expression-matching/)                                     | [C++](./c++/10-RegularExpressionMatching.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 17. Bit Manipulation

| SNo | Problem# | Problem                                                                   | Solution | Notes | Similar Problems |
| --- | -------- | ------------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 136      | [Single Number](https://leetcode.com/problems/single-number/)             | [C++](./c++/136-SingleNumber.cpp) |       | 137,260,268,287,389 |
| 02  | 191      | [Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)       | [C++](./c++/191-NumberOf1Bits.cpp) |       | 190, 231, 401, 461, 693, 762 |
| 03  | 338      | [Counting Bits](https://leetcode.com/problems/counting-bits/)             | [C++](./c++/338-CountingBits.cpp) |       | 191, 2859, 2917 |
| 04  | 190      | [Reverse Bits](https://leetcode.com/problems/reverse-bits/)               | [C++](./c++/190-ReverseBits.cpp) |       | 7, 191, 2119 |
| 05  | 268      | [Missing Number](https://leetcode.com/problems/missing-number/)           | [C++](./c++/268-MissingNumber.cpp) |       | 41, 136, 287, 765, 1980 |
| 06  | 371      | [Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers/) | [C++](./c++/371-SumOfTwoIntegers.cpp) |       |                  |
| 07  | 7        | [Reverse Integer](https://leetcode.com/problems/reverse-integer/)         | [C++](./c++/7-ReverseInteger.cpp) |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>

## 18. Math & Geometry

| SNo | Problem# | Problem                                                               | Solution | Notes | Similar Problems |
| --- | -------- | --------------------------------------------------------------------- | -------- | ----- | ---------------- |
| 01  | 48       | [Rotate Image](https://leetcode.com/problems/rotate-image/)           | [C++](./c++/48-RotateImage.cpp) |       |                  |
| 02  | 54       | [Spiral Matrix](https://leetcode.com/problems/spiral-matrix/)         | [C++](./c++/54-SpiralMatrix.cpp) |       |                  |
| 03  | 73       | [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) | [C++](./c++/73-SetMatrixZeroes.cpp) |       | 289, 2123, 2125, 2128 |
| 04  | 202      | [Happy Number](https://leetcode.com/problems/happy-number/)           | [C++](./c++/202-HappyNumber.cpp)     |       |                  |
| 05  | 66       | [Plus One](https://leetcode.com/problems/plus-one/)                   | [C++](./c++/66-PlusOne.cpp) |       |                  |
| 06  | 50       | [Pow(x, n)](https://leetcode.com/problems/powx-n/)                    |          |       |                  |
| 07  | 43       | [Multiply Strings](https://leetcode.com/problems/multiply-strings/)   | [C++](./c++/43-MultiplyStrings.cpp) |       |                  |
| 08  | 2013     | [Detect Squares](https://leetcode.com/problems/detect-squares/)       |          |       |                  |

<br/>
<div align="right">
    <b><a href="#index">⬆️ Back to Top</a></b>
</div>
<br/>