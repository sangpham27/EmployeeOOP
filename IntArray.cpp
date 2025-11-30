#include "IntArray.h"
#include <stdio.h>
IntArray::IntArray()
{
    m_array = NULL;
    m_size = 0;
}
// BAT BUOC phai CO khi co thanh phan la con tro (cap phat dong)
IntArray::IntArray(const IntArray& b) {
    m_size = b.m_size;
    if (m_size > 0) {
        m_array = new int[m_size];
        for (int i = 0; i < m_size; i++) {
            m_array[i] = b.m_array[i];
        }
    } else {
        m_array = NULL;
    }
}

void IntArray::Add(int value) {
    int* newArray = new int[m_size + 1];
    if (m_size > 0) {
        for(int i = 0; i < m_size; i++) {
            newArray[i] = m_array[i];
        }
    }
    newArray[m_size] = value;
    delete[] m_array;
    m_array = newArray;
    m_size++;
}

int IntArray::getSize() {
    return m_size;
}

int& IntArray::operator[](int index) {
    if (index < 0 || index >= m_size) throw "out of index";
    return m_array[index];
}
// BAT BUOC phai CO khi co thanh phan la con tro (cap phat dong)
void IntArray::operator=(const IntArray& b) {
    if (this == &b) return; // check for self-assignment
    delete[] m_array; // free existing resource
    m_size = b.m_size;
    if (m_size > 0) {
        m_array = new int[m_size];
        for (int i = 0; i < m_size; i++) {
            m_array[i] = b.m_array[i];
        }
    } else {
        m_array = NULL;
    }
}
// BAT BUOC phai CO khi co thanh phan la con tro (cap phat dong)
IntArray::~IntArray() {
    delete[] m_array;
}