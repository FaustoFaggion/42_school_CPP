<h1>42_school_CPP</h1>

<p>CPP piscine from 42 school</p>

<h2>CPP00</h2> 
### Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other stuff

<h3>Namespace</h3>

<p>Used to prevent name collisions when using multiple libraries, a namespace is a declarative preﬁx for functions,
classes, types, etc.</p>
<p>A C++ namespace is a collection of C++ entities (functions, classes, variables), whose names are preﬁxed by the
name of the namespace. When writing code within a namespace, named entities belonging to that namespace
need not be preﬁxed with the namespace name, but entities outside of it must use the fully qualiﬁed name. The
fully qualiﬁed name has the format <namespace>::<entity>.</p>
<p>Namespaces are useful for grouping related deﬁnitions together.</p>

<h3>Class</h3>

<p>Classes are an expanded concept of data structures: like data structures, they can contain data members, but they can also contain functions as members.</p>
<p>An object is an instantiation of a class. In terms of variables, a class would be the type, and an object would be the variable.</p>
<p>Classes are defined using either keyword class or keyword struct, with the following syntax:</p>
<code>
class <name> {
	
	access_specifier_1:
		member1;
	access_specifier_2:
		member2;
};
</code>

<p>Class is a way to group data and functionalities together</p>
<h3>Keyword This</h3>

<p>Within a member function of a class, the keyword this is a pointer to the instance of the class on which the
function was called.</p>
<p>This cannot be used in a static member function.</p>

<p>link</p>
<ul>
<li>https://www.youtube.com/watch?v=Z_hPJ_EhceI</li>
</ul>



#### EX00 
#### EX01
#### EX02

## CPP01 
### Memory Allocation, pointers to members, references, switch statement

#### EX00 
#### EX01
#### EX02
#### EX03 - Inicialization List
links:

	https://www.youtube.com/watch?v=1nfuYMXjZsA

#### EX04
#### EX05
#### EX06 - Switch Case
links:
    
    https://www.youtube.com/watch?v=YpvVnZNMk_g


## CPP02
### Ad-hoc Polimorphism, operator overloading and Ortodox Canonical class

#### EX00
#### Float Point Numbers, Const, Static.
links: 

    https://www.youtube.com/watch?v=LXF-wcoeT0o

Computerphile:

	https://www.youtube.com/watch?v=PZRI1IfStY0
    
	https://www.youtube.com/watch?v=f4ekifyijIg

Const in C++

	https://www.youtube.com/watch?v=4fJBrditnJU

Static

	https://www.youtube.com/watch?v=f3FVU-iwNuA

Static in class

	https://www.youtube.com/watch?v=V-BFlMrBtqQ
	
	https://www.youtube.com/watch?v=Ldv5i14UhTA

Copy Constructor; Copy Assignment (Deep and Shallow copy)

	https://www.youtube.com/watch?v=EBgBM7rPDic

Overloading operator << >>

	https://www.youtube.com/watch?v=2972LRdyquk&t=355s

#### EX01

#### EX02

#### EX03 BSP Binary Space Partioning

Links:

	https://www.youtube.com/watch?v=HYAgJN3x4GA

	https://www.youtube.com/watch?v=ntjM9YZP0qk

## CPP03
### Inheritanc

#### EX00

#### EX01

links:

	https://www.youtube.com/watch?v=X8nYM8wdNRE

Function Overiding

	https://www.youtube.com/watch?v=Zd_4xa071nc

#### EX02

#### EX03 Vitual fuctions, Vtable, Multiple inheritance

links:

Virtual Functions

	https://www.youtube.com/watch?v=oIV2KchSyGQ


Vtable

	https://www.youtube.com/watch?v=hS7kPtVB1vI


Multiple Inheritance

	https://www.youtube.com/watch?v=KVREEoovDd4

### CPP04

#### EX00

#### EX01 Deep ans Shallow copy
links:

Deep and Shallow copy

	https://www.youtube.com/watch?v=BvR1Pgzzr38&t=875s

Virtual Functions

	https://www.youtube.com/watch?v=oIV2KchSyGQ


Vtable

	https://www.youtube.com/watch?v=hS7kPtVB1vI


#### EX02 Viltual Function, Pure Virtual Function, Abstract Class

Abstract class - It is a class that has at least one pure virtual function.

links:

	https://www.youtube.com/watch?v=T8f4ajtFU9g

#### EX03

### CPP05 Exceptions( try and catch)

#### EX00

Try and Catch

	links:https://www.youtube.com/watch?v=kjEhqgmEiWY

#### EX01

#### EX02

#### EX03

### CPP06 - Type Conversions

#### 

#### EX00 Conversion of Scalar Types

#### EX01

#### EX02 Dynamic Casting

	Used only for polymorfic classes.

Cherno - https://www.youtube.com/watch?v=CiHfz6pTolQ

### CPP07 - Template

<p>There are two places where we can apply templates:</p>
<ul>
<li>function templates </li>
<li>class templates</li>
</ul>
<p>Templates are the way to write generic programs</p>
<p>The main point is we pass data type as parameter to function or class.</p>



Templates will be evaluated at compile time. It is just created when is called in the code. It will be created with the type that was called.

Cherno - https://www.youtube.com/watch?v=I-hZkUa9mIs

Function as parameter of another function - https://www.youtube.com/watch?v=67vTjgbT56Q

<h4>CPP08</h4>
<h5>std::stack</h5>
<p> It is a container adapter. It's not a container, it's adapting a existing container and mapping the functions.</p>
<p>By default internaly uses the std::deque STL container.</p>
<p>It's a LIFO(last-in, first-out) data structure</p>
<p><link rel="cplusplus reference" href="https://cplusplus.com/reference/stack/stack/"></p>

