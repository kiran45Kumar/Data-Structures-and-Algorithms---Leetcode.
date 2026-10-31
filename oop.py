# class Dog:
#     def __init__(self, name, breed):
#         self.name = name
#         self.breed = breed

#     def bark(self):
#         print(f"{self.name} is barking")
#     def eat(self):
#         print(f"{self.name} is eating")
#     def sleep(self):
#         print(f"{self.name} is sleeping")


# lab1 = Dog("Johny", "Labrador")

# lab1.bark()
# lab1.eat()
# lab1.sleep()

# lab2 = Dog("Stephen", "Golden Retriever")
# lab2.sleep()
# lab2.eat()
# lab2.sleep()


# class Employee:
#     def __init__(self, name, salary):
#         self.name = name
#         self.salary = salary

#     def increase_salary(self, amount):
#         self.salary += amount
#     def display(self):
#         print(f"{self.name} salary is {self.salary}")
#     def give_bonus(self, percentage):
#         bonus = self.salary * (percentage / 100)    
#         self.salary += bonus     
# emp1 = Employee("Kiran", 30000)
# emp2 = Employee("Rahul", 30000)
# emp1.give_bonus(20)
# emp1.increase_salary(5000)
# emp1.give_bonus(10)

# emp1.display()
# emp2.display()

# class BankAccount:
#     def __init__(self, name, balance):
#         self.name = name
#         self.balance = balance
#     def deposit(self, amount):
#         if amount < 0:
#             print("Amount should be a positive number")
#         else:
#             self.balance += amount
#     def withdraw(self, amount):
#         if amount > self.balance:
#             print("Please enter a value below the balance")
#         elif amount < 0:
#             print("Amount should be a positive number")
#         else:
#             self.balance -= amount
#     def display_balance(self):
#             print(f"Your account current balance is: {self.balance}")
# account = BankAccount("Kiran", 5000)
# # account.deposit()
# account.withdraw(5000)

# account.display_balance()


# class Calculator:
#     def add(self, a, b = 0, c = 0):
#         return a + b + c
#     def multiply(self, a, b = 1, c = 1):
#         return a * b * c

# calc = Calculator()

# print(calc.multiply(10, 20))
# print(calc.multiply(10, 20, 30))
# print(calc.multiply(10))

# class Animal:
#     def sound(self):
#         print("Animal makes a sound")

# class Dog(Animal):
#     def sound(self):
#         print("Dog barks")

# dog = Dog()
# dog.sound()


# class Vehicle:
#     def __init__(self, brand, speed):
#         self.brand = brand
#         self.speed = speed

#     def display_info(self):
#         print(f"Brand info: Brand:{self.brand}, speed:{self.speed}")
# class Car(Vehicle):
#     def __init__(self, brand, speed, fuel_type):
#         super().__init__(brand, speed)
#         self.fuel_type = fuel_type

#     def display_car(self):
#         print(f"Fuel type: {self.fuel_type}")

# car = Car("BMW", 220, "Petrol")
# car.display_info()
# car.display_car()


# def my_decorator(func):
#     def wrapper():
#         print("Before function")
#         func()
#         print("After function")
#     return wrapper

# @my_decorator
# def greet():
#     print("Hello!")

# greet()

# def logger(func):
#    def wrapper(*args, **kwargs):
#         print("Function execution started")
#         func(*args, **kwargs)
#         print("Function execution completed")
   
#    return wrapper

# @logger
# def welcome(name):
#     print(f"Welcome {name}")

# welcome("Kiran")

# class User:
#     total_users = 0
#     def __init__(self, name, email, role = 'USER'):
#         self.name = name
#         self.email = email
#         self.role = role
#         User.total_users += 1
#     def display_profile(self):
#         return {
#             "name": self.name,
#             "email": self.email,
#             "role": self.role
#         }
#     @classmethod
#     def create_admin(cls, name, email):
#         return cls(name, email, role = 'ADMIN')
#     @classmethod
#     def get_total_users(cls):
#         return cls.total_users
#     @staticmethod
#     def is_valid_email(email):
#         return "@" in email and "." in email
# # admin = User.create_admin("Kiran", "kiran@gmail.com")
# # admin.display_profile()


# class EmailNotification:
#     def send(self, message):
#         print("Sending Email:", message)
# class SMSNotification:
#     def send(self, message):
#         print("Sending SMS:", message)
# class PushNotification:
#     def send(self, message):
#         print("Sending Push Notification:", message)


# def send_notification(notification, message):
#     notification.send(message)


# email = EmailNotification()
# sms = SMSNotification()
# push = PushNotification()
# send_notification(email, "Welcome!")
# send_notification(sms, "Welcome!")
# send_notification(push, "Welcome!")

class Library:
    def __init__(self):
        self.books = {}
        self.borrowed_books = {}

    def add_book(self,bookid, book, author):
        books = {
            bookid: {book:author}
        }
        self.books.update(books)
    def search_book(self, book):
        # Your logic  
          for bookid, details in self.books.items():
              for title, author in details.items():
                  if title.lower() == book.lower():
                      return {
                            "book_id": bookid,
                            "title": title,
                            "author": author,
                            "status": "Available"
                      }
                #   else:
                #         return{
                #             "status":"UnAvailable"
                #         }
          for bookid, details in self.borrowed_books.items():
              for title, author in details.items():
                  if title.lower() == book.lower():
                      return {
                            "book_id": bookid,
                            "title": title,
                            "author": author,
                            "status": "Available"
                      }
                #   else:
                #       return {
                #           "status":"UnAvailable"
                #       }
    def borrow_book(self, bookid):
        if bookid in self.borrowed_books:
            print("Book is already borrowed")
        elif bookid not in self.books:
            print("Book doesn't exists in the library")
        else:
             self.borrowed_books.update({bookid:self.books[bookid]})
             self.books.pop(bookid)
    def return_book(self, bookid):
        if bookid in self.borrowed_books:
            book = self.borrowed_books[bookid]
            self.books.update({bookid:self.borrowed_books[bookid]})
            self.borrowed_books.pop(bookid)
            return book
        elif bookid not in self.borrowed_books:
            print("Book is not borrowed from the library or doesn't exist")
    def display_books(self):
        print("Books", self.books)
    
library = Library()


library.add_book(101, "Python Basics", "John")
library.add_book(102, "Clean Code", "Robert")

library.display_books()

library.borrow_book(101)
library.display_books()


# Try borrowing the same book again
library.borrow_book(101)

# Try borrowing a non-existing book
library.borrow_book(999)

print("Borrowed books:", library.borrowed_books)


library.return_book(101)

print("Available:", library.books)
print("Borrowed:", library.borrowed_books)

print(library.search_book("Python Basics"))
# print(library.search_book("Clean"))