<h2>Search Insert Position</h2>

<p>
The problem requires finding the index of a target element in a sorted array. If the target is not present, we must return the position where it should be inserted to maintain the sorted order.
</p>

<p>
Since the array is already sorted, binary search is the most efficient approach. Binary search repeatedly divides the search space into two halves, reducing the number of comparisons.
</p>

<p>
We start with two pointers, low and high. In each iteration, we calculate the middle index using mid = low + (high - low) / 2.
</p>

<p>
If nums[mid] is equal to the target, we return mid because the target has been found. If nums[mid] is smaller than the target, we move to the right half by setting low = mid + 1. Otherwise, we move to the left half by setting high = mid - 1.
</p>

<p>
When the loop ends, the low pointer represents the correct position where the target should be inserted. This works for all cases, including inserting at the beginning, middle, or end of the array.
</p>

<p>
<b>Approach:</b> Binary Search<br>
<b>Time Complexity:</b> O(log n)<br>
<b>Space Complexity:</b> O(1)
</p>

<h2><a href="https://leetcode.com/problems/search-insert-position">35. Search Insert Position</a></h2><h3>Easy</h3><hr><p>Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.</p>

<p>You must&nbsp;write an algorithm with&nbsp;<code>O(log n)</code> runtime complexity.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,5,6], target = 5
<strong>Output:</strong> 2
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,5,6], target = 2
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,3,5,6], target = 7
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>-10<sup>4</sup> &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
	<li><code>nums</code> contains <strong>distinct</strong> values sorted in <strong>ascending</strong> order.</li>
	<li><code>-10<sup>4</sup> &lt;= target &lt;= 10<sup>4</sup></code></li>
</ul>
