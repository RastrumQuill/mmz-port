// sub_080C5DF4 at 0x080C5DF4 (thumb)

undefined4 sub_080C5DF4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(short *)(param_1 + 6) + -1;
  *(short *)(param_1 + 6) = (short)iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 1) = 1;
    *(undefined *)(param_1 + 2) = 0;
    *(undefined *)(param_1 + 3) = 1;
    *(short *)(param_1 + 4) = (short)iVar1;
    sub_080B9978(param_1);
    DAT_03001ba2 = ' ';
    DAT_03001ba1 = ' ';
    DAT_03001ba0 = ' ';
    sub_080C5E90(param_1);
  }
  else {
    DAT_03001ba0 = ('\x10' - (char)iVar1) * '\x02';
    param_1 = param_1 + 0x9b4;
    DAT_03001ba1 = DAT_03001ba0;
    DAT_03001ba2 = DAT_03001ba0;
    sub_080033CC(param_1);
    sub_0800DCB0(DAT_02023210,param_1);
    sub_0800338C(param_1);
  }
  return in_lr;
}

