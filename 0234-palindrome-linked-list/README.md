<h2>Palindrome Linked List</h2>

<p>
A palindrome is a sequence that reads the same forward and backward. In this problem, we need to determine whether the values stored in a singly linked list form a palindrome.
</p>

<p>
A simple solution is to copy all node values into an array and then compare elements from the beginning and the end. However, this requires extra space.
</p>

<p>
The optimized approach works in O(n) time and O(1) extra space. First, we use two pointers called slow and fast to find the middle of the linked list. The slow pointer moves one step at a time, while the fast pointer moves two steps at a time. When the fast pointer reaches the end, the slow pointer will be at the middle.
</p>

<p>
Next, we reverse the second half of the linked list starting from the slow pointer. Reversing allows us to compare the first half and the second half directly, node by node.
</p>

<p>
We then traverse both halves simultaneously. If all corresponding node values are equal, the linked list is a palindrome. If any pair of values is different, the list is not a palindrome.
</p>

<p>
This approach is efficient because it traverses the list only a few times and uses only a constant amount of additional memory.
</p>

<p>
<b>Approach:</b> Fast and Slow Pointers + Reverse Second Half<br>
<b>Step 1:</b> Find the middle of the linked list<br>
<b>Step 2:</b> Reverse the second half<br>
<b>Step 3:</b> Compare both halves node by node<br>
<b>Time Complexity:</b> O(n)<br>
<b>Space Complexity:</b> O(1)
</p><h2><a href="https://leetcode.com/problems/palindrome-linked-list">234. Palindrome Linked List</a></h2><h3>Easy</h3><hr><p>Given the <code>head</code> of a singly linked list, return <code>true</code><em> if it is a </em><span data-keyword="palindrome-sequence"><em>palindrome</em></span><em> or </em><code>false</code><em> otherwise</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/03/pal1linked-list.jpg" style="width: 422px; height: 62px;" />
<pre>
<strong>Input:</strong> head = [1,2,2,1]
<strong>Output:</strong> true
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/03/03/pal2linked-list.jpg" style="width: 182px; height: 62px;" />
<pre>
<strong>Input:</strong> head = [1,2]
<strong>Output:</strong> false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the list is in the range <code>[1, 10<sup>5</sup>]</code>.</li>
	<li><code>0 &lt;= Node.val &lt;= 9</code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> Could you do it in <code>O(n)</code> time and <code>O(1)</code> space?
