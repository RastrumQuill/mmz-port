// sub_080D9894 at 0x080D9894 (thumb)

undefined4 sub_080D9894(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xca) = *(char *)(param_1 + 0xca) + '\x04';
  iVar1 = *(int *)(param_1 + 0xcc);
  *(int *)(param_1 + 0xcc) = iVar1 + 0x300;
  if ((*(char *)(param_1 + 0xd) == '\x02') && (iVar1 - 0x5d00U < 0x300)) {
    *(undefined *)(param_1 + 0xd) = 3;
    sub_080D9C14(*(undefined4 *)(param_1 + 0xd0));
  }
  return in_lr;
}

