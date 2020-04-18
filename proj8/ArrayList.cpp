// Array List cpp


    std::ostream & operator<<(std::ostream & os, const ArrayList & arrayList) {
		DataType * temp = m_array;
		
		for (size_t i = 0; i < m_size; i++) {
			
			os << *temp << endl;
			temp++;
		}
							   
	}
						   

    ArrayList() :m_maxsize(0) {
		m_array = NULL;
		m_size = 0;
		
		cout << "Default" << endl;
	}
    ArrayList(size_t count, const DataType & value) :m_maxsize(count) {
		m_array = new (nothrow) DataType [count];
		
		DataType * temp = m_array;
		
		for (size_t i = 0; i < count; i++) {
			
		*temp = value;
		temp++;
		
		}
		
		m_size = count;
		cout << "Parameterized" << endl;
	}
    ArrayList(const ArrayList & other) :m_maxsize(other.m_maxsize) {
		
		m_array = new (nothrow) DataType [other.m_maxsize]
		
		DataType * temp = m_array;
		DataType * tempother = other.m_array;
		
		for (size_t i = 0; i < other.m_size; i++) {
			
			
		
	}
    ~ArrayList() {
		delete[] m_array;
		cout << "Dtor ArrayList";     
	}

    ArrayList & operator= (const ArrayList & rhs) {
		
		
		
	}


    DataType * front() {
		DataType * temp = m_array;
		
		if (temp == nullptr) {
			return nullptr;
		}
		
		return temp;
	}

	
    DataType * back() {
		DataType * temp = m_array;
		
		if (temp == NULL) {
			return NULL;
		}
		
		temp = temp + m_size - 1;
		
		return temp;
	}
	
    DataType * find(const DataType & target, DataType * & previous, const DataType * after = nullptr) {

			DataType * temp = m_array;
			
			for (size_t i = 0; i < m_size; i++) {
				
				if (*temp == target) {
					
					if (temp == m_array) {
						previous = nullptr;
					}	
					
					return temp;
				}
					
				temp++;
			}
			
			return nullptr;
	}
					
						
					
					
	
    DataType * insertAfter(DataType * target, const DataType & value) {}

			
    DataType * insertBefore(DataType * target, const DataType & value){}
    DataType * erase(DataType * target){}		     		

	
    DataType & operator[] (size_t position) {

			DataType * t = m_array;
			
			t = t + position;
			
			return *t;
	}
    const DataType & operator[] (size_t position) const {

			DataType * t = m_array;
			
			t = t + position;
			
			return *t;
	}
    
    size_t size() const {return m_size};									
    bool empty() const {

			if (m_array == nullptr) {
				return true;
			}
		
			else {
				return false;
			}
	}
    void clear() {

			resize (0);
			m_array = nullptr;
			
	}

  
    void resize(size_t count) {
	int check = 0;
	
	clone = new (nothrow) DataType [count];
	DataType * temp = clone;
	
	if (count < m_size) {
		
		for (size_t i = 0; i < count; i++) {
			
			*temp = m_array[i];
			temp++;
			
		}
		m_size = count;
	}
	
	else {
		
		for (size_t i = 0; i < m_size; i++) {
			
			*temp = m_array[i];
			temp++;
		}
	}
	
	delete[] m_array;
	
	m_array = new (nothrow) DataType [count];
	
	temp = m_array;
	
	for (size_t i = 0; i < m_size; i++) {
		
		*temp = *clone;
		temp++;
		clone++;
	}
	
	m_maxsize = count;
	
	delete[] clone;
	
	}			
			
	
	
	
	
    