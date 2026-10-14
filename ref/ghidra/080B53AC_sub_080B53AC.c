// sub_080B53AC at 0x080B53AC (thumb)

undefined8 sub_080B53AC(int param_1,undefined4 param_2,byte *param_3,char param_4)

{
  undefined4 in_lr;
  
  if (param_1 != 0) {
    do {
      if (((((*param_3 & 0x80) == 0) || (param_4 == '\0')) &&
          ((*param_3 & 0x7f) == *(byte *)(param_1 + 9))) &&
         ((((int)(char)param_3[1] == 0xffffffff ||
           ((int)(char)param_3[1] == (uint)*(byte *)(param_1 + 0x10))) &&
          (((int)(char)param_3[2] == 0xffffffff ||
           ((int)(char)param_3[2] == (uint)*(byte *)(param_1 + 0x11))))))) {
        sub_080C8AA0(param_1,param_2,param_3,*(undefined4 *)(&DAT_082b8178 + (uint)param_3[3] * 4));
        goto LAB_080b5426;
      }
      param_3 = param_3 + 8;
    } while (*param_3 != 0xff);
  }
  param_1 = 0;
LAB_080b5426:
  return CONCAT44(in_lr,param_1);
}

