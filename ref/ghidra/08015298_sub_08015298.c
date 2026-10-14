// sub_08015298 at 0x08015298 (thumb)

undefined4 sub_08015298(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 1) == '\0') {
    if (*(int *)(param_1 + 0x144) != 0) {
      *(int *)(param_1 + 0xc) = iVar1 + -8;
      return 1;
    }
  }
  else {
    *(uint *)(param_1 + 0x144) = (uint)*(byte *)(iVar1 + 1);
  }
  return 0;
}

