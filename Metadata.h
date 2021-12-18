#include <string>

class Metadata {
public:
    Metadata(std::string fileName, std::string imageType, std::string authorName,
    int dateCreated, int imageWidth, int imageLength, int apertureSize, int isoValue,
    double size, double exposureTime, bool flashEnabled );

    std::string getFileName();
    std::string getImageType();
    std::string getAuthorName();
    int getDateCreated();
    int getImageWidth();
    int getImageLength();
    int getApertureSize();
    int getISOValue();
    double getSize();
    double getExposureTime();
    bool isFlashEndabled();

    void setFileName(std::string fileName);
    void setImageType(std::string imageType);
    void setAuthorName(std::string authorName);
    void setDateCreated(int dateCreated);
    void setImageWidth(int imageWidth);
    void setImageLength(int imageLength);
    void setApertureSize(int apertureSize);
    void setISOValue(int isoValue);
    void setSize(double size);
    void setExposureTime(double exposureTime);
    void setFlashEndabled(bool flashEnabled);
    

private:
    std::string _fileName, _imageType, _authorName;
    int _dateCreated, _imageWidth, _imageLength, _apertureSize, _isoValue;
    double _size, _exposureTime;
    bool _flashEnabled;
};

void printMetadata(Metadata metadata);