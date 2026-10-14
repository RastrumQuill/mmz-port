// sub_080486D8 at 0x080486D8 (thumb)

undefined4 sub_080486D8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0x10) == '\x01') && (1 < *(byte *)(iVar3 + 0xc))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x78;
    *(undefined *)(param_1 + 0x13) = 0;
    iVar10 = *(int *)(param_1 + 0x54);
    iVar4 = (*(int *)(param_1 + 0xbc) + 0x6000) - iVar10;
    *(int *)(param_1 + 0x5c) = iVar4;
    uVar5 = FUN_080fe2f8(iVar4,0x3c);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    iVar8 = *(int *)(param_1 + 0x58);
    iVar4 = (*(int *)(param_1 + 0xc0) + -0x2800) - iVar8;
    *(int *)(param_1 + 0x60) = iVar4;
    uVar5 = FUN_080fe2f8(iVar4,0x32);
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    *(int *)(param_1 + 100) = iVar10;
    *(int *)(param_1 + 0x68) = iVar8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 100);
  iVar8 = *(int *)(param_1 + 0x68);
  if (cVar2 == '\x01') {
    iVar10 = (*(int *)(*(int *)(param_1 + 0x28) + 100) + -0x1000) - iVar4;
    *(int *)(param_1 + 0x5c) = iVar10;
    if (iVar10 < 0) {
      iVar10 = iVar10 + 0xf;
    }
    *(int *)(param_1 + 0x5c) = iVar10 >> 4;
    iVar10 = *(int *)(*(int *)(param_1 + 0x28) + 0x68) - iVar8;
    *(int *)(param_1 + 0x60) = iVar10;
    uVar5 = FUN_080fe2f8(iVar10,0x1e);
    *(undefined4 *)(param_1 + 0x60) = uVar5;
  }
  iVar4 = iVar4 + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar4;
  iVar10 = *(int *)(param_1 + 0x60) + 1;
  *(int *)(param_1 + 0x60) = iVar10;
  iVar8 = iVar8 + iVar10;
  *(int *)(param_1 + 0x68) = iVar8;
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = iVar8;
  if (((cVar2 == '\0') && ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0)) ||
     ((cVar2 == '\x01' && ((*(byte *)(*(int *)(iVar3 + 0x18) + 9) & 0x40) != 0)))) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + (short)(&DAT_080fe64c)[*(byte *)(param_1 + 0x13)] * 2;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) +
         *(short *)((int)&DAT_080fe64c + (((uint)*(byte *)(param_1 + 0x13) << 0x19) >> 0x17)) * 2;
    cVar2 = *(char *)(param_1 + 0x13) + ' ';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x13) = cVar2;
  puVar9 = (ushort *)(param_1 + 0xc4);
  *puVar9 = *puVar9 - ((ushort)*(byte *)(param_1 + 0x10) * 4 + -2);
  *puVar9 = *puVar9 & 0x1ff;
  sub_080177F4(param_1);
  iVar3 = sub_080FE390(*puVar9,(uint)*(byte *)(param_1 + 0xd1) * 10 + 7);
  if (iVar3 == 0) {
    uVar6 = DAT_0202f608 * 0x343fd + 0x269ec3;
    uVar7 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar7 & 0x7fffffff;
    sub_080BC00C(*(int *)(param_1 + 0x54) + ((uVar6 * 0x20 >> 0x15) - 0x400),
                 *(int *)(param_1 + 0x58) + (uVar7 * 0x40 >> 0x16),0,0);
  }
  return in_lr;
}

