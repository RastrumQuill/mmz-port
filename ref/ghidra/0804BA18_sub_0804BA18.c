// sub_0804BA18 at 0x0804BA18 (thumb)

undefined4 sub_0804BA18(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (0xf < *(byte *)(param_1 + 0x12)) {
    uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar2 & 0x7fffffff;
    if (((uVar2 * 2 >> 0x11 & 8) == 0) && (*(char *)(param_1 + 0x11) != '\x05')) {
      *(undefined4 *)(param_1 + 0x58) = 0xcc;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xbc) = 0;
      sub_080033F0(param_1 + 0x6c,5);
    }
    else {
      uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar2 & 0x7fffffff;
      uVar2 = uVar2 * 2 >> 0x11 & 1;
      *(uint *)(param_1 + 0x54) = (uVar2 ^ 1) * -0x300 + 0x180;
      *(char *)(param_1 + 0x44) = (char)uVar2;
      if (uVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
      sub_080033F0(param_1 + 0x6c,1);
    }
  }
  return in_lr;
}

