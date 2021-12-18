#include <string>

class Url {
public:
    Url(std::string url);

    std::string getUrl();
    std::string getScheme();
    std::string getAuthority();
    std::string getPath();
private:
    std::string _url, _scheme, _authority, _path;
};