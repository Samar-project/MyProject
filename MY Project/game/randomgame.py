import pygame

from pygame.locals import *
# from PIL import Image,ImageTk

class Square(pygame.sprite.Sprite):
    def __init__(self):
        super(Square,self).__init__()
        self.surf =pygame.Surface((25,800))
        self.surf.fill((0,200,255))
        self.rect =self.surf.get_rect()

class bg_image(pygame.sprite.Sprite):       #bg image
    def __init__(self):
        self.image = pygame.image.load("D:\\RAJU\\game\\OIP_bg1.png")
        self.rect = self.image.get_rect()
        self.base_img=pygame.image.load("D:\\RAJU\\game\\base_img.png")
        self.base_rect=self.base_img.get_rect()
        

class phy(pygame.sprite.Sprite):
    def __init__(self):
        self.plyr_Xpos=0
        self.plyr_ypos=555
        plyr_gravity=0
        plyr_velocity=0
        plyr_jump=0
        if plyr_Ypos>555:
            plyr_gravity-=5
            plyr_Ypos-=plyr_gravity





pygame.init()
screen =pygame.display.set_mode((800,600))
square1=Square()

# color defining
black = (0, 0, 0)
green = (0, 255, 0)
blue = (0, 0, 128)

# x,y ordinate
x_val=800
y_val=600

# caption
pygame.display.set_caption("hello world") #game name

Font=pygame.font.Font('freesansbold.ttf', 16)
# Font=pygame.font.SysFont('timesnewroman',  30)
txt=Font.render("here the game", True, (225,22,22))
textRect=txt.get_rect()
textRect.center=(x_val/2,y_val/2)

 
bg_img = bg_image()#object for bg from bg_image class
ply_pos=phy()#object for physic from phy class
plyr_img=pygame.image.load("D:\\RAJU\\game\\player.png")
runn=True


while runn:
    
    
    # bg_img calling
    # screen.fill((255,100,0)) #bg color 
    x,y=0,0 #stage floor cordinate
    
    


    #img blitting
    screen.blit(bg_img.image, bg_img.rect)
    screen.blit(plyr_img, (phy.plyr_Xpos,phy.plyr_Ypos))
    screen.blit(txt,textRect) #txt
    screen.blit(square1.surf,(0,0)) #side wall

       
    for x in range(0,1800,40):  #stage floor 
        screen.blit(bg_img.base_img,(x,555))
        screen.blit(bg_img.base_img,(x+300,445))
        screen.blit(bg_img.base_img,(x+400,345))
        screen.blit(bg_img.base_img,(x+500,245))
        x+=x
    pygame.display.flip()
       
        


    for event in pygame.event.get():
        # if event():
        if event.type ==KEYDOWN:
            if event.key == K_BACKSPACE:
                runn=False
        elif event.type == QUIT:
            runn=False
        elif event.type==QUIT:
            pygame.quit()
            quit()
    pygame.display.flip()


