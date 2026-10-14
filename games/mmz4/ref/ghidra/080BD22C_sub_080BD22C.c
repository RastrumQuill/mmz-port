// sub_080BD22C at 0x080BD22C (thumb)

undefined4 sub_080BD22C(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 in_lr;
  
  iVar2 = DAT_0202dbf0;
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && (*(char *)(iVar2 + 0x165) != '\0')) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    iVar10 = *(int *)(param_1 + 0x54);
    iVar6 = FUN_081288bc(*(int *)(iVar2 + 0x15c) - iVar10,*(undefined *)(param_1 + 0x13));
    *(int *)(param_1 + 0x5c) = iVar6;
    iVar11 = *(int *)(param_1 + 0x58);
    iVar7 = FUN_081288bc(*(int *)(iVar2 + 0x160) - iVar11,*(undefined *)(param_1 + 0x13));
    *(int *)(param_1 + 0x60) = iVar7;
    *(int *)(param_1 + 0x54) = iVar6 + iVar10;
    *(int *)(param_1 + 0x58) = iVar11 + iVar7;
    bVar1 = *(byte *)(param_1 + 0x13);
    if ((bVar1 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(byte *)(param_1 + 0x13) = bVar1 - 1;
    if (bVar1 != 0) {
      if (*(char *)(iVar2 + 0x165) != '\0') {
        return in_lr;
      }
      *(byte *)(param_1 + 0x13) = bVar1 + 0xf;
      *(undefined *)(param_1 + 0xf) = 2;
      return in_lr;
    }
    *(char *)(iVar2 + 0x164) = *(char *)(iVar2 + 0x164) + '\x01';
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_080bd37e:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (*(char *)(param_1 + 0xf) == '\x02') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar1 = *(byte *)(param_1 + 0x13);
    if ((bVar1 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(byte *)(param_1 + 0x13) = bVar1 - 1;
    if (bVar1 != 0) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    goto LAB_080bd37e;
  }
  puVar8 = (uint *)(param_1 + 0x8c);
  if ((*puVar8 & 0x1000) != 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_0886160c,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) * -3) / 2;
      *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) * -3) / 2;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else if (*(int *)(param_1 + 0x60) < 0) {
      sub_08002B10(0x2b);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    else {
      sub_08002B10(0x2b);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
  }
  if ((*puVar8 & 0x400100) == 0) {
    if ((*puVar8 & 4) != 0) {
      *puVar8 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      uVar9 = 2;
      goto LAB_080bd4a6;
    }
    cVar4 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar4;
    if ((cVar4 != '\0') &&
       ((((*(char *)(param_1 + 0x10) == '\0' ||
          (uVar5 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
          uVar5 == 0)) || ((uVar5 & 0x8000) != 0)) || ((uVar5 & 0xf) == 0xf)))) {
      if (*(char *)(param_1 + 0xd) == '\0') {
        if (*(char *)(param_1 + 0xe) == '\0') {
          if (DAT_0202ed98 != '\0') {
            sub_08005784(param_1 + 0x74,&DAT_0886163c);
            *(undefined *)(param_1 + 0xe) = 1;
          }
        }
        else if (DAT_0202ed98 == '\0') {
          sub_08005784(param_1 + 0x74,&DAT_088615dc);
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      return in_lr;
    }
  }
  else {
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  uVar9 = 3;
LAB_080bd4a6:
  sub_080D0894(uVar9,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

