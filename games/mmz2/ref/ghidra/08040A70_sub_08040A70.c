// sub_08040A70 at 0x08040A70 (thumb)

undefined4 sub_08040A70(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  undefined uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa207);
    uVar5 = sub_080EF150(*(int *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0x12) + 4) * 4) +
                                 0x54) - *(int *)(param_1 + 0x54),0x18);
    *(undefined4 *)(param_1 + 0x5c) = uVar5;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffa00;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    if (6 < *(byte *)(param_1 + 0xbd)) {
      if (*(byte *)(param_1 + 0x12) < 4) {
        uVar7 = 3;
      }
      else {
        uVar7 = 1;
      }
      *(undefined *)(param_1 + 0xc0) = uVar7;
      *(undefined *)(param_1 + 0xc2) = uVar7;
    }
  }
  sub_080128D4(param_1);
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 != -1) {
      return in_lr;
    }
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        return in_lr;
      }
      iVar6 = *(int *)(param_1 + 0x60) + 0x100;
      *(int *)(param_1 + 0x60) = iVar6;
      if (0x700 < iVar6) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      sVar4 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
      if (sVar4 == 0) {
        return in_lr;
      }
      uVar5 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar2 != 0) {
      return in_lr;
    }
    iVar8 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar8;
    iVar9 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar9;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    iVar6 = DAT_0202e130;
    if (iVar8 < 0) {
      return in_lr;
    }
    *(bool *)(param_1 + 0x4c) = iVar9 < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x54) =
         *(undefined4 *)(*(int *)(param_1 + 0xb4 + (*(byte *)(param_1 + 0x12) + 4) * 4) + 0x54);
    *(undefined *)(param_1 + 0x12) = 8;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

