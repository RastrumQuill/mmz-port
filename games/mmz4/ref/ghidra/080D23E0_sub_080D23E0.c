// sub_080D23E0 at 0x080D23E0 (thumb)

undefined4 sub_080D23E0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 in_lr;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x2c);
  puVar8 = (undefined4 *)(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x54) == *(int *)(iVar9 + 0x54)) &&
     (*(int *)(param_1 + 0x58) == *(int *)(iVar9 + 0x58))) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0x74) = *puVar8;
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  iVar6 = 1;
  do {
    *puVar8 = puVar8[2];
    puVar8[1] = puVar8[3];
    puVar8 = puVar8 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar9 + 0x54);
    uVar5 = *(undefined4 *)(iVar9 + 0x58);
  }
  else {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar9 + 0x74);
    uVar5 = *(undefined4 *)(iVar9 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  *(ushort *)(param_1 + 0x48) =
       *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar4 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar4 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar4 + 0x4e);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  uVar7 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
  if ((1 < *(byte *)(iVar9 + 0xc)) || ((*(byte *)(iVar4 + 10) & 1) == 0)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar2 = 2;
    }
    else {
      uVar2 = *(undefined *)(iVar9 + 0x11);
    }
    *(undefined *)(param_1 + 0x11) = uVar2;
    *(int *)(param_1 + 0x28) = param_1;
  }
  if (*(char *)(param_1 + 0x11) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else if ((*(char *)(param_1 + 0x11) != '\0') &&
          (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == -1))
  {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D2558(param_1);
  }
  return in_lr;
}

