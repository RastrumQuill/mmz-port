// sub_080EE1B0 at 0x080EE1B0 (thumb)

undefined4 sub_080EE1B0(int param_1,undefined *param_2,byte param_3)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = DAT_03007ff0;
  if (param_3 != 0) {
    if (0x10 < param_3) {
      param_3 = 0x10;
    }
    if (*DAT_03007ff0 == 0x68736d53) {
      *DAT_03007ff0 = 0x68736d54;
      sub_080EDEA4(param_1);
      *(undefined **)(param_1 + 0x2c) = param_2;
      *(byte *)(param_1 + 8) = param_3;
      *(undefined4 *)(param_1 + 4) = 0x80000000;
      for (; param_3 != 0; param_3 = param_3 - 1) {
        *param_2 = 0;
        param_2 = param_2 + 0x50;
      }
      if (piVar1[8] != 0) {
        *(int *)(param_1 + 0x38) = piVar1[8];
        *(int *)(param_1 + 0x3c) = piVar1[9];
        piVar1[8] = 0;
      }
      piVar1[9] = param_1;
      piVar1[8] = 0x80ed4a9;
      *piVar1 = 0x68736d53;
      *(undefined4 *)(param_1 + 0x34) = 0x68736d53;
    }
  }
  return in_lr;
}

