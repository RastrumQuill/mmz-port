// sub_080BB6A0 at 0x080BB6A0 (thumb)

undefined4 sub_080BB6A0(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017528(param_1);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(char *)(param_1 + 0x24) = (char)(uVar3 * 2 >> 0x11);
    bVar1 = *(byte *)(param_1 + 0x11);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836b52c + (uint)bVar1 * 2));
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x5c) = (bVar1 - 1) * 0x100 + (uVar3 * 2 >> 0x11 & 0x1ff) + -0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *(uint *)(param_1 + 0x60) = -0x200 - (uVar3 * 2 >> 0x11 & 0x1ff);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sub_080177F4(param_1);
  sVar2 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if ((sVar2 != 0) && (0 < *(int *)(param_1 + 0x60))) {
    sub_080B2484(3,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

