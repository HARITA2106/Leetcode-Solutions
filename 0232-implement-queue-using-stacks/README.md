<h2>Implement Queue using Stacks</h2>

<p>
A queue follows the FIFO (First In First Out) principle, where the first inserted element is removed first. A stack follows the LIFO (Last In First Out) principle, where the last inserted element is removed first. The challenge is to implement queue behavior using only stack operations.
</p>

<p>
The optimized solution uses two stacks: an input stack and an output stack. The input stack is used for inserting new elements, while the output stack is used for removing and viewing elements from the front of the queue.
</p>

<p>
When the push operation is performed, the element is simply pushed onto the input stack. This operation takes constant time.
</p>

<p>
For the pop or peek operation, if the output stack is empty, all elements from the input stack are transferred to the output stack one by one. This transfer reverses the order of the elements, making the oldest inserted element appear at the top of the output stack.
</p>

<p>
The pop operation removes the top element from the output stack, while the peek operation returns the top element without removing it. The empty operation checks whether both stacks are empty.
</p>

<p>
Although transferring elements may occasionally take O(n) time, each element is moved at most once from the input stack to the output stack. Therefore, over a sequence of operations, the average cost of each operation becomes constant.
</p>

<p>
<b>Approach:</b> Two Stacks (Input Stack and Output Stack)<br>
<b>Push:</b> Insert into input stack<br>
<b>Pop / Peek:</b> Transfer elements to output stack if needed<br>
<b>Empty:</b> Check whether both stacks are empty<br>
<b>Amortized Time Complexity:</b> O(1)<br>
<b>Space Complexity:</b> O(n)
</p><h2><a href="https://leetcode.com/problems/implement-queue-using-stacks">232. Implement Queue using Stacks</a></h2><h3>Easy</h3><hr><p>Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (<code>push</code>, <code>peek</code>, <code>pop</code>, and <code>empty</code>).</p>

<p>Implement the <code>MyQueue</code> class:</p>

<ul>
	<li><code>void push(int x)</code> Pushes element x to the back of the queue.</li>
	<li><code>int pop()</code> Removes the element from the front of the queue and returns it.</li>
	<li><code>int peek()</code> Returns the element at the front of the queue.</li>
	<li><code>boolean empty()</code> Returns <code>true</code> if the queue is empty, <code>false</code> otherwise.</li>
</ul>

<p><strong>Notes:</strong></p>

<ul>
	<li>You must use <strong>only</strong> standard operations of a stack, which means only <code>push to top</code>, <code>peek/pop from top</code>, <code>size</code>, and <code>is empty</code> operations are valid.</li>
	<li>Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack&#39;s standard operations.</li>
</ul>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input</strong>
[&quot;MyQueue&quot;, &quot;push&quot;, &quot;push&quot;, &quot;peek&quot;, &quot;pop&quot;, &quot;empty&quot;]
[[], [1], [2], [], [], []]
<strong>Output</strong>
[null, null, null, 1, 1, false]

<strong>Explanation</strong>
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= x &lt;= 9</code></li>
	<li>At most <code>100</code>&nbsp;calls will be made to <code>push</code>, <code>pop</code>, <code>peek</code>, and <code>empty</code>.</li>
	<li>All the calls to <code>pop</code> and <code>peek</code> are valid.</li>
</ul>

<p>&nbsp;</p>
<p><strong>Follow-up:</strong> Can you implement the queue such that each operation is <strong><a href="https://en.wikipedia.org/wiki/Amortized_analysis" target="_blank">amortized</a></strong> <code>O(1)</code> time complexity? In other words, performing <code>n</code> operations will take overall <code>O(n)</code> time even if one of those operations may take longer.</p>
