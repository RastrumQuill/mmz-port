// sub_08107ABC at 0x08107ABC (thumb)

undefined4 sub_08107ABC(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar2 = *(int *)(iVar1 + 0xe10) + 1;
    *(uint *)(iVar1 + 0xe10) = uVar2;
    *(uint *)(iVar1 + 0xe38) = uVar2;
    if (1 < uVar2) {
      *(undefined4 *)(iVar1 + 0xe2c) = 0x3c;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar2 = *(int *)(iVar1 + 0xe14) + 1;
    *(uint *)(iVar1 + 0xe14) = uVar2;
    *(uint *)(iVar1 + 0xe3c) = uVar2;
    if (1 < uVar2) {
      *(undefined4 *)(iVar1 + 0xe30) = 0x3c;
    }
  }
  return in_lr;
}

