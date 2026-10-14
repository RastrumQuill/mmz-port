// sub_0805F200 at 0x0805F200 (thumb)

undefined4 sub_0805F200(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar1 + 8) == '\0')) {
    *(int *)(iVar2 + 0xdc) = iVar1;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x54) < *(int *)(iVar1 + 0x54);
  }
  return in_lr;
}

