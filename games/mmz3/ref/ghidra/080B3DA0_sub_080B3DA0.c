// sub_080B3DA0 at 0x080B3DA0 (thumb)

undefined4 sub_080B3DA0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 0x2c);
  puVar6 = (undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x58);
  iVar4 = 1;
  do {
    *puVar6 = puVar6[2];
    puVar6[1] = puVar6[3];
    puVar6 = puVar6 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar7 + 0x54);
    uVar3 = *(undefined4 *)(iVar7 + 0x58);
  }
  else {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar7 + 0x74);
    uVar3 = *(undefined4 *)(iVar7 + 0x78);
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(ushort *)(param_1 + 0x48) =
       *(ushort *)(param_1 + 0x48) & 0xfc00 | *(ushort *)(iVar8 + 0x48) & 0x3ff;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar8 + 0x3c);
  *(undefined *)(param_1 + 0x4e) = *(undefined *)(iVar8 + 0x4e);
  bVar1 = *(byte *)(iVar8 + 10) >> 4;
  uVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
  if ((1 < *(byte *)(iVar7 + 0xc)) || ((*(byte *)(iVar8 + 10) & 1) == 0)) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0x11) = 2;
    }
    else {
      *(undefined *)(param_1 + 0x11) = *(undefined *)(iVar7 + 0x11);
    }
    *(int *)(param_1 + 0x28) = param_1;
  }
  if (*(char *)(param_1 + 0x11) == '\x02') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else if ((*(char *)(param_1 + 0x11) != '\0') &&
          (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == -1))
  {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080B3EDC(param_1);
  }
  return in_lr;
}

