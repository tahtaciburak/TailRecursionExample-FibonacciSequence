# Tail Recursion Example - Fibonacci Sequence
A funtion call uses stack for return to same point. In some cases recursion will be a blame for programmers. Becasue limited resources can NOT response all of requests. Such as complex nested recursions.And you may face with <b>Stack Overflow</b>.

According to general approach, recursive functions starts to calculate at first point but tail recursion starts from back.And reduces your stack usage.As an important note tail recursion is NOT a different thing. Thats just an optimization way. At this example I write a function called <code>unsigned long int fibTail(int,unsigned long int,unsigned long int)</code>. As a critical point, I pass 2 more parameter of this function. The first one is <code>current_value</code> and second is <code>last_value</code>. And this parameters using to store corresponding values.

These two values are magic of tail recursion optimization.After this storage you don't need to push your values again and again. And you can implement many other recursive funtions to tail recursion. 
