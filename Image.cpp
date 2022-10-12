#include "Image.h"

Image::Image(unsigned char imageData){
    this->imageData = imageData;
    this->pixelData = pixelData;
    this->height = height;
    this->width = width;
}

unsigned char Image::getImageData(){
    return imageData;
}
unsigned char Image::getPixelData(){
    return pixelData;
}
unsigned char Image::getHeight(){
    return height;
}
unsigned char Image::getWidth(){
    return width;
}
