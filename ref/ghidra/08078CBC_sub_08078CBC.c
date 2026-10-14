// sub_08078CBC at 0x08078CBC (thumb)

undefined4 sub_08078CBC(int param_1)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0x10) == '\x03') {
      puVar2 = &DAT_082b1cfb + *(byte *)(param_1 + 0x11);
    }
    else {
      puVar2 = &DAT_082b1cf8 + *(byte *)(param_1 + 0x11);
    }
    *(undefined *)(param_1 + 0x13) = *puVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (1 < *(byte *)(iVar6 + 0xc)) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    iVar7 = (uint)*(byte *)(param_1 + 0x11) * 4;
    iVar5 = *(int *)(iVar6 + 0x4c) + *(int *)(&DAT_082b1ce0 + iVar7);
    if ((*(byte *)(iVar6 + 10) & 0x10) != 0) {
      iVar5 = iVar5 + *(int *)(&DAT_082b1ce0 + iVar7) * -2;
    }
    puVar2 = &DAT_082b1cec;
  }
  else {
    iVar7 = (uint)*(byte *)(param_1 + 0x11) * 4;
    iVar5 = *(int *)(iVar6 + 0x4c) + *(int *)(&DAT_082b1cc8 + iVar7);
    if ((*(byte *)(iVar6 + 10) & 0x10) != 0) {
      iVar5 = iVar5 + *(int *)(&DAT_082b1cc8 + iVar7) * -2;
    }
    puVar2 = &DAT_082b1cd4;
  }
  iVar6 = sub_080C88E8((iVar5 - *(int *)(param_1 + 0x4c)) * 0x100 >> 0x10,
                       ((*(int *)(iVar6 + 0x50) + *(int *)(puVar2 + iVar7)) -
                       *(int *)(param_1 + 0x50)) * 0x100 >> 0x10);
  iVar5 = ((uint)(iVar6 << 0x10) >> 0x18) - (uint)*(byte *)(param_1 + 0x12);
  iVar7 = iVar5 * 0x1000000 >> 0x18;
  iVar6 = iVar7;
  if (iVar7 < 0) {
    iVar6 = -iVar7;
  }
  if (0x7f < iVar6) {
    iVar5 = iVar7;
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    iVar6 = (char)iVar5 * 0x12;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    uVar3 = iVar6 >> 8 & 0xff;
    cVar1 = (char)((uint)iVar6 >> 8);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (-1 < cVar1) goto LAB_08078de6;
    }
    else if (cVar1 < '\x01') goto LAB_08078de6;
    uVar3 = -(int)cVar1 & 0xff;
  }
  else {
    iVar6 = (char)iVar5 * 0x18;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    uVar3 = iVar6 >> 8;
  }
LAB_08078de6:
  uVar3 = *(byte *)(param_1 + 0x12) + uVar3;
  uVar4 = uVar3 & 0xff;
  *(char *)(param_1 + 0x12) = (char)uVar3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[uVar4 + 0x40] * 3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (short)(&DAT_080c8e24)[uVar4] * 3;
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

