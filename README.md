# rf24ledbanner

                                            +------------------+
                                            |          Arduino |
      +-------------------------------------- VCC              |
      |                                     |      Pro Mini 5V |
      |                    /                |                  |
      |                   / "start"         |                  |
      |               +--o   o--+------------ 3                |
      |               |         |           |                  |
      | +     -       |    /    +--|<----+  |                  |
      |  | | |        |   /              |  |                  |
      +--||||||-------+--o   o--+--------)--- 5                |
         | | |           "stop" |        |  |                  |
               4.5 V            +--|<----+  |                  |
                                         |  |                  |
      +-----------+                      |  |                  |
      | nRF24L01+ |                      |  |                  |
      | 3.3v      |                      |  |                  |
      |       VCC ----+--LD1117av33------)--- 7                |
      |           |   |      |           |  |                  |
      |           |   = 10uF |           |  |                  |
      |           |   |      |           |  |                  |
      |       GND ----+------+-----------+--- GND              |
      |           |                         |                  |
      | CE+CS+SPI --------------------------- 8+10+11+12+13    |
      |           |                         |                  |
      +-----------+                         +------------------+

