// sub_08062230 at 0x08062230 (thumb)

undefined4 sub_08062230(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

