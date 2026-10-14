// sub_08032CF0 at 0x08032CF0 (thumb)

undefined4 sub_08032CF0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
    sub_0800561C(param_1 + 0x74,&DAT_082ad504);
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
  iVar3 = iVar2;
  if (iVar2 < 0) {
    iVar3 = -iVar2;
  }
  if (0x380 < iVar3) {
    *(int *)(param_1 + 0x54) = iVar2 - *(int *)(param_1 + 0x58);
  }
  uVar1 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x4c);
      iVar4 = -0x2000;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x4c);
      iVar4 = 0x2000;
    }
    *(int *)(iVar3 + 0x4c) = iVar2 + iVar4;
    *(int *)(iVar3 + 0x50) = *(int *)(param_1 + 0x50) + -0x1000;
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar2 = *(int *)(DAT_0202286c + 0x4c) - iVar3;
  if (iVar2 < 0) {
    iVar2 = iVar3 - *(int *)(DAT_0202286c + 0x4c);
  }
  if (((0x4000 < iVar2) || (iVar3 < *(int *)(param_1 + 0xb8) + 0x2000)) ||
     (iVar3 < *(int *)(param_1 + 0xb8) + 0x1c000)) {
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

