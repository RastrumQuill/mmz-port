// sub_0803B124 at 0x0803B124 (thumb)

undefined4 sub_0803B124(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0803b184;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_08029654(param_1);
  sub_0800561C(param_1 + 0x74,&DAT_082adbd0);
  uVar2 = 0xffffff80;
  *(undefined4 *)(param_1 + 0x54) = 0xffffff80;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = 0x80;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  sub_08029778(param_1,1);
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0803b184:
  *(byte *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + 1U & 0x3f;
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  piVar4 = (int *)(param_1 + 0xdc);
  if (bVar1 < 0x13) {
    iVar3 = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar3;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *piVar4 = *piVar4 + iVar3;
    sub_0803A7F8(param_1);
  }
  if (*(char *)(param_1 + 0x12) == '\x13') {
    sub_0801412C(2,param_1 + 0x4c);
    sub_08001EAC(0x49);
  }
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0x1f;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (0x1000 < *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c)) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else if (*(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c) < -0x1000) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_0800869C(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  bVar1 = *(byte *)(param_1 + 10) & 0x10;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = sub_08008BC0(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (*(int *)(param_1 + 0x4c) - iVar3 < 0x5000) {
      *(byte *)(param_1 + 0xd) = bVar1;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
  }
  else {
    iVar3 = sub_080089EC(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    if (iVar3 - *(int *)(param_1 + 0x4c) < 0x5000) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if ((0x6000 < *piVar4) && (*(byte *)(param_1 + 0x13) < 4)) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

