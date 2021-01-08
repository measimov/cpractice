import tkinter
from tkinter import ttk

root = tkinter.Tk()

root.title("尝试")
#窗口大小
def combo(parent):
    value = tkinter.StringVar()
    box = ttk.Combobox(parent, textvariable=value, state='readonly')
    box['values'] = ('A', 'B', 'C')
    box.current(0)
    box.grid(column=0, row=0)

combo(root)

root.mainloop()