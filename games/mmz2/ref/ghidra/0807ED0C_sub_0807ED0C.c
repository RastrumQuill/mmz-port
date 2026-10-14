// sub_0807ED0C at 0x0807ED0C (thumb)

undefined4 sub_0807ED0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    iVar1 = *(int *)(param_1 + 0xb4);
    if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
      *(byte *)(iVar1 + 0xb4) = *(byte *)(iVar1 + 0xb4) | 1;
    }
    iVar1 = *(int *)(param_1 + 0xb8);
    if ((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) {
      *(byte *)(iVar1 + 0xb4) = *(byte *)(iVar1 + 0xb4) | 1;
    }
  }
  sub_08065A04(param_1);
  return in_lr;
}

