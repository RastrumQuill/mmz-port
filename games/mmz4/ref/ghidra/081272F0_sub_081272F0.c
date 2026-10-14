// sub_081272F0 at 0x081272F0 (thumb)

undefined4 sub_081272F0(int param_1)

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
    DAT_0203d2b0 = 0x8128265;
    DAT_0203d2d4 = 0x8126f69;
    DAT_0203d2dc = 0x8126f7d;
    DAT_0203d300 = 0x81283bd;
    DAT_0203d304 = 0x8126f01;
    DAT_0203d308 = 0x8127501;
    DAT_0203d30c = 0x8126c8d;
    DAT_0203d310 = 0x81278c9;
    DAT_0203d314 = 0x8127991;
    piVar1[7] = param_1;
    piVar1[10] = 0x8127ba5;
    piVar1[0xb] = 0x8127aed;
    piVar1[0xc] = 0x8127a45;
    *(undefined *)(piVar1 + 3) = 0;
    local_14 = 0;
    sub_081284E8(&local_14,param_1,&DAT_05000040);
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

