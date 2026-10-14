// sub_080C76F8 at 0x080C76F8 (thumb)

undefined4 sub_080C76F8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14;
  
  piVar1 = DAT_03007ff0;
  DAT_04000084 = 0x8f;
  DAT_04000080 = 0;
  DAT_04000063 = 8;
  DAT_04000069 = 8;
  DAT_04000079 = 8;
  DAT_04000065 = 0x80;
  DAT_0400006d = 0x80;
  DAT_0400007d = 0x80;
  DAT_04000070 = 0;
  DAT_04000080._0_1_ = 0x77;
  if (*DAT_03007ff0 == 0x68736d53) {
    *DAT_03007ff0 = 0x68736d54;
    DAT_0202f740 = 0x80c866d;
    DAT_0202f764 = 0x80c7371;
    DAT_0202f76c = 0x80c7385;
    DAT_0202f790 = 0x80c87c5;
    DAT_0202f794 = 0x80c7309;
    DAT_0202f798 = 0x80c7909;
    DAT_0202f79c = 0x80c7095;
    DAT_0202f7a0 = 0x80c7cd1;
    DAT_0202f7a4 = 0x80c7d99;
    piVar1[7] = param_1;
    piVar1[10] = 0x80c7fad;
    piVar1[0xb] = 0x80c7ef5;
    piVar1[0xc] = 0x80c7e4d;
    *(undefined *)(piVar1 + 3) = 0;
    local_14 = 0;
    FUN_080c88f0(&local_14,param_1,&DAT_05000040);
    *(undefined *)(param_1 + 1) = 1;
    *(undefined *)(param_1 + 0x1c) = 0x11;
    *(undefined *)(param_1 + 0x41) = 2;
    *(undefined *)(param_1 + 0x5c) = 0x22;
    *(undefined *)(param_1 + 0x81) = 3;
    *(undefined *)(param_1 + 0x9c) = 0x44;
    *(undefined *)(param_1 + 0xc1) = 4;
    *(undefined *)(param_1 + 0xdc) = 0x88;
    *piVar1 = 0x68736d53;
  }
  return in_lr;
}

