<h2>Contains Duplicate</h2>

<p>
The problem requires checking whether any element appears more than once in the given array. If at least one duplicate element exists, the function should return true; otherwise, it should return false.
</p>

<p>
A simple approach is to compare every element with all other elements, but this would take O(n²) time, which is inefficient for large arrays.
</p>

<p>
The optimized approach uses a hash set. A set stores only unique elements and allows fast lookup operations.
</p>

<p>
We traverse the array one element at a time. For each element, we check whether it is already present in the set. If it is present, it means the element has appeared before, so we immediately return true. Otherwise, we insert the element into the set and continue processing the remaining elements.
</p>

<p>
If the traversal finishes without finding any repeated element, then all elements are distinct, and we return false.
</p>

<p>
This method is efficient because each insertion and lookup in the hash set takes approximately constant time on average.
</p>

<p>
<b>Approach:</b> Hash Set / Hashing<br>
<b>Time Complexity:</b> O(n)<br>
<b>Space Complexity:</b> O(n)
</p>


<h2><a href="https://leetcode.com/problems/contains-duplicate">217. Contains Duplicate</a></h2><h3>Easy</h3><hr><p>Given an integer array <code>nums</code>, return <code>true</code> if any value appears <strong>at least twice</strong> in the array, and return <code>false</code> if every element is distinct.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,1]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>

<p><strong>Explanation:</strong></p>

<p>The element 1 occurs at the indices 0 and 3.</p>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,2,3,4]</span></p>

<p><strong>Output:</strong> <span class="example-io">false</span></p>

<p><strong>Explanation:</strong></p>

<p>All elements are distinct.</p>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">nums = [1,1,1,3,3,4,3,2,4,2]</span></p>

<p><strong>Output:</strong> <span class="example-io">true</span></p>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-10<sup>9</sup> &lt;= nums[i] &lt;= 10<sup>9</sup></code></li>
</ul>
