// sub_080629F8 at 0x080629F8 (thumb)

undefined4 sub_080629F8(int param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar3 = iVar2 - *(int *)(DAT_0202286c + 0x4c);
  if (iVar3 < 0) {
    iVar3 = *(int *)(DAT_0202286c + 0x4c) - iVar2;
  }
  if ((iVar3 < 0x4001) ||
     (iVar2 = *(int *)(param_1 + 0x4c),
     iVar2 < *(int *)(DAT_0202286c + 0x4c) == (bool)(*(byte *)(param_1 + 10) >> 4 & 1))) {
    iVar3 = iVar2 - *(int *)(DAT_0202286c + 0x4c);
    if (iVar3 < 0) {
      iVar3 = *(int *)(DAT_0202286c + 0x4c) - iVar2;
    }
    if (0x3fff < iVar3) {
      return in_lr;
    }
    iVar3 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50);
    }
    if (iVar3 < 0x4001) {
      return in_lr;
    }
    if (*(int *)(DAT_0202286c + 0x4c) <= iVar2 == (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
      return in_lr;
    }
    uVar1 = 3;
  }
  else {
    uVar1 = 6;
  }
  *(undefined *)(param_1 + 0xd) = uVar1;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

