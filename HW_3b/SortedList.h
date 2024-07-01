#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

const int MAX_SIZE = 10;

class SortedList {

  public:
    SortedList();
    ~SortedList();

    void insertItem(int item);
    void deleteItem(int item);

    bool isFull() const;
    bool isEmpty() const;

    int binarySearch(int number);
    int linearSearch(int number);
    void displayList() const;

  private:
    int numbers[MAX_SIZE];
    int length;

};

#endif // UNSORTEDLIST_H
