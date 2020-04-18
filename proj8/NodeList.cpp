//nodelist cpp

#include "DataType.h"
#include "NodeList.h"
#include "ArrayList.h"
#include <

 NodeList();								    		  //(1)
    NodeList(size_t count, const DataType & value) {} //(2)
    NodeList(const NodeList & other){}					  //(3)
    ~NodeList(){}						   			  //(4)

    NodeList & operator= (const NodeList & rhs){}		  //(5)

    Node * front(){}					    		  //(6)
    Node * back(){}									  //(7)
	
    Node * find(const DataType & target,				  //(8)
                Node * & previous,
                const Node * after = nullptr){}	
	
    Node * insertAfter(Node * target,    		          //(9)
                       const DataType & value){}	    
    Node * insertBefore(Node * target,    	              //(10)
                        const DataType & value){}
    Node * erase(Node * target){}			              //(11)

	
    DataType & operator[] (size_t position){}			  //(12a)
    const DataType & operator[] (size_t position) const{}  //(12b)
    
    size_t size() const{}								  //(13)
    bool empty() const{}								  //(14)
    void clear(){}						