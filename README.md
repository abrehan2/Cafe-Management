## Cafe Management System

This is a Cafe Management System project in C++ that implements object-oriented programming principles. The project allows users to view the available menu items, place an order, pay for it, and generate a receipt.

### Object-Oriented Programming Principles

The Cafe Management System project implements the following object-oriented programming principles:

* **Abstraction:** The project uses abstraction to hide the implementation details of the underlying classes from the user. For example, the user does not need to know how the menu items are stored in the database in order to place an order.
* **Encapsulation:** The project uses encapsulation to group together the data and behavior associated with a particular object. For example, the `MenuItem` class encapsulates the data and behavior associated with a menu item, such as its name, price, and description.
* **Inheritance:** The project uses inheritance to create new classes that reuse the code and functionality of existing classes. For example, the `Order` class inherits from the `MenuItem` class, which allows it to reuse the code for calculating the price of the order and generating a receipt.
* **Polymorphism:** The project uses polymorphism to allow different objects to respond to the same message in different ways. For example, the `MenuItem` class has a `print()` method, but the different subclasses of `MenuItem` (such as `Coffee` and `Sandwich`) implement the `print()` method in different ways to print the details of the specific menu item.

### Usage

To use the Cafe Management System project, follow these steps:

1. Compile the code using the following command:

