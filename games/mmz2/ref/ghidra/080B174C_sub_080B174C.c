// sub_080B174C at 0x080B174C (thumb)

undefined4 sub_080B174C(int param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  if ((DAT_0202ebbb & 0x20) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  sub_080128D4(param_1);
  bVar3 = *(byte *)(param_1 + 0x12);
  cVar5 = (bVar3 >> 5) + *(char *)(param_1 + 0x13);
  *(char *)(param_1 + 0x13) = cVar5;
  uVar6 = (uint)(byte)(bVar3 + cVar5);
  sVar1 = (&DAT_080ef450)[uVar6 + 0x40 & 0xff];
  sVar2 = (&DAT_080ef450)[*(byte *)(param_1 + 0x12) + 0x40 & 0xff];
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) +
       ((int)(short)(&DAT_080ef450)[uVar6] - (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x12)])
       * -8;
  pcVar7 = (char *)(param_1 + 0x7c);
  iVar4 = ((int)sVar1 - (int)sVar2) * 0x80000 >> 0x10;
  if (*pcVar7 == *(char *)(param_1 + 0x7d)) {
    *(byte *)(param_1 + 0x24) = bVar3;
    if (*pcVar7 == '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - iVar4;
      goto LAB_080b1828;
    }
  }
  else {
    *(byte *)(param_1 + 0x24) = ~bVar3;
    if (*pcVar7 != '\0') {
      iVar4 = *(int *)(param_1 + 0x54) - iVar4;
      goto LAB_080b1828;
    }
  }
  iVar4 = *(int *)(param_1 + 0x54) + iVar4;
LAB_080b1828:
  *(int *)(param_1 + 0x54) = iVar4;
  bVar3 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar3;
  if (0x40 < bVar3) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B185C(param_1);
  }
  return in_lr;
}

