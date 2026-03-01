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
