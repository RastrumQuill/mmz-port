// sub_0807DE58 at 0x0807DE58 (thumb)

undefined4 sub_0807DE58(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
LAB_0807dec0:
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807E010(param_1);
    return in_lr;
  }
  local_14 = (*(uint *)(param_1 + 0x54) & 0xfffff000) + 0x800;
  local_10 = (*(uint *)(param_1 + 0x58) & 0xfffff000) + 0x800;
  sVar1 = sub_08008CFC();
  if (sVar1 == 0) {
    if (*(short *)(DAT_0202f088 + 10) < 3) {
      if (*(short *)(DAT_0202f078 + 10) == 0) goto LAB_0807dec0;
      sub_08096D98(*(undefined4 *)(param_1 + 0x28),&local_14,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      sub_080D26C0(*(undefined4 *)(param_1 + 0x28),&local_14,0,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0x12);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 == 0) {
      return in_lr;
    }
    sVar1 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
    if (sVar1 == 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807E010(param_1);
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x5c);
  uVar2 = *(int *)(param_1 + 0x54) + iVar3;
  *(uint *)(param_1 + 0x54) = uVar2;
  if ((uVar2 & 0xfff) != 0x800) {
    return in_lr;
  }
  if (iVar3 < 1) {
    uVar2 = (uint)*(byte *)(param_1 + 0x10);
    uVar4 = 8 - (uVar2 & 1);
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0x10);
    uVar4 = (uVar2 & 1) + 6;
  }
  if ((uVar4 < (uint)(int)*(short *)(DAT_0202f078 + 10)) && (*(byte *)(param_1 + 0x13) < 0xb)) {
    if (iVar3 < 1) {
      if (*(int *)(DAT_0202e130 + 0x54) + -0x4000 <= *(int *)(param_1 + 0x54)) goto LAB_0807df82;
    }
    else if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202e130 + 0x54) + 0x4000) goto LAB_0807df82;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_0807df82:
  if (*(char *)(param_1 + 0xd) != '\0') {
    if (uVar2 == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0x1000;
      *(undefined4 *)(param_1 + 0x60) = 0x400;
      *(undefined *)(param_1 + 0x12) = 0xc0;
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0xfffff000;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
  }
  return in_lr;
}

