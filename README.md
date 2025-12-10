# Calabaza que emite sonido al detectar movimiento

Descripción
- **Qué hace:** Este proyecto usa un sensor PIR para detectar movimiento y hace sonar una calabaza (buzzer) con un patrón corto cuando se detecta movimiento. También imprime mensajes por el puerto serie.
- **Archivo principal:** `Prueba1_copy_20251210184415.ino`

Características
- Reproducción de 3 pitidos a 900 Hz cuando el PIR detecta movimiento.
- Pausa de 2 segundos para evitar reactivaciones inmediatas.
- Mensajes de diagnóstico vía `Serial` a 115200 baudios.

Componentes necesarios
- Placa Arduino (por ejemplo, **Arduino Mega** o cualquier placa con pines digitales 19 y 21 disponibles). Si usas un **Arduino Uno**, ver nota más abajo.
- Sensor PIR (ej. HC-SR501)
- Buzzer (activo o pasivo). Si usas un buzzer pasivo, el código usa `tone()`; para buzzers de mayor potencia usa transistor.
- Cables de conexión
- Fuente de alimentación / cable USB para subir el sketch

Conexiones (tal como está el código)
- `sensorPIR` -> pin digital `19` (salida del PIR)
- `buzzerPin` -> pin digital `21`
- `VCC` del PIR -> `5V`
- `GND` del PIR -> `GND`
- `GND` del buzzer -> `GND` (si usas un buzzer activo conectarlo entre `buzzerPin` y `GND` o usar transistor si necesita más corriente)

Nota sobre placas y pines
- El sketch actual usa `sensorPIR = 19` y `buzzerPin = 21`. Estos pines son típicos en placas como Arduino Mega. Si usas un **Arduino UNO**, cambia los valores en el archivo `.ino` (por ejemplo: `sensorPIR = 2` y `buzzerPin = 9`) y ajusta el cableado.

Cómo compilar y subir (pasos básicos)
1. Abre Arduino IDE o Arduino CLI.
2. Abre el archivo `Prueba1_copy_20251210184415.ino`.
3. Selecciona la placa correcta en `Herramientas > Placa` (por ejemplo, `Arduino Mega 2560` si mantienes los pines 19 y 21).
4. Selecciona el puerto COM correcto en `Herramientas > Puerto`.
5. Pulsa `Subir`.

Si prefieres usar Arduino CLI (ejemplo):
```
arduino-cli compile --fqbn arduino:avr:mega Prueba1_copy_20251210184415
arduino-cli upload -p COM3 --fqbn arduino:avr:mega Prueba1_copy_20251210184415
```
Reemplaza `COM3` y el `fqbn` según tu placa y puerto.

Uso
- Abre el Monitor serial a `115200` baudios para ver mensajes de diagnóstico.
- Cuando el sensor PIR detecte movimiento verás `¡Movimiento detectado!` y el buzzer emitirá 3 pitidos cortos.

Problemas comunes y soluciones
- No suena el buzzer: verifica cableado y prueba el buzzer directamente con 5V (si es activo). Si necesita más corriente, usa un transistor y diodo de protección.
- El sensor PIR se dispara constantemente: ajusta el potenciómetro del PIR (sensitivity) o sitúalo lejos de fuentes de calor/movimiento.
- No aparece ningún mensaje en el Monitor Serial: asegúrate de seleccionar `115200` baudios.

Mejoras sugeridas
- Añadir un LED que se encienda con la detección para efectos visuales.
- Añadir control de volumen o reproducción de archivos de audio mediante un módulo reproductor (DFPlayer Mini) para sonidos más complejos.
- Ajustar pines en código para compatibilidad con Arduino Uno y documentar variantes de cableado.

Licencia
- Código y documentación: sin licencia explícita por defecto. Puedo añadir una licencia (MIT, GPL, etc.) si lo deseas.

Contacto / Siguientes pasos
- Si quieres que adapte el código para `Arduino Uno`, o que añada un diagrama de conexiones o fotos, dímelo y lo hago.

---
Archivo `Prueba1_copy_20251210184415.ino` encontrado y utilizado como referencia para los pines y comportamiento descrito arriba.
