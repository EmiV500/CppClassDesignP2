#include "Url.h"

Url::Url(std::string url)
   : _url{ url } {

    int authorityStart = 0;
    int pathStart = 0;

    // Calculates where the scheme ends and creates a substring of the scheme
    for(int schemeEnd = 0; 0 < _url.size(); schemeEnd++) {
        if(_url.at(schemeEnd) == ':') {
            _scheme = _url.substr(0, schemeEnd + 1);
            authorityStart = schemeEnd + 1;
            break;
        }
    }

    // Ensures that the end of the scheme is where the authority starts
    for(int testAuthority = authorityStart; testAuthority < _url.size() - 1; testAuthority++) {
        if(_url.at(testAuthority) == '/' && _url.at(testAuthority + 1) == '/') {
            break;
        } else {
            authorityStart = testAuthority;
        }
    }

    // Calculates where the authority ends and creates a substring of the authority 
    for(int authorityEnd = authorityStart + 2; authorityEnd < _url.size(); authorityEnd++) {
        if(_url.at(authorityEnd) == '/') {
            _authority = _url.substr(authorityStart, authorityEnd - authorityStart);
            pathStart = authorityEnd;
            break;
        }
    }

    // Ensures that the end of the authority is where the path starts
    for(int testPath = pathStart; testPath < _url.size() - 1; testPath++) {
        if(_url.at(testPath) == '/') {
            break;
        } else {
            pathStart = testPath;
        }
    }

    // Creates a substring of the path
    _path = _url.substr(pathStart, _url.size());
    
}

std::string Url::getUrl() { return _url; }
std::string Url::getScheme() { return _scheme; }
std::string Url::getAuthority() { return _authority; }
std::string Url::getPath() { return _path; }