// sub_080BA9E4 at 0x080BA9E4 (thumb)

undefined4 sub_080BA9E4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08005784(param_1 + 0x74,&DAT_08861034);
    sub_0801CF00(param_1,0xbd08);
    iVar1 = uVar2 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar1 * 0x300;
    *(int *)(param_1 + 0x68) = *(int *)(iVar3 + 0xb4) + iVar1 * 0x6000 + 0x7800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801D134(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (-1 < (int)((iVar3 - *(int *)(param_1 + 0x68)) * (uVar2 * 2 + -1))) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

