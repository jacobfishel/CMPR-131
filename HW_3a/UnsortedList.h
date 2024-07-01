#ifndef UNSORTEDLIST_H
#define UNSORTEDLIST_H

const int MAX_SIZE = 10;

class UnsortedList {

  public:
    UnsortedList();
    ~UnsortedList();

    void insertItem(int item);
    void deleteItem(int item);

    bool isFull();
    bool isEmpty();

  private:
    int numbers[MAX_SIZE];
    int length;

};

#endif // UNSORTEDLIST_H
