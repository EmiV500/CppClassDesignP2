#include "Metadata.h"
#include <iostream>

Metadata::Metadata(std::string fileName, std::string imageType, std::string authorName,
    int dateCreated, int imageWidth, int imageLength, int apertureSize, int isoValue,
    double size, double exposureTime, bool flashEnabled) 
    : _fileName{ fileName }, _imageType{ imageType }, _authorName{ authorName },
    _dateCreated{ dateCreated }, _imageWidth{ imageWidth }, _imageLength{ imageLength },
    _apertureSize{ apertureSize }, _isoValue{ isoValue }, _size{ size }, _exposureTime { exposureTime },
    _flashEnabled{ flashEnabled } { }

std::string Metadata::getFileName() { return _fileName; }
std::string Metadata::getImageType() { return _imageType; }
std::string Metadata::getAuthorName() { return _authorName; }
int Metadata::getDateCreated() { return _dateCreated; }
int Metadata::getImageWidth() { return _imageWidth; }
int Metadata::getImageLength() { return _imageLength; }
int Metadata::getApertureSize() { return _apertureSize; }
int Metadata::getISOValue() { return _isoValue; }
double Metadata::getSize() { return _size; }
double Metadata::getExposureTime() { return _exposureTime; }
bool Metadata::isFlashEndabled() { return _flashEnabled; }

void Metadata::setFileName(std::string fileName) {
    _fileName = fileName;
}
void Metadata::setImageType(std::string imageType) {
    if(imageType == "PNG" || imageType == "GIF" || imageType == "JPEG") {
        _imageType = imageType;
    }
}
void Metadata::setAuthorName(std::string authorName) {
    _authorName = authorName;
}
void Metadata::setDateCreated(int date) {
    if(date > 0) {
        if(date / 10'000 <= 12 && date / 10'000 >= 1) {
            if(date / 100 <= 31 && date / 100 >= 1) {
                 _dateCreated = date;
            }
        }
    }
}
void Metadata::setImageWidth(int imageWidth) {
    _imageWidth = (imageWidth > 0) ? imageWidth : _imageWidth;
}
void Metadata::setImageLength(int imageLength) {
    _imageLength = (imageLength > 0) ? imageLength : _imageLength;
}
void Metadata::setApertureSize(int apertureSize) {
    _apertureSize = (apertureSize > 0) ? apertureSize : _apertureSize;
}
void Metadata::setISOValue(int isoValue) {
    _isoValue = (isoValue > 0) ? isoValue : _isoValue;
}
void Metadata::setSize(double size) {
    _size = (size > 0) ? size : _size;
}
void Metadata::setExposureTime(double exposureTime) {
    _exposureTime = (exposureTime < 1 && exposureTime > 0) ? exposureTime : _exposureTime;
}
void Metadata::setFlashEndabled(bool flashEnabled) {
    _flashEnabled = flashEnabled;
}

void printMetadata(Metadata metadata) {
    std::cout << "File Name: " << metadata.getFileName() << "\n";
    std::cout << "Image Type: " << metadata.getImageType() << "\n";
    std::cout << "Date Created: " << metadata.getDateCreated() / 10'000 << "/" << (metadata.getDateCreated() -  ((metadata.getDateCreated() / 10'000) * 10'000 ))/ 100 << "/" << metadata.getDateCreated() % 100 << "\n";
    std::cout << "Size: " << metadata.getSize() << "MB" << "\n";
    std::cout << "Author Name: " << metadata.getAuthorName() << "\n";
    std::cout << "Image Dimensions: " << metadata.getImageWidth() << " by " << metadata.getImageLength() << "\n";
    std::cout << "Aperture Size: f/" << metadata.getApertureSize() << "\n";
    std::cout << "Exposure Time: " << metadata.getExposureTime() << "\n";
    std::cout << "ISO Value: " << metadata.getISOValue() << "\n";
    std::string flash = (metadata.isFlashEndabled() ? "true" : "false");
    std::cout << "Flash Enabled: " << flash << "\n";
    
}