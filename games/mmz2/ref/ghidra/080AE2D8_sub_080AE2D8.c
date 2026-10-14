// sub_080AE2D8 at 0x080AE2D8 (thumb)

undefined4 sub_080AE2D8(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  puVar5 = (undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x78);
  iVar3 = 0;
  do {
    *puVar5 = puVar5[2];
    puVar5[1] = puVar5[3];
    puVar5 = puVar5 + 2;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar7 + 0x54);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar7 + 0x58);
  *(ushort *)(param_1 + 0x48) =
       *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar6 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar6 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar6 + 0x4e);
  bVar1 = *(byte *)(iVar7 + 10) >> 4;
  uVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  if (1 < *(byte *)(iVar7 + 0xc)) {
    *(undefined *)(param_1 + 0x11) = 1;
  }
  if ((*(char *)(param_1 + 0x11) != '\0') &&
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080AE3BC(param_1);
  }
  return in_lr;
}

