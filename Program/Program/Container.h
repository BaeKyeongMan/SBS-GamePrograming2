template <typename T>
class Container
{
private:
	int size;
	int index;
	T* list;
public:
	Container(int allocateSize);
	
	void Push(T data);

	~Container();

};



