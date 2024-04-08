import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class SinglyLinkedList {
    private Node head;

    SinglyLinkedList() {
        this.head = null;
    }

    void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
    }

    void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
        } else {
            newNode.next = head;
            head = newNode;
        }
    }

    void insertAtPosition(int data, int position) {
        if (position < 0) {
            System.out.println("Invalid position.");
            return;
        }
        if (position == 0) {
            insertAtBeginning(data);
        } else {
            Node newNode = new Node(data);
            Node temp = head;
            for (int i = 0; i < position - 1; i++) {
                if (temp == null) {
                    System.out.println("Position is out of bounds.");
                    return;
                }
                temp = temp.next;
            }
            if (temp == null) {
                System.out.println("Position is out of bounds.");
            } else {
                newNode.next = temp.next;
                temp.next = newNode;
            }
        }
    }

    void deleteAtPosition(int position) {
        if (position < 0 || head == null) {
            System.out.println("Invalid position or empty list.");
            return;
        }
        if (position == 0) {
            head = head.next;
        } else {
            Node temp = head;
            for (int i = 0; temp != null && i < position - 1; i++) {
                temp = temp.next;
            }
            if (temp == null || temp.next == null) {
                System.out.println("Position is out of bounds.");
            } else {
                temp.next = temp.next.next;
            }
        }
    }

    void display() {
        Node temp = head;
        if (temp == null) {
            System.out.println("List is empty.");
        } else {
            System.out.println("Linked List:");
            while (temp != null) {
                System.out.print(temp.data + " ");
                temp = temp.next;
            }
            System.out.println();
        }
    }
}

class main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        SinglyLinkedList list = new SinglyLinkedList();

        while (true) {
            System.out.println("\nMENU:");
            System.out.println("1. Insert node at beginning");
            System.out.println("2. Insert node at end");
            System.out.println("3. Insert node at particular position");
            System.out.println("4. Delete node from particular position");
            System.out.println("5. Display linked list");
            System.out.println("6. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter data to insert at beginning: ");
                    int dataBegin = scanner.nextInt();
                    list.insertAtBeginning(dataBegin);
                    break;
                case 2:
					System.out.print("Enter data to insert at end: ");
                    int dataEnd = scanner.nextInt();
                    list.insertAtEnd(dataEnd);
                    break;
                case 3:
                    System.out.print("Enter data to insert: ");
                    int dataPos = scanner.nextInt();
                    System.out.print("Enter position to insert: ");
                    int position = scanner.nextInt();
                    list.insertAtPosition(dataPos, position);
                    break;
                case 4:
                    System.out.print("Enter position to delete: ");
                    int deletePos = scanner.nextInt();
                    list.deleteAtPosition(deletePos);
                    break;
                case 5:
                    list.display();
                    break;
                case 6:
                    System.out.println("Exiting...");
                    scanner.close();
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Please enter a valid option.");
            }
        }
    }
}