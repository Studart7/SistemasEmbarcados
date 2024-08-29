# Projeto de Sistemas Embarcados - Quinta-Feira 

### Projeto: Detector de Colisão 💥 🚗 

### Requisitos funcionais do sistema 📝
#### Comunicação e Acesso à Rede 📡
- [ ] O sistema deve ser capaz de enviar e receber informações por meio de redes móveis (4G/5G) ou Wi-Fi.
 - [ ] O sistema deve permitir a comunicação direta com serviços de emergência através de chamadas telefônicas automáticas em caso de colisão grave.

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
