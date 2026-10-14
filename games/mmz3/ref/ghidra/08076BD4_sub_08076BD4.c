// sub_08076BD4 at 0x08076BD4 (thumb)

undefined4 sub_08076BD4(undefined4 param_1,undefined4 param_2,uint param_3,undefined param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080070D8(DAT_020305e8);
  if (iVar1 != 0) {
    *(undefined *)(iVar1 + 0x25) = 0x18;
    *(undefined *)(iVar1 + 9) = 0x17;
    *(undefined4 *)(iVar1 + 0x14) = 0x8076c9d;
    *(undefined2 *)(iVar1 + 0x20) = 0;
    *(undefined *)(iVar1 + 0x22) = 0;
    *(byte *)(iVar1 + 0xb) = *(byte *)(iVar1 + 0xb) | 0x10;
    *(undefined *)(iVar1 + 0x1d) = *(undefined *)(iVar1 + 0x1c);
    *(undefined *)(iVar1 + 0x10) = 0;
    *(undefined *)(iVar1 + 0x12) = param_4;
    *(undefined4 *)(iVar1 + 0x54) = param_1;
    *(undefined4 *)(iVar1 + 0x58) = param_2;
    *(int *)(iVar1 + 0x5c) =
         (int)*(short *)((int)&DAT_080fe64c + (((param_3 & 0xff) + 0x40) * 0x1000000 >> 0x17));
    *(int *)(iVar1 + 0x60) = (int)(short)(&DAT_080fe64c)[param_3 & 0xff];
  }
  return in_lr;
}

