# Integração do sensor MPU6050 no RaspberryPi Pico W (Pico SDK)

![Diagrama de conexão](https://user-images.githubusercontent.com/107638696/241324971-43b8fe88-447d-4c2d-9296-4b3aaa50f4ce.png)

## 📌 Visão Geral
Sistema embarcado para Raspberry Pi Pico que monitora ângulos de inclinação usando o sensor MPU6050, com alertas para limites pré-definidos.

## 🛠️ Hardware Necessário
| Componente         | Quantidade |
|--------------------|------------|
| Raspberry Pi Pico  | 1          |
| Sensor MPU6050     | 1          |
| Cabos jumper       | 4          |
| Protoboard         | 1 (opcional)|

## 🔌 Esquema de Conexões
```plaintext
PICO       MPU6050
-------------------
GPIO2  →   SDA
GPIO3  →   SCL
3.3V   →   VCC
GND    →   GND
```

## ⚙️ Configuração
Conectar os componentes conforme Esquemas de Conexão

Compilar o código com o SDK do Pico

Gravar o firmware na placa

Monitorar via terminal serial (115200 bps)

## 📚 Documentação das Funções
**mpu6050_init**
- Inicializa interface I2C a 400kHz

- Configura pinos GPIO2 (SDA) e GPIO3 (SCL)

- Ativa o sensor (registrador 0x6B)

**mpu6050_read_raw()**
- Lê registradores 0x3B a 0x40

- Retorna valores brutos de 16 bits para cada eixo
  
**mpu6050_get_inclination()**
- Calcula a iclinação no eixo X

## 🚨 Limiares de Alerta
**Condição ->	Ação**  
Ângulo > 15° -> Exibe alerta no terminal  
Ângulo < 5°	-> Mostra valor preciso  

Projetado por [@antoniojosemota](https://github.com/antoniojosemota), [@enzomello](https://github.com/EnzoMello) e [@victordev018](https://github.com/victordev018).
