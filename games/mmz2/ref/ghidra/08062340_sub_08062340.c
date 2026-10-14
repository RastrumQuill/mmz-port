// sub_08062340 at 0x08062340 (thumb)

undefined4 sub_08062340(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) & 0xfffffffc;
  piVar2 = (int *)(param_1 + 0xb8);
  iVar1 = ((*piVar2 + 0x3000 + (uint)*(byte *)(param_1 + 0x10) * -0x6000) - *(int *)(param_1 + 0x54)
          ) * 0x18;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar1 >> 8);
  *(undefined *)(param_1 + 0xc1) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*piVar2 + 0x2f00 <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0x54) <= *piVar2 + -0x2f00) {
    return in_lr;
  }
  *(undefined *)(param_1 + 0xc1) = 1;
  return in_lr;
}

