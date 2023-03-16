import pygame as pg
import math
win_x = 800
win_y = 800

screen = pg.display.set_mode((win_x, win_y))

posX = 10
posY = 400

v = 0
t = 1
u = 25
theta = 55
x = 0
y = 0
while(1):

    screen.fill((255, 255, 255))
    
    pg.draw.circle(screen,(100,100,100),(posX+x,posY-y),20)
    
    
    x = u * math.cos(math.radians(theta)) * t
    y = (u * math.sin(math.radians(theta))*t) - (0.5*(t*t))
    t += 1

    if (posY-y >= win_y):
        pg.quit()
        exit()
    pg.time.delay(50) #หน่วงเวลา

    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()
