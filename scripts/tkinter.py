from Tkinter import *

root = Tk()

text1 = Text(root, height=20, width=30)
photo=PhotoImage(file='./inter.png')
text1.insert(END,'\n')
text1.image_create(END, image=photo)

text1.pack(side=LEFT)

text2 = Text(root, height=20, width=50, foreground='blue')
scroll = Scrollbar(root, command=text2.yview)
text2.configure(yscrollcommand=scroll.set)
text2.tag_configure('bold_italics', font=('Arial', 12, 'bold', 'italic'))
text2.tag_configure('big', font=('Verdana', 20, 'bold'))
text2.tag_configure('color', foreground='black', 
						font=('Tempus Sans ITC', 12, 'bold'))
text2.tag_bind('follow', '<1>', lambda e, t=text2: t.insert(END, "PAZZA INTER AMALA!"))
text2.insert(END,'\n FC INTER\n', 'big')
about = """F.C. Internazionale Milano, commonly referred to as Internazionale or simply Inter and colloquially known as Inter Milan 
outside Italy, is a professional Italian football club based in Milan, Lombardy. 
The club has played continuously in the top tier of the Italian football league system
 since its debut in 1909.

"""
text2.insert(END, about, 'color')
text2.insert(END, 'moto\n', 'follow')
text2.pack(side=LEFT)
scroll.pack(side=RIGHT, fill=Y)

root.mainloop()