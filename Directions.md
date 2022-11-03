Challenge Problem: Custom Date Classes
Storing date/time information in computer programs is notoriously difficult. It's less that the task is technically challenging (although it can be), and more that nobody can agree on how dates ought to be formatted in the first place! In this challenge, you will write a Date class and 3 classes that extend it. You will also write a polymorphic function that, given a string, returns a Date object using the appropriate subclass implementation.

Learning Objectives & Stretch Goals
Topic Inheritance.
Pair project: No. 
Well suited to using a test suite or writing a project report using LATEX.
Assignment Timeline
Friday, November 11: Initial submission due.
Assignment Details
Your submission will consist of three documents:

Date.h (Containing your classes. You may optionally include a separate Date.cpp for implementation.)
MakeDate.cpp (Containing your MakeDate function and several tests of its use.).
A design doc describing the Date interface and the 3 implementations you selected.
Many date implementations exist. You may choose to implement "wrapper" subclasses that use existing implementations as part of their fields. However, you will likely find that this introduces additional complications to your program.

Examples of date formats you might choose to implement include (but are not limited to):

"American" style abbreviate dates (MM/DD/YY)
"European" style dates (DD.MM.YYYY)
Dates with written month names, e.g.: "March 3, 2022"
Unix "epoch" dates (written as the number of seconds since midnight GMT January 1, 1970)
Any Date must be printable (override <<) and implement a getFormat() method that returns a string identifying the implementation. (Return this string, don't print it!) Try not to add extra complexity to the Date class, since you would then be required to include it in all 3 subclasses as well.

Your MakeDate function must meet the following criteria:

Return a Date object.
If given a string that is properly formatted for one of your Date subclasses, creates an object of the appropriate subclass type (and returns it as a Date).
Returns a nullptr if the string is not properly formatted for any of your types--avoid runtime errors!
