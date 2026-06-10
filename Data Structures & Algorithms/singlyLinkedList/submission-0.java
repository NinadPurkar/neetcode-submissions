class Node
{
    int val;
    Node next;

    public Node(int val)
    {
        this.val = val;
        this.next = null;
    }
    public Node(int val, Node next)
    {
        this.val = val;
        this.next = next;
    }
}
class LinkedList {

    private Node head;
    private Node tail;

    public LinkedList() {

        this.head = new Node(-1);
        this.tail = this.head;
    }

    public int get(int index) {
        Node current = head.next;
        int i=0;
        while(current != null)
        {
            if (i==index)
            {
                return current.val;
            }
            i++;
            current = current.next;
        }
        return -1;
    }

    public void insertHead(int val) 
    {
        Node newNode = new Node(val);
        newNode.next = head.next;
        head.next =newNode;
        if (newNode.next ==null)
        {
            tail = newNode;

        }
    }

    public void insertTail(int val) 
    {
        this.tail.next = new Node(val);
        this.tail = this.tail.next;

    }

    public boolean remove(int index) {
        int i =0;
        Node current = this.head;
        while(i<index && current != null)
        {
            i++;
            current = current.next;
        }
        if (current != null && current.next != null)
        {
            if (current.next == this.tail)
            {
                this.tail = current;
            }
            current.next = current.next.next;
            return true;
        }
        return false;
    }

    public ArrayList<Integer> getValues() {
        ArrayList<Integer> res = new ArrayList<>();
        Node current = this.head.next;
        while(current != null)
        {
            res.add(current.val);
            current = current.next;
        }
        return res;
    }
}
