<h2><a href="https://codeforces.com/contest/2009/problem/E" target="_blank" rel="noopener noreferrer">2009E — Klee's SUPER DUPER LARGE Array!!!</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2009E](https://codeforces.com/contest/2009/problem/E) |

## Topics
`binary search` `math` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">E. Klee's SUPER DUPER LARGE Array!!!</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Klee has an array $$$a$$$ of length $$$n$$$ containing integers $$$[k, k+1, ..., k+n-1]$$$ in that order. Klee wants to choose an index $$$i$$$ ($$$1 \leq i \leq n$$$) such that $$$x = |a_1 + a_2 + \dots + a_i - a_{i+1} - \dots - a_n|$$$ is minimized. Note that for an arbitrary integer $$$z$$$, $$$|z|$$$ represents the absolute value of $$$z$$$. </p><p>Output the minimum possible value of $$$x$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains $$$t$$$ ($$$1 \leq t \leq 10^4$$$) — the number of test cases.</p><p>Each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \leq n, k \leq 10^9$$$) — the length of the array and the starting element of the array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum value of $$$x$$$ on a new line.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008035182221740564" id="id00838007818771557" class="input-output-copier">Copy</div></div><pre id="id008035182221740564"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2 2</div><div class="test-example-line test-example-line-even test-example-line-2">7 2</div><div class="test-example-line test-example-line-odd test-example-line-3">5 3</div><div class="test-example-line test-example-line-even test-example-line-4">1000000000 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009214933538702399" id="id009254691243107026" class="input-output-copier">Copy</div></div><pre id="id009214933538702399">1
5
1
347369930
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, $$$a = [2, 3]$$$. When $$$i = 1$$$ is chosen, $$$x = |2-3| = 1$$$. It can be shown this is the minimum possible value of $$$x$$$.</p><p>In the third sample, $$$a = [3, 4, 5, 6, 7]$$$. When $$$i = 3$$$ is chosen, $$$x = |3 + 4 + 5 - 6 - 7| = 1$$$. It can be shown this is the minimum possible value of $$$x$$$.</p></div>