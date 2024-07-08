<h1>Train Problem Solution</h1>

<h2>Description</h2>
<p>
    The Train Problem solution program simulates the sorting of train cars from an input track to output tracks
    and holding tracks based on a given order. It utilizes sorting and stack data structures to manage the cars
    efficiently.
</p>

<h2>Languages and Utilities Used</h2>
<ul>
    <li><b>C++</b></li>
    <li><b><code>&lt;iostream&gt;</code></b> - Input and output operations.</li>
    <li><b><code>&lt;vector&gt;</code></b> - Dynamic array for storing train car order.</li>
    <li><b><code>&lt;stack&gt;</code></b> - Stack data structure for holding tracks.</li>
    <li><b><code>&lt;utility&gt;</code></b> - Pair utility for managing possible tracks.</li>
    <li><b><code>&lt;string&gt;</code></b> - String manipulation for output messages.</li>
</ul>

<h2>Files in the Project</h2>
<ul>
    <li><b><code>&quot;mergeSort.h&quot;</code></b> - Header file containing merge sort algorithm.</li>
    <li><b><code>&quot;TrainProblem.h&quot;</code></b> - Header file defining the TrainProblem class.</li>
    <li><b><code>&quot;TrainDriver.cpp&quot;</code></b> - Main program file that interacts with the user, reads input, and initiates the TrainProblem solution.</li>

</ul>

<h2>Files and Roles</h2>
<ul>
    <li><b><code>TrainDriver.cpp</code></b>: Main program file that interacts with the user, reads input, and initiates the TrainProblem solution.</li>
    <li><b><code>TrainProblem.h</code></b>: Header file defining the <code>TrainProblem</code> class responsible for solving the train sorting problem using sorting and stack operations.</li>
    <li><b><code>mergeSort.h</code></b>: Header file containing the merge sort algorithm used for sorting the train car order.</li>
</ul>

<h2>How to Run</h2>
<ol>
    <li><b>Compile the Program:</b>
        <pre><code>g++ -o TrainDriver TrainDriver.cpp</code></pre>
    </li>
    <li><b>Execute the Program:</b>
        <pre><code>./TrainDriver</code></pre>
    </li>
    <li>Follow the prompts to enter the number of cars, number of tracks, and the train order.</li>
</ol>


<h2>Sample Run</h2>
<p>
<b>Input:</b><br>
Enter number of cars: 5<br>
Enter number of tracks: 3<br>
Enter train order: 1 5 4 2 3<br>
<br>
<b>Output:</b><br>
Move car 1 from input track to output track<br>
Move car 5 from input track to holding track 1<br>
Move car 4 from input track to holding track 2<br>
Move car 2 from input track to output track<br>
Move car 3 from input track to output track<br>
Move car 4 from holding track 2 to output track<br>
Move car 5 from holding track 1 to output track<br>

<br/>
<p align="center">
<b>Prompted to enter # of cars, # of tracks, and car order. Outputs computed moves: </b>
<br/>
<br/>
<img src="https://imgur.com/gBy1foS.png" height="80%" width="80%" />
<br />
<br />
</p>
