#!/usr/bin/python3.6
# -*- coding: iso-8859-1 -*-

import tkinter
class window_tk(tkinter):
    def __init__(self,parent):
        tkinter.Tk.__init__(self,parent)
        self.parent = parent
        self.initialize()
    def initialize(self):
        self.grid()
        self.entry = tkinter.Entry(self)
        self.entry.grid(column=0, row=0, sticky='EW')
        button = tkinter.Button(self, text=u"Click me !")
        button.grid(column=1, row=0)

        label = tkinter.Label(self,
                              anchor="w",fg="white",bg="blue")
        label.grid(column=0,row=1,columnspan=2,sticky='EW')
        self.grid_columnconfigure(0, weight=1)



if __name__ == "__main__":
    app = window_tk(None)
    app.title('my application')
    app.mainloop()