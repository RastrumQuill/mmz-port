// sub_08032C78 at 0x08032C78 (thumb)

undefined4 sub_08032C78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad494);
  }
  sub_080297C0(param_1);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + 0x10;
    *(int *)(param_1 + 0x54) = iVar1;
    if (0 < iVar1) {
      *(uint *)(param_1 + 0x54) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + -0x10;
    *(int *)(param_1 + 0x54) = iVar1;
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar1;
  uVar2 = sub_08008360(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  if (*(int *)(param_1 + 0x54) == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

