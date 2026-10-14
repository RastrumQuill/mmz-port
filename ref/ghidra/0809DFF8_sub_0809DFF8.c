// sub_0809DFF8 at 0x0809DFF8 (thumb)

undefined4 sub_0809DFF8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x70) != *(char *)(iVar1 + 0x70)) {
      sub_0809C930(param_1,*(char *)(iVar1 + 0x70));
    }
    sub_0809C980(param_1);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0809DF88(param_1);
  }
  return in_lr;
}

