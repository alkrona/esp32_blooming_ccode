
void read_eeprom() {
  //if (EEPROM.read(0) == NO_OF_MODULE) {
   // int addr = 1;
   // EEPROM.get(addr, motor);
   // Serial.println("these are the values of motor.max");
    //for (int i = 0; i < NO_OF_MODULE; i++) {
     // Serial.println(motor.max[i]);
    //}
  //}
  preferences.begin("bloomValues",false);
  
    motor.mini[0] = preferences.getInt(  "mini0",0);
    motor.max[0] = preferences.getInt(  "mix0",0);
    motor.addrs[0] = preferences.getInt(  "addr0",0);

    motor.mini[1] = preferences.getInt(  "mini1",0);
    motor.max[1] = preferences.getInt(  "mix1",0);
    motor.addrs[1] = preferences.getInt(  "addr1",0);

    motor.mini[2] = preferences.getInt(  "mini2",0);
    motor.max[2] = preferences.getInt(  "mix2",0);
    motor.addrs[2] = preferences.getInt(  "addr2",0);

    motor.mini[3] = preferences.getInt(  "mini3",0);
    motor.max[3] = preferences.getInt(  "mix3",0);
    motor.addrs[3] =  preferences.getInt(  "addr3",0);

    motor.mini[4] = preferences.getInt(  "mini4",0);
    motor.max[4] = preferences.getInt(  "mix4",0);
    motor.addrs[4] = preferences.getInt(  "addr4",0);

    motor.mini[5] = preferences.getInt(  "mini5",0);
    motor.max[5] = preferences.getInt(  "mix5",0);
    motor.addrs[5] = preferences.getInt(  "addr5",0);

    motor.mini[6] = preferences.getInt(  "mini6",0);
    motor.max[6] = preferences.getInt(  "mix6",0);
    motor.addrs[6] = preferences.getInt(  "addr6",0);

    motor.mini[7] = preferences.getInt(  "mini7",0);
    motor.max[7] = preferences.getInt(  "mix7",0);
    motor.addrs[7] = preferences.getInt(  "addr7",0);

    motor.mini[8] = preferences.getInt(  "mini8",0);
    motor.max[8] = preferences.getInt(  "mix8",0);
    motor.addrs[8] = preferences.getInt(  "addr8",0);

    motor.mini[9] = preferences.getInt(  "mini9",0);
    motor.max[9] = preferences.getInt(  "mix9",0);
    motor.addrs[9] = preferences.getInt(  "addr9",0);

    motor.mini[10] = preferences.getInt(  "mini10",0);
    motor.max[10] = preferences.getInt(  "mix10",0);
    motor.addrs[10] = preferences.getInt(  "addr10",0);

    motor.mini[11] = preferences.getInt(  "mini11",0);
    motor.max[11] = preferences.getInt(  "mix11",0);
    motor.addrs[11] = preferences.getInt(  "addr11",0);

    motor.mini[12] = preferences.getInt(  "mini12",0);
    motor.max[12] = preferences.getInt(  "mix12",0);
    motor.addrs[12] = preferences.getInt(  "addr12",0);

    motor.mini[13] = preferences.getInt(  "mini13",0);
    motor.max[13] = preferences.getInt(  "mix13",0);
    motor.addrs[13] = preferences.getInt(  "addr13",0);

        
    motor.mini[14] = preferences.getInt(  "mini14",0);
    motor.max[14] = preferences.getInt(  "mix14",0);
    motor.addrs[14] = preferences.getInt(  "addr14",0);
    
    motor.mini[15] = preferences.getInt(  "mini15",0);
    motor.max[15] = preferences.getInt(  "mix15",0);
    motor.addrs[15] = preferences.getInt(  "addr15",0);
  
  update_pannel();
}

//--------------------------------------------------------------------------------------------

void update_pannel() {
  for (int i = 0; i < NO_OF_MODULE; i++) {
    flower[i].mini = angle_to_pwm(motor.mini[i]);
    flower[i].max = angle_to_pwm(motor.max[i]);

    flower[i].address = motor.addrs[i] % NO_OF_SERVOS_IN_A_BOARD;
    flower[i].module = motor.addrs[i] / NO_OF_SERVOS_IN_A_BOARD;
  }
}
