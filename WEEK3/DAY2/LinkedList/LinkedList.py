#Class Node
class Node:
    #Function Node
    def __init__(self,data):
        self.data = data
        self.next = None

#LinkedList class and print
class LinkedList:
    def __init__(self):
        self.head = None
    
    def printList(self):
        temp = self.head
        while temp != None:
            print(temp.data)
            temp = temp.next

#Execution
if __name__ == "__main__":
    llist = LinkedList()
    llist.head = Node(1)
    second = Node(2)
    third = Node(3)
    llist.head.next = second
    second.next = third
    llist.printList()