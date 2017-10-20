#!/usr/bin/env python

import os, sys
from snack import *

screen = SnackScreen()
g = Grid(2, 2)
g.setField(EntryWindow(40, 1, "Enter:") , 0, 0)
screen.gridWrappedWindow(g, "Title")
f = Form()
f.add(g)
f.run()
screen.popWindow()
screen.finish()