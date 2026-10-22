<h2><a href="https://codeforces.com/contest/1165/problem/E" target="_blank" rel="noopener noreferrer">1165E — Two Arrays and Sum of Functions</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1165E](https://codeforces.com/contest/1165/problem/E) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">E. Two Arrays and Sum of Functions</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given two arrays $$$a$$$ and $$$b$$$, both of length $$$n$$$.</p><p>Let's define a function $$$f(l, r) = \sum\limits_{l \le i \le r} a_i \cdot b_i$$$.</p><p>Your task is to reorder the elements (choose an arbitrary order of elements) of the array $$$b$$$ to minimize the value of $$$\sum\limits_{1 \le l \le r \le n} f(l, r)$$$. Since the answer can be very large, you have to print it modulo $$$998244353$$$. Note that you should <span class="tex-font-style-bf">minimize the answer but not its remainder</span>.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of elements in $$$a$$$ and $$$b$$$.</p><p>The second line of the input contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^6$$$), where $$$a_i$$$ is the $$$i$$$-th element of $$$a$$$.</p><p>The third line of the input contains $$$n$$$ integers $$$b_1, b_2, \dots, b_n$$$ ($$$1 \le b_j \le 10^6$$$), where $$$b_j$$$ is the $$$j$$$-th element of $$$b$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum possible value of $$$\sum\limits_{1 \le l \le r \le n} f(l, r)$$$ after rearranging elements of $$$b$$$, taken modulo $$$998244353$$$. Note that you should <span class="tex-font-style-bf">minimize the answer but not its remainder</span>.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005817293068988182" id="id009547339052133277" class="input-output-copier">Copy</div></div><pre id="id005817293068988182">5
1 8 7 2 4
9 7 2 9 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001625510257689462" id="id006819302875766955" class="input-output-copier">Copy</div></div><pre id="id001625510257689462">646
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0005987988536522992" id="id002603177037686969" class="input-output-copier">Copy</div></div><pre id="id0005987988536522992">1
1000000
1000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008296765727114653" id="id004321362374680269" class="input-output-copier">Copy</div></div><pre id="id008296765727114653">757402647
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014651032385096374" id="id002150486368107032" class="input-output-copier">Copy</div></div><pre id="id0014651032385096374">2
1 3
4 2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005264846021235577" id="id00652549023199577" class="input-output-copier">Copy</div></div><pre id="id005264846021235577">20
</pre></div></div></div>