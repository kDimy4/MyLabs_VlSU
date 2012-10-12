#include <iostream>


using namespace std;

template <class T>
class List
{
    public:
    List()
    {
        front = NULL;
    }
    void push_front(T new_elem)
    {
        _list *add_elem = new _list;
        add_elem->inf=new_elem;
        add_elem->next =  front;
        front = add_elem;
    }
    void pop_front()
    {
    _list *del = front;
    front = front->next;
    delete del;
    }
    void clear_list()
    {
        while(front)
        {
            pop_front();
        }
    }
    int find(T val)
    {
         _list *elem = front;
         int i=1;
        while(elem)
        {
            if (elem->inf==val) return i;
            i++;
            elem=elem->next;
        }
        return 0;
    }
    void show()
    {
        _list *elem = front;
        while(elem)
       {
            cout<<elem->inf<<" ";
           elem=elem->next;
       }
    }
    ~List()
    {
        clear_list();
    }
    private:
    struct _list{T inf; _list *next;} *front;
};

int main()
{
   // List<int> ilist;
    //for(int i=0;i<10;i++)
    //{
     //   ilist.push_front(i);
    //}
    //ilist.show();
    //cout<<endl;
    //ilist.pop_front();
    //ilist.show();
    //cout<<endl<<ilist.find(5);
    int k =0;
    int t=-1;
    1+(k=t)?cout<<"Yes":cout<<k;
    return 0;
}


