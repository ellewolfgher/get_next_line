<h1 align=center>
	<b>get_next_line</b>
</h1>

<h2 align=center>
	 <i>42 - Project #2</i>
</h2>

<p align=center>
	This project is about programming a function that returns a line read from a file descriptor
</p>

---

<div align=center>
<img src=https://github.com/ellewolfgher/get_next_line/blob/main/get_next_line.png alt="42 Project Get_Next_Line Bonus Badge"/>
</div>

---

<h4 align=center>New Concepts</h4>
<h3 align=center>Static Variables and File Descriptor Manipulation</h3>

---

<h3 align=center>
Principal
</h3>

<p>
  Calling get_next_line function in a loop will then allow you to read the text file one line at a time until the end of it.

Bonus: To be able to manage multiple file descriptors with your get_next_line. For example, if the file descriptors 3, 4 and 5 are accessible for reading, then you can call get_next_line once on 3, once on 4, once again on 3 then once on 5 etc. without losing the reading thread on each of the descriptors.
</p>
