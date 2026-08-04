<h2>Largest Rectangle in Histogram</h2>

<p>
The problem asks us to find the maximum rectangular area that can be formed using the bars of a histogram, where the width of each bar is 1.
</p>

<p>
A brute-force approach would check every possible rectangle, but that would take O(n²) time, which is inefficient for large inputs.
</p>

<p>
The optimized solution uses a stack to keep track of bar indices in increasing order of heights. The stack helps us quickly determine the nearest smaller bar on the left and right for each bar.
</p>

<p>
When we encounter a bar that is smaller than the bar at the top of the stack, it means the rectangle with the height of the top bar cannot extend further. We pop that bar, calculate its width using the current index and the new top of the stack, and then compute the area.
</p>

<p>
For a popped bar, the width is calculated as:
<br>
width = currentIndex - stackTop - 1
<br>
The area is then:
<br>
area = height × width
</p>

<p>
By processing all bars in this manner, every bar is pushed and popped at most once, making the algorithm very efficient.
</p>

<p>
<b>Approach:</b> Monotonic Stack<br>
<b>Time Complexity:</b> O(n)<br>
<b>Space Complexity:</b> O(n)
</p>
<h2><a href="https://leetcode.com/problems/largest-rectangle-in-histogram">84. Largest Rectangle in Histogram</a></h2><h3>Hard</h3><hr><p>Given an array of integers <code>heights</code> representing the histogram&#39;s bar height where the width of each bar is <code>1</code>, return <em>the area of the largest rectangle in the histogram</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/histogram.jpg" style="width: 522px; height: 242px;" />
<pre>
<strong>Input:</strong> heights = [2,1,5,6,2,3]
<strong>Output:</strong> 10
<strong>Explanation:</strong> The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.
</pre>

<p><strong class="example">Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/01/04/histogram-1.jpg" style="width: 202px; height: 362px;" />
<pre>
<strong>Input:</strong> heights = [2,4]
<strong>Output:</strong> 4
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= heights.length &lt;= 10<sup>5</sup></code></li>
	<li><code>0 &lt;= heights[i] &lt;= 10<sup>4</sup></code></li>
</ul>
