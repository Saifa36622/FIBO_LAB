import pygame as pg
win_x = 800
win_y = 480
screen = pg.display.set_mode((win_x, win_y))
posX = 200
posY = 30
acce = 1
v = 0
t = 1

while(1):
    screen.fill((255, 255, 255))
        
    pg.draw.circle(screen,(100,100,100),(posX,posY),20)
    
    posY += (v*t) + (0.5*(acce)*(t*t))
    v = acce * t

    # posY += y
    # y += 1

    if (posY >= win_y):
        pg.quit()
        exit()

    pg.time.delay(10) #หน่วงเวลา

    pg.display.update()
    
    for event in pg.event.get():
        if event.type == pg.QUIT:
            pg.quit()
            exit()