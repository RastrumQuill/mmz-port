// sub_080B9930 at 0x080B9930 (thumb)

undefined4 sub_080B9930(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  uVar3 = bVar1 & 1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_08012580(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  sub_080127E4(param_1,*(undefined2 *)(param_1 + 0x78));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x12) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar2 = 0x180;
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x01') goto LAB_080b99fc;
    iVar2 = 0x240;
  }
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  *(uint *)(param_1 + 0x74) = (uVar3 * 2 >> 0x11 & 0xff) + iVar2;
LAB_080b99fc:
  sub_080B9A14(param_1);
  return in_lr;
}

