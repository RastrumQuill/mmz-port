// sub_0804CE44 at 0x0804CE44 (thumb)

undefined4 sub_0804CE44(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (0x10 < *(byte *)(param_1 + 0x12)) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(uint *)(param_1 + 0x58) = uVar2 * 0x300 + -0x180;
    *(char *)(param_1 + 0x44) = (char)uVar2;
    if (uVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    sub_080033F0(param_1 + 0x6c,1);
  }
  return in_lr;
}

