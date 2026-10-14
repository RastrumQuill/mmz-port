// sub_08049684 at 0x08049684 (thumb)

undefined4 sub_08049684(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 0x800) == 0) {
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      *(bool *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x54) < *(int *)(iVar1 + 0x54);
    }
  }
  else if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(iVar2 + 0xb4) = iVar1;
  }
  return in_lr;
}

