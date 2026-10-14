// sub_08063E70 at 0x08063E70 (thumb)

undefined4 sub_08063E70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar1 = sub_08063614(param_1);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

