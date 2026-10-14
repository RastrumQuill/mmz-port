// sub_080992F4 at 0x080992F4 (thumb)

undefined4 sub_080992F4(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && ((*(uint *)(param_1 + 0x90) & 4) == 0)) {
    sub_080032EC(0xcb);
  }
  if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(iVar7 + 0x54);
    iVar4 = -0x1800;
  }
  else {
    iVar3 = *(int *)(iVar7 + 0x54);
    iVar4 = 0x1800;
  }
  iVar3 = iVar3 + iVar4;
  iVar7 = *(int *)(iVar7 + 0x58) + -0x1100;
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
    piVar6 = (int *)(param_1 + 0xb4);
    *piVar6 = *piVar6 + *(int *)(param_1 + 0x5c) +
                        (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 100);
    piVar5 = (int *)(param_1 + 0xb8);
    *piVar5 = *piVar5 + *(int *)(param_1 + 0x60) +
                        (uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x54) = iVar3 + *piVar6;
    *(int *)(param_1 + 0x58) = iVar7 + *piVar5;
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if (bVar1 < 3) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
LAB_0809940e:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    piVar6 = (int *)(param_1 + 0xb4);
    *piVar6 = *piVar6 + *(int *)(param_1 + 0x5c);
    piVar5 = (int *)(param_1 + 0xb8);
    *piVar5 = *piVar5 + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x54) = iVar3 + *piVar6;
    *(int *)(param_1 + 0x58) = iVar7 + *piVar5;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    goto LAB_0809940e;
  }
  if (bVar1 == 2) {
    *(int *)(param_1 + 0x54) = iVar3 + *(int *)(param_1 + 0xb4);
    *(int *)(param_1 + 0x58) = iVar7 + *(int *)(param_1 + 0xb8);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xc3) = 1;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 2;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x68) << 2;
    goto LAB_0809940e;
  }
  if (bVar1 != 3) {
    return in_lr;
  }
  uVar8 = 0;
  piVar6 = (int *)(param_1 + 0xb4);
  *piVar6 = *piVar6 + *(int *)(param_1 + 0x5c);
  piVar5 = (int *)(param_1 + 0xb8);
  *piVar5 = *piVar5 + *(int *)(param_1 + 0x60);
  iVar4 = iVar3 + *piVar6;
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = iVar7 + *piVar5;
  if (*(int *)(param_1 + 0x5c) < 0) {
    if (iVar3 < iVar4) goto LAB_0809944e;
  }
  else if (iVar4 < iVar3) goto LAB_0809944e;
  uVar8 = 1;
LAB_0809944e:
  if (*(int *)(param_1 + 0x60) < 0) {
    if (*(int *)(param_1 + 0x58) <= iVar7) {
      uVar8 = uVar8 | 0x10;
    }
  }
  else if (iVar7 <= *(int *)(param_1 + 0x58)) {
    uVar8 = uVar8 | 0x10;
  }
  if (uVar8 != 0x11) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

