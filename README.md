<h1>Aim</h1>
<p>To study and implement c++ exception handling</p>
<hr>
<h1>Software Required</h1>
<p>VS code</p>
<hr>
<h1>Theory</h1>
<p>C++ exception handling provides a mechanism for managing runtime errors or exceptional situations in a program. It uses three main keywords: <code>try</code>, <code>catch</code>, and <code>throw</code>. The <code>try</code> block contains code that may generate an exception, while the <code>throw</code> keyword is used to signal an error. The <code>catch</code> block handles the exception by defining how the program should respond to the error. This mechanism ensures that programs can handle unexpected situations gracefully without crashing, leading to more robust and maintainable code.</p>
<hr>
<h1>Algorithms</h1>
<h2>Division Error Handling</h2>
<ol>
    <li>Start.</li>
    <li>Declare three variables: <strong>n1</strong>, <strong>n2</strong>, and <strong>ans</strong> (float type).</li>
    <li>Prompt the user to enter values for <strong>n1</strong> and <strong>n2</strong>.</li>
    <li>Read the input values of <strong>n1</strong> and <strong>n2</strong>.</li>
    <li><strong>Try Block</strong>:
        <ul>
            <li>Check if <strong>n2</strong> is equal to 0.</li>
            <li>If <strong>n2 == 0</strong>, throw the value of <strong>n2</strong> (0).</li>
            <li>Otherwise, calculate <strong>ans = n1 / n2</strong>.</li>
        </ul>
    </li>
    <li>Display the result: <em>"Answer = ans"</em>.</li>
    <li><strong>Catch Block</strong>:
        <ul>
            <li>If an exception occurs, catch the thrown value <strong>num</strong>.</li>
            <li>Display the error message: <em>"ERROR: Division by num"</em>.</li>
        </ul>
    </li>
    <li>End.</li>
</ol>
<hr>
<h2>Voter Age Error Handling</h2>
<ol>
    <li>Start.</li>
    <li>Declare an integer variable: <strong>age</strong>.</li>
    <li>Prompt the user to enter their age.</li>
    <li>Read the input value of <strong>age</strong>.</li>
    <li><strong>Try Block</strong>:
        <ul>
            <li>Check if <strong>age</strong> is less than 18.</li>
            <li>If <strong>age &lt; 18</strong>, throw the value of <strong>age</strong>.</li>
            <li>Otherwise, print <em>"You are eligible to vote"</em>.</li>
        </ul>
    </li>
    <li><strong>Catch Block</strong>:
        <ul>
            <li>If an exception occurs, catch the thrown value <strong>num</strong>.</li>
            <li>Display the error message: <em>"ERROR: required age: 18, your age: num"</em>.</li>
        </ul>
    </li>
    <li>End.</li>
</ol>
<hr>
<h1>Conclusion</h1>
<p>In conclusion, C++ codes to implement error handling using try and catch blocks was successfully written and executed.</p>
