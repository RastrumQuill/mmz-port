// sub_0810AE8C at 0x0810AE8C (thumb)

undefined4 sub_0810AE8C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (((*(char *)(iVar1 + 2) == '\0') || (*(byte *)(iVar1 + 3) < 3)) ||
     (*(char *)(iVar1 + 0xdf7) == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(uint *)(param_1 + 0x58) = (uint)*(byte *)(iVar1 + 0xdd3) * 0x1000 + 0x1800;
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

