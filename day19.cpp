/*1. Actual vs Formal Arguments
 Actual arguments
Values you pass in function call
fun(5, 3);

5, 3 = actual arguments

 Formal arguments
Variables inside function definition
int fun(int a, int b)

a, b = formal arguments

Key idea

Actual  goes in
Formal  receives it

2. Pass by Value vs Reference
Pass by Value (COPY)
void fun(int x)

Copy is created
Different memory
Original NOT changed

a → 10
x → 10 (copy)

Pass by Reference (SAME MEMORY)
void fun(int &x)

No copy
Same variable (alias)

a → 10
x → same as a

If x changes → a changes

Core rule
Value → copy → safe
Reference → direct → changes original

3. Return vs Reference (BIG confusion)
Return
int fun(int x) {
    return x + 5;
}

 Gives value back
 MUST store it to use

a = fun(a);

If not stored → ignored

 Reference
void fun(int &x) {
    x = x + 5;
}

 Directly modifies original
 No need return
 Key difference
Concept	What it does
return	sends value back
reference	directly changes original

4. & Confusion (VERY IMPORTANT)

You saw & in 2 places:

In function parameter
int &x

Means reference (alias)
Same variable

 In normal code
&a

 Means address of a
 Used in pointers



5. Stack Memory

Every function gets its own memory block
Local variables exist only inside function
When function ends → memory is destroyed
main → running
fun → created → destroyed after return

Key idea
Function variables are TEMPORARY

6. Why return still works after function ends
 Because:

value is copied OUT before function is destroyed

So:

return x;
sends value BEFORE memory is deleted
Function runs → variables created in stack
Return → value copied out
Function ends → stack cleared-stack memory

Heap (Dynamic / Permanent until you delete it)
int* p = new int(10);
Now:memory is created in heap
it does NOT get deleted automatically
stays until you manually delete it
delete p;
create when needed
delete when not needed

Global / Static Memory (Program lifetime)--data segment
int a = 10;  // outside main
or
static int x = 5;

These stay for entire program execution

created when program starts
destroyed when program ends

 */
