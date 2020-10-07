/*

- derived class inherits from two or more base classes at the same time_t

- base classes may belong to hierarchies that are unrelated

- A dpartment chair
    - is a faculty
    - is a Administrator
    

person --> employee + student

employee --> faculty + admin + staff

faculty + admin --> department chair // multiple inheritance. 

c++ syntax

class DepartmenChari:
    public Faculty, public Admin{
        
    ....
}

- beyond scope of this course
- some compelling use cases 
- easily misused
- can become very complex