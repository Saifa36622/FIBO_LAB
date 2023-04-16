import pygame as pg
win_x, win_y = 800, 480
screen = pg.display.set_mode((win_x, win_y))
posX, posY = 400, 240
x = 0
y = 0   
while(1):
    screen.fill((255, 255, 255))
    pg.draw.circle(screen,(100,100,100),(posX,posY),x)
    
    if (y == 0):
        x += 1
        if (x*2 > win_y):
            y = 1
    if (y ==1):
        x -= 1
        if (x <= 0):
            y = 0
    
    pg.time.delay(10) #หน่วงเวลา
    
    pg.display.update()
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()