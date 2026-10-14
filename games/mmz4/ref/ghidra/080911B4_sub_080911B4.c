// sub_080911B4 at 0x080911B4 (thumb)

undefined4 sub_080911B4(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  undefined4 in_lr;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar8 = *(int *)(iVar4 + 0x54) + *(int *)(&DAT_0885ce94 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x54) = iVar8;
  iVar6 = *(int *)(iVar4 + 0x58) + *(int *)(&DAT_0885cea0 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(int *)(param_1 + 0x58) = iVar6;
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08090D64(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((DAT_0202e918 & 8) == 0) {
      sub_080BD058(param_1 + 0x54,0x300,*(undefined *)(param_1 + 0xc0));
    }
    *(undefined *)(param_1 + 0x12) = 0x10;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_08091360;
    iVar4 = sub_0810CCF0(*(int *)(DAT_0202dbf0 + 0x54) - iVar8,
                         *(int *)(DAT_0202dbf0 + 0x58) - (iVar6 + 0xf00));
    uVar5 = ((iVar4 + 0x80) * 0x10000 >> 0x10) + 8U & 0xf0;
    uVar3 = (ushort)uVar5;
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (uVar5 < 0x60) {
        uVar3 = 0x60;
      }
      else if (0xa0 < uVar5) {
LAB_080912dc:
        uVar3 = 0xa0;
      }
    }
    else if (*(char *)(param_1 + 0x11) == '\x01') {
      if (uVar3 < 0x81) {
        if (0x20 < uVar3) {
          uVar5 = 0x20;
        }
        uVar3 = (ushort)uVar5;
        if (0x80 < *(byte *)(param_1 + 0xc0)) {
          uVar3 = (ushort)(uVar5 * 0x10000 + 0x1000000 >> 0x10);
        }
      }
      else {
        if (uVar3 < 0xe0) {
          uVar5 = 0xe0;
        }
        uVar3 = (ushort)uVar5;
        if (-1 < *(char *)(param_1 + 0xc0)) {
          uVar3 = (ushort)(uVar5 * 0x10000 + -0x1000000 >> 0x10);
        }
      }
    }
    else if (uVar5 * 0x10000 - 0x400000 >> 0x10 < 0xa1) {
      if ((uint)((int)(uVar5 * 0x10000) >> 0x10) < 0xa0) goto LAB_080912dc;
    }
    else {
      uVar3 = 0xe0;
    }
    pbVar7 = (byte *)(param_1 + 0xc0);
    bVar1 = *pbVar7;
    if ((short)uVar3 < (short)(ushort)bVar1) {
      cVar2 = -1;
LAB_080912f2:
      *pbVar7 = bVar1 + cVar2;
    }
    else if ((short)(ushort)bVar1 < (short)uVar3) {
      cVar2 = '\x01';
      goto LAB_080912f2;
    }
    *(byte *)(param_1 + 0x24) = *pbVar7;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_08091360;
    *(undefined *)(param_1 + 0x13) = 3;
    cVar2 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if ((bVar1 != 2) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_08091360;
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar2 + -1;
    cVar2 = cVar2 + -1;
    if (cVar2 != '\0') {
      cVar2 = '\x01';
    }
  }
  *(char *)(param_1 + 0xd) = cVar2;
LAB_08091360:
  sub_0801CFF0(param_1);
  return in_lr;
}

