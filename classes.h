#include <iostream>
#include <vector>
#include <algorithm>
#include <optional>

using namespace std;

class book
{

    friend class storage;
    friend ostream &operator<<(ostream &, book &);

    template <class V, class I>
    friend optional<V> find(vector<V>, I);

    template <class V, class I>
    friend void remove_elements_by_id(vector<V>&, I);

private:
    int ID;
    string title;
    string author;
    int available_copies;
    bool is_sellable;

public:
    book(int, string, string, int, bool);
    book();
    // ~book();
};
class storage
{
    friend string check_Item_status(bool);
    template <class V, class I>
    friend void remove_elements_by_id(vector<V>&, I);
    friend bool regex_search_pattern(string,string);

private:
    vector<book> books;

public:
    static int id_generator;
    void add_book(book &);
    void add_book();
    void update_book(int);
    void delete_book(int);
    void all_books();
    void show(int);
    void search();
};