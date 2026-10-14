// sub_0806D6DC at 0x0806D6DC (thumb)

undefined4 sub_0806D6DC(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    bVar1 = *(byte *)(param_1 + 0xdb);
    if (bVar1 < 100) {
      *(byte *)(param_1 + 0xdb) = bVar1 + 1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  pbVar9 = (byte *)(param_1 + 0xd8);
  uVar10 = (uint)*pbVar9;
  iVar6 = *(int *)(param_1 + 0xb4 + uVar10 * 4);
  if (iVar6 == 0) goto LAB_0806d7f8;
  iVar6 = *(int *)(param_1 + 0x2c);
  if (iVar6 == 0) {
    piVar8 = (int *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0xdb);
    uVar3 = *(undefined *)(param_1 + 0x13);
LAB_0806d7e4:
    uVar5 = sub_080A3764(param_1,piVar8,uVar10,cVar2 + -1,uVar3);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  else {
    local_14 = *(int *)(iVar6 + 0x54);
    local_10 = *(int *)(iVar6 + 0x58);
    bVar4 = false;
    bVar1 = *pbVar9;
    if (bVar1 == 1) {
      iVar7 = 0x1600;
      if (0x1600 < *(int *)(param_1 + 0x54) - *(int *)(iVar6 + 0x54)) {
LAB_0806d79e:
        local_14 = local_14 + iVar7;
LAB_0806d7a2:
        bVar4 = true;
      }
    }
    else if (bVar1 < 2) {
      if ((bVar1 == 0) && (0x1600 < *(int *)(param_1 + 0x58) - *(int *)(iVar6 + 0x58))) {
        local_10 = local_10 + 0x1600;
        goto LAB_0806d7a2;
      }
    }
    else if (bVar1 == 2) {
      if (0x1600 < *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x58)) {
        local_10 = local_10 + -0x1600;
        goto LAB_0806d7a2;
      }
    }
    else if ((bVar1 == 3) && (0x1600 < *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x54))) {
      iVar7 = -0x1600;
      goto LAB_0806d79e;
    }
    if (1 < *(byte *)(iVar6 + 0xc)) {
      bVar4 = true;
    }
    if (bVar4) {
      uVar10 = (uint)*pbVar9;
      cVar2 = *(char *)(param_1 + 0xdb);
      uVar3 = *(undefined *)(param_1 + 0x13);
      piVar8 = &local_14;
      goto LAB_0806d7e4;
    }
  }
  if (*(byte *)(param_1 + 0x13) < 6) {
    return in_lr;
  }
  iVar6 = 0;
LAB_0806d7f8:
  *(undefined *)(param_1 + 0xd) = 5;
  *(char *)(param_1 + 0xe) = (char)iVar6;
  return in_lr;
}

