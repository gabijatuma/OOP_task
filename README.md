# OOP_task
This program allows you to make a file of 1000, 10000, 100000, 1000000 or 10000000 students. The program creates different
files and then sorts them out with 3 containers: list, vector and deque. These files contain student names and randomly generated grades.It also shows how much time it takes to read files and sort them out into two categories. There are 3 ways of sorting: splitting them into 2 files while writing the results, splitting data into 2 new containers (which is the fastest way, as written in the text file) however it takes up unnecessary space. And it also takes half students in a new container and deletes them from the original container so the user is left with 2 different lists. this takes less time than my previous method, but more than writing into two new containers. In this case however the original list is gone and the placement of students can no longer be retrieved.It shows that the best results are achieved with a list container and the worst with vector container.
Timewise is best to split data into 2 new containers.
**RESULTS:**
computer that got these results has 8GB of RAM, 2.39GHz processor and 1TB HDD
![list](https://user-images.githubusercontent.com/60934852/80563900-1b864a80-89f5-11ea-8a3b-a1fe1ca01f39.jpg)
![vector](https://user-images.githubusercontent.com/60934852/80563909-1e813b00-89f5-11ea-8962-c6b03463fa14.jpg)
![deque](https://user-images.githubusercontent.com/60934852/80564096-8df72a80-89f5-11ea-8c51-c2fcecfde8f2.jpg)

Later i created a Class instead of a structure. It was slower to work with a class, probably because i had to access private members. However, this added safety to the data i was containing. The times are shown here, compared between lists:
The most optimal container was list. So i compared two lists when whey are using stuctures and classes. The fastest method is when i create 2 new lists and put the right students into each. the numbers show that it was faster to work with structures than with classes. That is probably because i have to get access to the private members of the class to compare them in any way.

**List with struct:**

![list_struct](https://user-images.githubusercontent.com/60934852/80228572-ddd19c80-8657-11ea-882a-370a11f3c08d.png)

**List with class:**

![list_class](https://user-images.githubusercontent.com/60934852/80228596-e629d780-8657-11ea-8299-c1e1f5406382.png)

After that i created an abstract class Human, which contained information about peoples' names and surnames. It was not used much, however this class could be implemented if i had other classes which could inherit the two things that the abstract human class offers: a name an a surname.

The code works, but its always better to check if no mistakes are left in the code, so i implemented testing. I used Clion and google testing to check if 2 functions were working well. Since i was working with big amounts of data which had to be sorted I decided to check if my sorting function was working. I test if the copy constructor works as well. For easier viewing everything is documented by doxygen.





