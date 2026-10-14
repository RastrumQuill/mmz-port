// sub_080D643C at 0x080D643C (thumb)

undefined8 sub_080D643C(int param_1,undefined4 param_2,byte *param_3,int param_4)

{
  undefined4 in_lr;
  
  if (param_1 != 0) {
    do {
      if (((((*param_3 & 0x80) == 0) || (param_4 == 0)) &&
          ((*param_3 & 0x7f) == *(byte *)(param_1 + 9))) &&
         ((((int)(char)param_3[1] == 0xffffffff ||
           ((int)(char)param_3[1] == (uint)*(byte *)(param_1 + 0x10))) &&
          (((int)(char)param_3[2] == 0xffffffff ||
           ((int)(char)param_3[2] == (uint)*(byte *)(param_1 + 0x11))))))) {
        sub_080EF120(param_1,param_2,param_3,*(undefined4 *)(&DAT_0834b294 + (uint)param_3[3] * 4));
        goto LAB_080d64b2;
      }
      param_3 = param_3 + 8;
    } while (*param_3 != 0xff);
  }
  param_1 = 0;
LAB_080d64b2:
  return CONCAT44(in_lr,param_1);
}

