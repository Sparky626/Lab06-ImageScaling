#pragma once
class Image{

    unsigned char pixelData;
    unsigned char imageData;
    unsigned char width;
    unsigned char height;

    
    public:
    Image(unsigned char);
    unsigned char getPixelData();

    unsigned char getImageData();

    unsigned char getWidth();

    unsigned char getHeight();

    void setImageData(unsigned char *newData);

};




