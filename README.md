# DesignPattern
The example code from head first design patterns for practicing 

**Reference: [Head First Design Patterns](http://www.amazon.com/Head-First-Design-Patterns-Freeman/dp/0596007124)**

**If there is any content related to copyright, please concat author to declare it or remove it. Thanks.**

## Singleton Pattern

Your ticket to creating one-of-a-object, for which there is only one instance.

We're taking a class and letting it manage a single instance of itself. We're also provide a global access point to get the instance.

Create a static member instance in class which has a private constructor and using a static function to get the single instance. At the same time, pay attention to the problem of synchronization.

Java Code: [Issue #1](https://github.com/cxlove/DesignPattern/issues/1) 

c++ Code: [Issue #2](https://github.com/cxlove/DesignPattern/issues/2) 

## Strategy Pattern

Define a family of algorithms, encapsulates each one, and makes them interchangeable. Strategy lets the algorithm vary independently from clients that use it.

Java Code & Design Step: [Issue #3](https://github.com/cxlove/DesignPattern/issues/3) 

c++ Code: [Issue #4](https://github.com/cxlove/DesignPattern/issues/4) 

## Observer Pattern

It defines a one-to-many dependency between objects so that when one object changes state, all of its dependents are notified and updated automatically.

I guess called Subscription Pattern will be more appropriate. We have a Subject which have some data or some information, just like a journal or website. Some people or Observer want to have a subscription. The Subject need to notifiy all of the Observer when some changes happend or just regularly. Meanwhile, the Subject need to support register and unregister for Observer. So, it's Observer Pattern. It's a one-to-many dependency between Subject and Observers.

In our example, the weather station or weather data is the Subject. So it implements from a Subject interface which support register & unregister & notify. And some different DisplayElements is the Observer. It implements from a DisplayElement which support display and a Observer which support observed multiple Subjects.  

The DisplayElement don't need to know how Subject implemented, because it just use some interfaces to interact with Subject. And Subject also don't need to know what is the difference for different types of Observer, beacuse it also just use some same interfaces to interfact with all of Observers. It's convenient to add a new DisplayElement or Observer.

Java Code & Design Step: [Issue #5](https://github.com/cxlove/DesignPattern/issues/5) 

c++ Code: [Issue #7](https://github.com/cxlove/DesignPattern/issues/7) 

## Decorator Pattern

The Decorator Pattern attaches additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

We have some componment. Some of them, I called Base Componment which are Concrete Componments. Others are decorations. In our example, base Coffe are Concrete Componments, such as Espresso and DarkRoast. And we have some options, such as Milk, Moca and Soy, which are decorations.

If we build each coffe with different options as a new Class, it will be a large scale. And also we cannot add all of decorations in coffe class for options, if there is a new decorations, we need to change the code, even the whole interfaces. 

Actually, in decorations pattern, we build a Componment class, Concrete Componment and Decorators both inherit it. Seems like a Wrapping operation one by one for decorations, and the Concrete Componment is innermost.  

<del>By the way, I cann't find its benefit compared to Combination between Concrete Componment and Decorators. I can add a ArrayList for decorations in Concrete Componment.</del> 

Java Code: [Issue #8](https://github.com/cxlove/DesignPattern/issues/8) 

c++ Code: [Issue #9](https://github.com/cxlove/DesignPattern/issues/9) 

## Factory Pattern

Remember that design should be open for extension, but closed for modification. If your code is written to an interface, it will work with any new class implementing that interface through polymorphism. However, when your code is written for concrete class, it will be a big trouble if a new class occured. Remember our priciple which find the aspects that vary and separate them from what stay the smae. 

For Example: Duck is the interface, Duck duck = createDuck() is good for design, we can new different types of duck in createDuck(). 

<strong>Type #1: Simple Factory</strong>

Which is not a desgin pattern, it's more of a programming idiom. We have several types of concrete classes. We create the corresponding class which according to a type string, and we will add or remove some classes. So we can add a factory to help us to create the concrete clases. In the factory, it will create the corresponding product base on a common interface. The main class don't care about how factory do that, and it also don't care the new product occured, which are same interface. 

<strong>Type #2: Factory Method</strong>

Factory Method Pattern defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses. Remove factory class in simple factory, put the instance creating in subclass directly. Factory class have a absract method for concrete factory to implement. 

<strong>Type #3: Abstract Factory</strong>

The Abstract Factory Pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes. In our example, we have a interface of PizzaIngredientFactory can create different materials. 

Java Code: [Issue #10](https://github.com/cxlove/DesignPattern/issues/10) 

c++ Code: [Issue #11](https://github.com/cxlove/DesignPattern/issues/11) 

## Command Patterns

The Command Pattern encapsulates a request as an object, thereby letting you parameterize other objects with different requests, queue or log requests, and support undoable operations.

We package the actions and the receiver up into an command object which exposes only one method execute(). When called this method, it causes the cations to be invoked on the receiver. After that, we can assemble the command into a controler. From the outside, controler don't really know what actions get execute on what receiver, they just know that if they call the method, their request will be serviced.  

Java Code: [Issue #12](https://github.com/cxlove/DesignPattern/issues/12) 

c++ Code: [Issue #13](https://github.com/cxlove/DesignPattern/issues/13) 

## Adapter Pattern 

The Adapter Pattern converts the interface of a class into another interface the clients expect. Adapter lets classes work together that couldn’t otherwise because of incompatible interface.

<strong> Type #1: Object Adapter: </strong>

We can build a adapter implements the target interface and use the object composition to wrap the adaptee. This approach has the added advantage that we can use an adapter with any subclass  of the adaptee.

<strong> Type #2: Class Adapter: </strong>

We can build a adapter implements the target interface and inherit from a concrete class adaptee. Yeah ,the difference is that with class adapter we subclass the target and adaptee, not the composition. So it has trouble with that because it committed to one specific adaptee class. But it can convert a part of function because of subclassing.   

Java Code: [Issue #14](https://github.com/cxlove/DesignPattern/issues/14) 

c++ Code: [Issue #15](https://github.com/cxlove/DesignPattern/issues/15) 

## Facade Pattern 

The Facade Pattern provides a unified interface to a set of interfaces in a subsytem. Facade defines a higher- level interface that makes the subsystem easier to use.

We create a class unified a set of more complex classes. It's straightforward and easy understand.

## Template Pattern

The Template Method Pattern defines the skeleton of an algorithm in a method, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm’s structure.

It's easy to understand this pattern. We find the common process and common function between serveal classes. So we build a super abstract class, which have a template function. And implement the comman function in super class, and deferring the difference to subclasses.

Java Code: [Issue #17](https://github.com/cxlove/DesignPattern/issues/17) 

c++ Code: [Issue #18](https://github.com/cxlove/DesignPattern/issues/18) 

## Iterator Pattern

The Iterator Pattern provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation.

This pattern gives you a way to step through the elements of an aggregate without to know how things are represented under the conver.

If we add a new object for this aggregate, we don't need to change the previous code to access this element. What we should do is just add the objecdt and the corresponding iterator interface. 

Java Code: [Issue #19](https://github.com/cxlove/DesignPattern/issues/19) 

c++ Code: [Issue #20](https://github.com/cxlove/DesignPattern/issues/20) 

## Composite Pattren

The Composite Pattern allows you to compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects

We can build a tree structure and traversal it using recursion. Create a base abstract class to represent the tree node, and each type of node can subclass it. 

We can also allow to iterate over the entry composite.

Java Code: [Issue #21](https://github.com/cxlove/DesignPattern/issues/21) 

c++ Code: [Issue #22](https://github.com/cxlove/DesignPattern/issues/22) 

## State Pattern 

In out example, we build a vending machine, it support insert money, eject money and bought. So there serverl state for machine, which including no money, no goods, eject money and so on. 

Java Code: [Issue #24](https://github.com/cxlove/DesignPattern/issues/24) 
