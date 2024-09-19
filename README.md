# Projeto de Sistemas Embarcados - Quinta-Feira 

### Projeto: Detector de Colisão 💥 🚗 

### Requisitos funcionais do sistema 📝
#### Comunicação e Acesso à Rede 📡
- [ ] O sistema deve ser capaz de enviar e receber informações por meio de redes móveis (4G/5G) ou Wi-Fi.
- [ ] O sistema deve permitir a comunicação direta com serviços de emergência através de chamadas telefônicas automáticas em caso de colisão grave.
- [ ] O sistema utilizar o protoclo MQTT 

#### Configurações Personalizáveis ⚙️
- [ ] O sistema deve permitir ao usuário definir os contatos de emergência que serão notificados em caso de colisão.

#### Atualizações e Manutenção 🔄
- [ ] O sistema deve permitir atualizações automáticas ou manuais para melhorias contínuas e correções de bugs.

### Requisitos NÃO funcionais do sistema 📝

#### Detecção de Colisão ⚠️
- [ ] O sistema deve ter acesso às funcionalidades do dispositivo, como GPS, chamadas telefônicas, acelerômetro e giroscópio, e ser capaz de detectar colisões em tempo real utilizando esses sensores.
- [ ] O sistema deve diferenciar entre uma colisão real e falsos positivos (ex.: freada brusca).
- [ ] O sistema deve registrar dados de colisão (data, hora, velocidade, localização) para fins de análise.

#### Compatibilidade e Disponibilidade 🛠️
- [ ] O sistema deve ser compatível com o sistema operacional Android.
- [ ] O sistema deve estar disponível 99% do tempo para manter a integridade do usuário.

#### Facilidade de Uso e Implementação 🎯
- [ ] O sistema deve ser de fácil entendimento e implementação.

#### Tempo de Resposta ⏱️
- [ ] O sistema deve ser capaz de detectar uma colisão e iniciar o processo de verificação dentro de milissegundos.
- [ ] O sistema deve ligar após um timeout de 1 minuto se não obter nenhuma resposta.

#### Documentação do aplicativo
### Biblioteca
https://developer.android.com/develop/sensors-and-location/sensors/sensors_overview?hl=pt-br

- Acelerômetro
- Giroscópio

| Sensor                     | Tipo     | Descrição                                                                                  | Usos comuns                              |
|---------------------------|----------|--------------------------------------------------------------------------------------------|------------------------------------------|
| TYPE_ACCELEROMETER        | Hardware | Mede a força de aceleração em m/s² que é aplicada a um dispositivo todos os três eixos físicos (x, y e z), incluindo a força da gravidade. | Detecção de movimento (agitação, inclinação etc.). |
| TYPE_AMBIENT_TEMPERATURE  | Hardware | Mede a temperatura ambiente em graus Celsius (°C). Veja a observação abaixo.               | Monitoramento das temperaturas do ar.   |


#### Principais causas de acidente
| As causas que provocam mais acidentes | As causas que provocam mais mortes |
|---------------------------------------|------------------------------------|
| Falta de atenção (22.537 acidentes)   | Desobediência à sinalização (1.552 mortes) |
| Desobediência à sinalização (8.323 acidentes) | Falta de atenção (1.503 mortes) |
| Excesso de velocidade (6.742 acidentes) | Excesso de velocidade (677 mortes) |
| Não guardar distância segura (5.117 acidentes) | Ultrapassagem indevida (358 mortes) |
| Ingestão de álcool (5.101 acidentes)  | Ingestão de álcool (279 mortes) |
| Defeito no veículo (3.151 acidentes)  | Dormir na direção (227 mortes) |
| Dormir na direção (2.311 acidentes)   | Não guardar distância segura (112 mortes) |
| Ultrapassagem indevida (1.648 acidentes) | Defeito no veículo (112 mortes) |
| Defeito na via (1.474 acidentes)      | Defeito na via (74 mortes) |
| Animais na pista (1.213 acidentes)    | Animais na pista (51 mortes) |




