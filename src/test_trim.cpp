#include <iostream>
#include <regex>



static std::string trim(std::string str)
{
    return regex_replace(str, std::regex("(^[ ]+)|([ ]+$)"), "");
}


int main() {

    char t[] = "      C++";
std::cout << t;
    std::cout << trim(t);
    return 0;
}

/**
 * TODO:
 * 
 * 

-)gestire una risoluzione piu alta nel menu 
(ma bisogna modificare come è fatoo ora altrimenti lancia exception per core con risoluzioni basse)




 *  // settging volumen: :
 amixer set 'Playback' 20%-    meno
 amixer set 'Playback' 20%+     piu

suonare un file per fare sentire il rumore:

aplay /usr/share/sounds/alsa/Noise.wav

oppure converti il file wav in c array :
https://www.youtube.com/watch?v=1cWkjzU5vg8
e poi lo suoni con la libreria che hai già ... in imput.cpp


 luminosita:

 cat /sys/class/backlight/backlight/brightness
 echo 30 > /sys/class/backlight/backlight/brightness


---info


~/retrorun # lscpu | egrep 'Model name|Socket|Thread|NUMA|CPU\(s\)'
CPU(s):              4
On-line CPU(s) list: 0-3
Model name:          Cortex-A35
Thread(s) per core:  1
Socket(s):       


---info 2

cat /proc/cpuinfo | grep Hardware


 * 
*/
