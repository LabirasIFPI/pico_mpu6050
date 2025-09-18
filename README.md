# Integração do sensor MPU6050 no RaspberryPi Pico W (Pico SDK)

![Diagrama de conexão](https://user-images.githubusercontent.com/107638696/241324971-43b8fe88-447d-4c2d-9296-4b3aaa50f4ce.png)

Este repositório contém um projeto em *C* para utilizar o sensor de pressão e temperatura *MPU6050* com a placa *Raspberry Pi Pico*.


> ⚠️ *Observação:* Para detalhes maiores e aprofundados do uso do sensor, veja documentação com explicações e datasheet de referência [Sensor giroscópio ](https://www.notion.so/labiras/Sensor-Girosc-pio-MPU6050-22967aa6595380b2b38cc1529256ba44).
---

## ✨ Funcionalidades

- Leitura de dados brutos de aceleração e giroscópio do MPU6050.  
- Cálculo de inclinação (ângulo) com base nos valores lidos do sensor.  
- Alertas quando os valores ultrapassam limiares definidos.  
- Comunicação via *I2C* com a Raspberry Pi Pico W.  
- Código modular, exemplo funcional e reutilizável.  

---

## 🛠️ Hardware Necessário
- Raspberry Pi *Pico ou Pico W*  
- Módulo Sensor de giroscópio *MPU6050*  
- *Cabos/Jumpers* para conexão  
---

## 📦 Software e Dependências
- *Visual Studio Code*  
- *Extensão Raspberry Pi Pico/W* para VS Code (Recomendado)  
- *Raspberry Pi Pico SDK, **ARM GCC Compiler* e *CMake*  
---

## 🔌 Conexões
Conecte o sensor *MPU6050* à Raspberry Pi Pico, conforme a tabela abaixo:

| Pino do Pico W | Pino do MPU6050 | Função        |
|----------------|------------------|----------------|
| GPIO2          | SDA              | Linha de dados |
| GPIO3          | SCL              | Clock do I2C   |
| 3.3V           | VCC              | Alimentação    |
| GND            | GND              | Terra          |

---

## 🚀 Como Compilar e Executar

### Usando o VS Code com a Extensão Raspberry Pi Pico (Recomendado)
1. *Abra o Projeto*: No VS Code, abra a pasta raiz do projeto.  
2. *Prepare a Placa: Coloque a Raspberry Pi Pico em modo **BOOTSEL* (pressione e segure o botão enquanto conecta o cabo USB).  
3. *Envie o Código: Clique no botão **Run* na barra de status.  
   - A extensão compilará o código e fará o upload automaticamente.  
4. *Visualize a Saída: Abra o **monitor serial* integrado do VS Code para ver as leituras de pressão e temperatura.  

### Usando a Linha de Comando
1. *Clone o repositório*:
   bash
   git clone https://github.com/LabirasIFPI/pico_mpu6050.git
   cd pico_mpu6050
    

2. *Criar e configurar BUILD*
    bash 
    mkdir build
    cd build
    
3. *Compile*
    bash
    make
    

4. *Carregue o firmware*
   -   Coloque a Pico em modo *BOOTSEL*.
    -    Copie o arquivo build/seu_projeto.uf2 para o drive que a Pico montou no seu sistema.



## 📁Estrutura do repositório
-  Certifique-se de manter a estrutura do repositório nesse formato
  ``` bash

├── .vscode/               # Configurações do VS Code
├── build/                 # Diretório de compilação (ignorado)
├── src/                   # Arquivos de código-fonte (.c)
│   ├── mpu6050.c
│   └── mpu6050.h 
├── .gitignore             # Arquivos ignorados pelo Git
├── mpusensor.c            # Arquivo principal(main) para o projeto
├── CMakeLists.txt         # Configuração do CMake
├── LICENSE                # Licença do projeto
└── pico_sdk_import.cmake  # Script para importar o SDK do Pico
```

## 📄 Licença
Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.

## 🚨 Limiares de Alerta
**Condição ->	Ação**  
Ângulo > 15° -> Exibe alerta no terminal  
Ângulo < 5°	-> Mostra valor preciso  

Projetado por [@antoniojosemota](https://github.com/antoniojosemota), [@enzomello](https://github.com/EnzoMello) e [@victordev018](https://github.com/victordev018).
