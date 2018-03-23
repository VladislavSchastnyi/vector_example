#include <iostream>

class vector_t
{
private:
	int * elements_;
	std::size_t size_;  //  выделение памяти определённого размера
	std::size_t capacity_;
public:
	vector_t();
	vector_t(vector_t const & other);
	vector_t & operator =(vector_t const & other);
	~vector_t();

	std::size_t size() const;
	std::size_t capacity() const;

	void push_back(int value);  // перераспределение памяти(увеличение "ячеек" на 2 если size=capacity)
	void pop_back();  //  удаление элементов(уменьшение "ячеек" в 4 раза если 4*size=capacity)

	int & operator [](std::size_t index);  //  индексикация(обращение)
	int operator [](std::size_t index) const;

	bool operator ==(vector_t const & other) const;  //  bool-оператор сравнения
};

bool operator !=(vector_t const & lhs, vector_t const & rhs);
