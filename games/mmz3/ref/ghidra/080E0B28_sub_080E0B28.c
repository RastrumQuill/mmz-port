// sub_080E0B28 at 0x080E0B28 (thumb)

undefined4 sub_080E0B28(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x10) - 1;
  if (((int)(*(byte *)(DAT_0203df90 + ((int)uVar1 >> 2)) & 0xf) >> (uVar1 & 3) & 1U) == 0) {
    sub_0801749C(param_1);
    sub_08017700(param_1,(uint)DAT_0200247b * 0x1000000 + 0xb00b0000 >> 0x10);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_0836e234,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x80e0e61;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined2 *)(param_1 + 0x12) = 0x168;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 4);
    sub_080E0C2C(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e1d8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

