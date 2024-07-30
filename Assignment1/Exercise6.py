def isLandscape(width, height):
    if width>height:
        print("Landscape")
    else:
        print("Portrait")
        
        
width=input("Enter the width of the image: ")
height=input("Enter the height of the image: ")

isLandscape(int(width),int(height))