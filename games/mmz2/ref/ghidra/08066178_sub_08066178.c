// sub_08066178 at 0x08066178 (thumb)

undefined4 sub_08066178(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xc0) != 0) {
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

