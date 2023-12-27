#pragma once
#include "book.h"
#include "subscription.h"
#include "buy_history.h"

class storage
{
    friend string check_Item_status(bool);
    friend bool regex_search_pattern(string, string);

private:
    vector<book> books;
    vector<subscription> subs;
    vector<buy_history> sales;


public:
    static int id_generator;
    static int ids_subs;
    void add_book(book &);
    void add_book();
    void update_book(int);
    void delete_book(int);
    void all_books();
    void show_book(int);
    void search();

    void all_subs();
    void show_sub(int);

    void add_sub(subscription &);
    void add_sub();
    void update_sub(int);
    void delete_sub(int);

    void buy_book();
    void show_all_sales();
};
