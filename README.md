# DesignPatten
The example code from head first design pattens for practicing 

## Singleton Patten

Your ticket to creating one-of-a-object, for which there is only one instance.

We're taking a class and letting it manage a single instance of itself. We're also provide a global access point to get the instance.

Create a static member instance in class which has a private constructor and using a static function to get the single instance. At the same time, pay attention to the problem of synchronization.

Java Code: [Issue #1](https://github.com/cxlove/DesignPatten/issues/1) 

c++ Code: [Issue #2](https://github.com/cxlove/DesignPatten/issues/2) 

## Strategy Patten

Define a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

Java Code & Design Step: [Issue #3](https://github.com/cxlove/DesignPatten/issues/3) 
