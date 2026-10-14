// sub_080AB6E4 at 0x080AB6E4 (thumb)

undefined4 sub_080AB6E4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x40);
  if (*(char *)(iVar1 + 8) == '\0') {
    *(int *)(*(int *)(param_1 + 0x40) + 0xbc) = iVar1;
    DAT_02022b70 = DAT_02022b70 | 1;
    sub_0801D59C(iVar1);
  }
  return in_lr;
}

