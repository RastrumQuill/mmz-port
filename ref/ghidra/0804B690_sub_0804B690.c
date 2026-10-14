// sub_0804B690 at 0x0804B690 (thumb)

undefined4 sub_0804B690(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 1;
  *(uint *)(param_1 + 0x54) = (uVar3 ^ 1) * -0x300 + 0x180;
  *(char *)(param_1 + 0x44) = (char)uVar3;
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  return in_lr;
}

