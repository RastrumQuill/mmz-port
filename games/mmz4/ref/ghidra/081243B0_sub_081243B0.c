// sub_081243B0 at 0x081243B0 (thumb)

undefined8 sub_081243B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xde0) == 0) ||
     (iVar1 = *(int *)(param_1 + 0xde0) + -1, *(int *)(param_1 + 0xde0) = iVar1, iVar1 == 0)) {
    *(char *)(param_1 + 0xde4) = *(char *)(param_1 + 0xde4) + '\x01';
    *(undefined *)(param_1 + 0xde5) = 0;
  }
  return CONCAT44(in_lr,1);
}

