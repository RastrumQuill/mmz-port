// sub_08125928 at 0x08125928 (thumb)

undefined8 sub_08125928(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xde0) + -1;
  *(int *)(param_1 + 0xde0) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0xde0) = 0;
  }
  if (*(int *)(param_1 + 0xde0) == 0) {
    *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    *(undefined *)(param_1 + 0xde5) = 0;
  }
  return CONCAT44(in_lr,1);
}

