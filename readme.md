``` mermaid
classDiagram
    class Date {
        -int month
        -int day
        -int year
        +Date()
        +init(dd/mm/yyyy) string
        +printDate() void
    }

    class Address {
        -street string
        -city string
        -state string
        -zip string
        +Address()
        +init(street, city, state, zip) string
        +printAddress() : void
    }

    class Student {
        -studentString string
        -firstName string
        -lastName string
        -Address homeAddress
        -Date birthDate
        -Date gradDate
        -int creditHours
        +Student()
        +init(fName, lName, street, city, state, zip, birthDate, gradDate, credits) string
        +printStudent() void
        +getFirstName() string
        +getLastName() string
        +getCreditHours int
    }

    Student --> Address
    Student --> Date
```

#Date()

```
init day to 0
init month to 0
init year to 0
```

#Date.init(mm/dd/yyyy)

```
take dd and set it to day
take mm and set it to month
take yyyy and set it to year
```

#Date.printDate() void
```
print(day + month + year)
```

#Address()
```
init street to ""
init city to ""
init state to  ""
init zip to ""
```

#Address.init(street, city, state, zip)
```
street = street
city = city
state = state
zip = zip
```

#Address.printAddress() void
```
print(street, newLine)
print(city + "," + state + "," + zip)
```

#Student()
```
inti firstName = ""
init lastName = ""
address = make an object in the address class called homeAddress
date = make an object in the date  class called birthDate
date = make an object in the date  class called gradDate
init creditHours = 0
```
#Student.init(fName, lName, street, city, state, zip, birthDate, gradDate, credits)
```
firstName = fNamme
lastName = lName
homeAddress.init(street, city, state, zip)
birthDate.init(birthDate)
gradDate.init(gradDate)
creditHours = credits
```

#Student.printStudent() void
```
print(firstName + lastName)
print(homeAddress)
print(birthDate)
print(gradDate)
print(creditHours)
```
#Student.getFirstName() string
```
return firstName(student)
```

#Student.getLastName() string
```
retrun lastName(student)
```

#Student.getCreditHours() int
```
return creditHours(student)
```

#loading the students
```
make a file input stream
make a string for the curent line

open file streamwith the students. csv
read each line into currentLine
create a new instance of Studen for the student we are loading in
push that student to the back of the vector
close file
```

#printing the students
```
for i in vector:
    print Student
```

#show name
```
for i in vector:
    print Student(last, first)
```

#find student
```
create a string for the name
create a bool for found/not

for all students:
    if name is found:
        return name
    else:
        return that name does not exist
```

#menu
```
print menu options
do what each option says
```

#delete student
```
for i in vector:
    delete i
```

#main
```
make a students vector [""]
load student witht the loader

while keepGoing is true:
    call menue
        if 0:
            keepGoing = false
        if 1:
            call showNames
        if 2:
            call printStudents
        if 3:
            call findStudent

delete all students from heap
```
