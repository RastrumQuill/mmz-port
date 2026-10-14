// sub_080C9B84 at 0x080C9B84 (thumb)

undefined4 sub_080C9B84(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

