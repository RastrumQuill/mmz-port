// sub_08028948 at 0x08028948 (thumb)

undefined4 sub_08028948(int param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  bool bVar9;
  
  iVar7 = *(int *)(param_1 + 0x20);
  cVar1 = sub_08028FBC(param_1,iVar7);
  if ((cVar1 != '\0') || (4 < *(byte *)(iVar7 + 0xd))) {
    sub_08028D58(param_1);
    return in_lr;
  }
  iVar8 = *(byte *)(param_1 + 0x10) - 5;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar7 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar7 + 0x50);
  bVar3 = *(byte *)(iVar7 + 10) >> 4;
  bVar9 = (bool)(bVar3 & 1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08025C54(param_1,0x1f01);
    *(bool *)(param_1 + 0x44) = bVar9;
    if ((bVar3 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08025CE8(param_1);
    if (iVar8 == 2) {
      bVar9 = (bVar3 & 1) == 0;
    }
    iVar7 = -1;
    if (bVar9 != false) {
      iVar7 = 1;
    }
    iVar8 = iVar8 * 4;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(short *)(&DAT_082ac810 + iVar8) * iVar7;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + (int)*(short *)(&DAT_082ac812 + iVar8);
    puVar5 = &DAT_082acb88;
  }
  else {
    *(bool *)(param_1 + 0x44) = bVar9;
    if ((bVar3 & 1) == 0) {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    iVar7 = (int)*(char *)(param_1 + 0x71);
    if (*(char *)(param_1 + 0x72) < '\x02') {
      if (iVar7 == 1) {
        sub_08025D70(*(undefined *)(param_1 + 0xd9),3,*(undefined *)(param_1 + 0xd8));
      }
      else if (iVar7 == 2) {
        sub_08001EAC(0x58);
      }
    }
    sub_08025CE8(param_1);
    iVar8 = (int)*(char *)(param_1 + 0x71);
    if (iVar8 == iVar7) {
      return in_lr;
    }
    puVar6 = (undefined4 *)(iVar8 * 4 + *(int *)(param_1 + 0x5c));
    puVar5 = (undefined *)*puVar6;
    if (puVar5 == (undefined *)0x0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      return in_lr;
    }
    if (puVar6[-1] == 0) {
      uVar4 = sub_08029314(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,uVar4,param_1 + 0x4c,0);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0x802934d;
      return in_lr;
    }
  }
  uVar4 = sub_08029314(param_1,puVar5);
  sub_0800561C(param_1 + 0x74,uVar4);
  return in_lr;
}

