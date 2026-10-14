// sub_080EDD74 at 0x080EDD74 (thumb)

undefined4 sub_080EDD74(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14;
  
  piVar1 = DAT_03007ff0;
  DAT_04000084 = 0x8f;
  Ram04000080 = 0;
  DAT_04000063 = 8;
  DAT_04000069 = 8;
  DAT_04000079 = 8;
  DAT_04000065 = 0x80;
  DAT_0400006d = 0x80;
  DAT_0400007d = 0x80;
  DAT_04000070 = 0;
  DAT_04000080 = 0x77;
  if (*DAT_03007ff0 == 0x68736d53) {
    *DAT_03007ff0 = 0x68736d54;
    DAT_0203e6e0 = 0x80eece9;
    DAT_0203e704 = 0x80ed9ed;
    DAT_0203e70c = 0x80eda01;
    DAT_0203e730 = 0x80eee41;
    DAT_0203e734 = 0x80ed985;
    DAT_0203e738 = 0x80edf85;
    DAT_0203e73c = 0x80ed711;
    DAT_0203e740 = 0x80ee34d;
    DAT_0203e744 = 0x80ee415;
    piVar1[7] = param_1;
    piVar1[10] = 0x80ee629;
    piVar1[0xb] = 0x80ee571;
    piVar1[0xc] = 0x80ee4c9;
    *(undefined *)(piVar1 + 3) = 0;
    local_14 = 0;
    sub_080EEF6C(&local_14,param_1,&DAT_05000040);
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

