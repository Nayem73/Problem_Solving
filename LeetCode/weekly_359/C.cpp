          for (i = 0; i < 400; i++) { // Divide the delay into smaller intervals
              delay_ms(50); // Delay for 50 ms
              cnt_time += 50;
              if (cnt_time == 500) {
                if (portb.RB3 == 1) {
                    portb.RB3 = 0;
                }
                else {
                    portb.RB3 = 1;
                }
                cnt_time = 0;
              }
              if (portc.RC1 == 1) {
                  portb.RB0 = 0; // Stop motor immediately
                  portb.RB1 = 0;
                  break; // Exit the loop
              }
          }