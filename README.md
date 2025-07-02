# Projeto de Monitoramento de Inclinação com MPU6050

![Diagrama de conexão](https://example.com/path/to/image.jpg) *(opcional: incluir imagem das conexões)*

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
