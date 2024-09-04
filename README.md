# OOP-Inheritance in C++

## Source: https://www.youtube.com/watch?v=wN0x9eZLix4&list=WL&index=20&t=14s

## Overview

This C++ program demonstrates the concept of Object-Oriented Programming (OOP) with a focus on inheritance. It includes two classes: `companyEmployee` and `Employees`, showcasing how a derived class (`Employees`) inherits from a base class (`companyEmployee`) and extends its functionality.

## Classes

### `companyEmployee`

The `companyEmployee` class serves as the base class for managing employee-related attributes and methods.

- **Attributes:**
  - `string Name`: The name of the employee.
  - `int Age`: The age of the employee.
  - `int ExperienceYears`: The number of years of experience the employee has.
  - `int DaysOFWork`: The number of working days assigned based on experience.

- **Constructor:**
  ```cpp
  companyEmployee(string name, int age, int experience);
