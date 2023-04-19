import sys 
import pygame as pg
pg.init()

# class Rectangle:
#     def __init__(self,x=0,y=0,w=0,h=0):
#         self.x = x # Position X
#         self.y = y # Position Y
#         self.w = w # Width
#         self.h = h # Height

#     def draw(self,screen):
#         pg.draw.rect(screen,(0,20,220),(self.x,self.y,self.w,self.h))

# class Button(Rectangle):
#     def __init__(self, x=0, y=0, w=0, h=0):
#         Rectangle.__init__(self, x, y, w, h)
    
#     def isMouseOn(self):
        
#         pass

run = True
win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))

while(run):
    screen.fill((255, 255, 255))
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            run = False
        if event.type == pg.KEYDOWN and event.key == pg.K_d: #ปุ่มถูกกดลงและเป็นปุ่ม D
            print("Key D down")
        if event.type == pg.KEYUP and event.key == pg.K_a: #ปุ่มถูกปล่อยและเป็นปุ่ม A
            print("Key A up")