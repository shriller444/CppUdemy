/*

Provides method for creating new classes from existing classes 

new class contains data and behaviours from the existing class

allows for the reuse of existing classes - already robust and tested. 

Allows us to focus on the common attributes among a set of classes

Allows for new classes to modify behaviours of existing classes to make it unique 
   - without modifying the og class. 

terminology and notation

inheritance : creating new classes from existing classes and reuse mechanism

single inheritance: new class created from another 'single' class. 

multiple inheritance: new class is created from two (or more) other classes.

base class: (aka the parent class/super class) is the class that is being inherited from

derived class: (aka child class/sub class) is the class created from the base class being inherited. 
 - inherits attributes and operations from base class. 

Is-A relationship 
    - public inheritance
    - Derived classes are sub types of their base classes 
    - Can use a derived class object wherever we use a base class object
    
Generalisation - combining similar classes into a single, more general class based on common attributes

Speciaisation - creating new classes from existing classes proving more specialised attributes or operations.
 * 
 * both used in inheritance hierachies 
 * lower down in hierarchy = more specialisation , vice versa for generalisation. 

inheritance of class hierarchies - organisation of our inheritance relationships. 

A
B DERIVED FROM A
C DERIVED FROM A
D DERIVED FROM C
E DERIVED FROM D

B is A 
E is d is c is a 
d is c is a 
c is a 

B is not C or D or E.

example is where the root is person , and it derives to student and employee where employee goes into sub classes that student is NOT. 

INHERITANCE VS COMPOSITION 

- Both allows reuse of existing classes

- Public inheritance
  - 'is-a' relationship
   - employee is a person
   - checking account is a account
   - circle is a shape
   
- Composition
    - 'has-a' relationship
     - person 'has a' account
     - player has a special attack
     - Circcle has a location. 
     
- combine for complex class use. 

- modelled a straight line between classes rather than arrows from child to parent class. 

- if a root is linked to a class via a has relationship then all subclasses have that class also.

- try to model as compostion before trying inheritance as it adds more complexity to the program.





types of access specifies for inheritance

public
 - most common
 - establishes an 'is-a' realtionship between base and derived classes
 
 private / protected
  - establishes 'derived class has a base class' relationship
  - ' is implemented in terms of' relationship
  - Different from composition
  */