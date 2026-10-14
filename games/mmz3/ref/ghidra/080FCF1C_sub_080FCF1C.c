// sub_080FCF1C at 0x080FCF1C (thumb)

undefined4 sub_080FCF1C(int param_1)

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
    DAT_0203e940 = 0x80fde91;
    DAT_0203e964 = 0x80fcb95;
    DAT_0203e96c = 0x80fcba9;
    DAT_0203e990 = 0x80fdfe9;
    DAT_0203e994 = 0x80fcb2d;
    DAT_0203e998 = 0x80fd12d;
    DAT_0203e99c = 0x80fc8b9;
    DAT_0203e9a0 = 0x80fd4f5;
    DAT_0203e9a4 = 0x80fd5bd;
    piVar1[7] = param_1;
    piVar1[10] = 0x80fd7d1;
    piVar1[0xb] = 0x80fd719;
    piVar1[0xc] = 0x80fd671;
    *(undefined *)(piVar1 + 3) = 0;
    local_14 = 0;
    FUN_080fe114(&local_14,param_1,&DAT_05000040);
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

