#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;

struct Book
{
    std::string name;
    std::string author;
};

int main()
{
    vector<Book> books;
    Book book = {"c++", "bob"};
    Book book1 = {"java", "jame"};
    books.push_back(book);
    books.push_back(book1);

    for (auto it = books.begin(); it != books.end(); ++it)
    {
        auto author = it->author;
        if (author.begin() != author.end())
        {
            auto begin = author.begin();
            *begin = toupper(*begin);
        }
        it->author = author;
    }
    std::cout << books[0].author << " " << books[1].author << std::endl;
    return 0;
}