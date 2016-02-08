![dependencies](https://david-dm.org/UlisesGascon/DHT11-con-Node.svg)

# DHT11 con Node

**DHT11** es un sensor que mide la humedad y la temperatura del ambiente.

La idea de este repositorio es poder leer esos datos con la consola de Node.js usando la comunicación serial.

### Dependencias:
- [serialport](https://github.com/voodootikigod/node-serialport) de [Chris Williams](https://github.com/voodootikigod)
- [Librería DHT de Adafruit](https://learn.adafruit.com/dht/overview)

### Instalación

**Conexiones:**

![hardware_img](https://raw.githubusercontent.com/UlisesGascon/DHT11-con-Node/master/IMG/hardware.jpg)

- VCC (DHT11) a 5v (Arduino)
- GND (DHT11) a GND (Arduino)
- DATA (DHT11) al pin 4 (Arduino)

**Instalacion:**

1 - Abre el archivo *[dht11_arduino](https://github.com/UlisesGascon/DHT11-con-Node/blob/master/Arduino/dht11_arduino.ino)* y subelo al Arduino.

2 - Instala las dependencias del proyectos usando npm.
```
npm install
```

3 - Ejecuta el script sin argumentos para averiguar el puerto donde esta el Arduino
```
node index
```

4 - Ejecuta el script con el puerto donde esta el Arduino como argumento para empezar la escucha de la comunicación serial.
```
node index /dev/cu.wchusbserial1410
```
