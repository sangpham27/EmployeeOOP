class IntArray {
    private:
        int* m_array;
        int m_size;
    public:
        IntArray();
        IntArray(const IntArray& b);
        ~IntArray();
        void Add(int value);
        int& operator[](int index);
        void operator=(const IntArray& b);
        int getSize();
};