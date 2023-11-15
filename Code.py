# -*- coding: utf-8 -*-
# @Author: Your name
# @Date:   2023-10-30 09:49:21
# @Last Modified by:   Your name
# @Last Modified time: 2023-11-13 18:28:45
class Node:
    def __init__(self, char):
        self.char = char
        self.prev = None
        self.next = None
class TextEditor:
    def __init__(self):
        self.cursor = None
        self.head = None
        self.undo_stack = []
        self.redo_stack = []

    def insert(self, text):
        for char in text:
            new_node = Node(char)
            if self.cursor is None:
                self.head = new_node
                self.cursor = new_node
            else:
                new_node.prev = self.cursor
                new_node.next = self.cursor.next
                if self.cursor.next:
                    self.cursor.next.prev = new_node
                self.cursor.next = new_node
                self.cursor = new_node
            self.undo_stack.append(('insert', new_node))
            self.redo_stack.clear()

    def delete(self, count):
        for _ in range(count):
            if self.cursor and self.cursor.next:
                deleted_node = self.cursor.next
                self.cursor.next = deleted_node.next
                if deleted_node.next:
                    deleted_node.next.prev = self.cursor
                self.undo_stack.append(('delete', deleted_node))
                self.redo_stack.clear()

    def move_cursor(self, count):
        for _ in range(abs(count)):
            if count > 0 and self.cursor and self.cursor.next:
                self.cursor = self.cursor.next
            elif count < 0 and self.cursor and self.cursor.prev:
                self.cursor = self.cursor.prev

    def undo(self):
        if self.undo_stack:
            operation, node = self.undo_stack.pop()
            if operation == 'insert':
                if node.prev:
                    node.prev.next = node.next
                else:
                    self.head = node.next
                if node.next:
                    node.next.prev = node.prev
                self.cursor = node.prev
            elif operation == 'delete':
                if node.prev:
                    node.prev.next = node
                else:
                    self.head = node
                if node.next:
                    node.next.prev = node
                self.cursor = node
            self.redo_stack.append((operation, node))

    def redo(self):
        if self.redo_stack:
            operation, node = self.redo_stack.pop()
            if operation == 'insert':
                if node.prev:
                    node.prev.next = node
                else:
                    self.head = node
                if node.next:
                    node.next.prev = node
                self.cursor = node
            elif operation == 'delete':
                if node.prev:
                    node.prev.next = node.next
                else:
                    self.head = node.next
                if node.next:
                    node.next.prev = node
                self.cursor = node.next
            self.undo_stack.append((operation, node))

    def get_text(self):
        result = ""
        current_node = self.head
        while current_node:
            result += current_node.char
            current_node = current_node.next
        return result

# Example Usage:
text = TextEditor()

text.insert("hello")

text.move_cursor(-2)

text.delete(2)

print(text.get_text())

text.undo()
print(text.get_text())

text.undo()
print(text.get_text())

text.redo()

print(text.get_text())