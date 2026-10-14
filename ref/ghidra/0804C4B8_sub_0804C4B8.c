// sub_0804C4B8 at 0x0804C4B8 (thumb)

undefined4 sub_0804C4B8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (0x10 < *(byte *)(param_1 + 0x12)) {
    uVar1 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar1 & 0x7fffffff;
    uVar1 = uVar1 * 2 >> 0x11 & 1;
    *(undefined *)(param_1 + 0xd) = 0;
    *(uint *)(param_1 + 0x58) = uVar1 * -0x300 + 0x180;
    *(char *)(param_1 + 0x44) = (char)uVar1;
    if (uVar1 == 0) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
    *(undefined4 *)(param_1 + 0xb8) = 0;
    sub_080033F0(param_1 + 0x6c,1);
  }
  return in_lr;
}

