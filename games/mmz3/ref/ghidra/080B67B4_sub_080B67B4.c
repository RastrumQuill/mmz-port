// sub_080B67B4 at 0x080B67B4 (thumb)

undefined4 sub_080B67B4(int param_1)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if ((DAT_02030108 & 0x40) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x78));
    if (sVar3 == 0) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
    if (sVar3 == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B6920(param_1);
    return in_lr;
  }
  bVar2 = *(byte *)(param_1 + 0x12);
  iVar4 = (uint)(bVar2 >> 5) + (uint)*(byte *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = (char)iVar4;
  uVar5 = ((uint)bVar2 + iVar4) * 0x1000000;
  sVar3 = *(short *)((int)&DAT_080fe64c + (uVar5 + 0x40000000 >> 0x17));
  sVar1 = *(short *)((int)&DAT_080fe64c + ((bVar2 + 0x40) * 0x1000000 >> 0x17));
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)*(short *)((int)&DAT_080fe64c + (uVar5 >> 0x17)) -
       (int)(short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x12)]) * -8;
  pcVar6 = (char *)(param_1 + 0x7c);
  iVar4 = ((int)sVar3 - (int)sVar1) * 0x80000 >> 0x10;
  if (*pcVar6 == *(char *)(param_1 + 0x7d)) {
    *(byte *)(param_1 + 0x24) = bVar2;
    if (*pcVar6 == '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - iVar4;
      goto LAB_080b68ea;
    }
  }
  else {
    *(byte *)(param_1 + 0x24) = ~bVar2;
    if (*pcVar6 != '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - iVar4;
      goto LAB_080b68ea;
    }
  }
  iVar4 = *(int *)(param_1 + 0x54) + iVar4;
LAB_080b68ea:
  *(int *)(param_1 + 0x54) = iVar4;
  bVar2 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2;
  if (0x40 < bVar2) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B6920(param_1);
  }
  return in_lr;
}

