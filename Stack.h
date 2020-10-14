#pragma once
template <typename T>
class Stack
{
private:
	int capacity;
	int position;
	T* dynamic_array;
	void ensureCapacity()
	{
		if ((position + 2) > capacity)
		{
			int oldCapacity = capacity;
			capacity *= 2;
			T* second_array = new T[capacity];
			for (int index = 0; index < oldCapacity; index++) {
				second_array[index] = dynamic_array[index];
			}
			delete[] dynamic_array;
			dynamic_array = second_array;
		}
	}
public:
	Stack()
	{
		position = 0; capacity = 16; dynamic_array = new T[capacity];
	}
	~Stack() { delete[] dynamic_array; }
	void push(const T& newValue)
	{
		ensureCapacity();
		*(dynamic_array + position) = newValue;
		position++;
	};
	T pop()
	{
		if (position > 0)
		{
			auto value = *(dynamic_array + position  - 1);
			//*(dynamic_array + position) = nullptr;
			position = position == 0 ? 0 : position - 1;
			return value;
		}
	}
	int size() { return capacity; }
};

