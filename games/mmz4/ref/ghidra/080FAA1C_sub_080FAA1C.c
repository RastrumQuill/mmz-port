// sub_080FAA1C at 0x080FAA1C (thumb)

undefined4 sub_080FAA1C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined auStack_14 [4];
  undefined auStack_10 [4];
  
  sub_08128B5C(auStack_14,&DAT_08129de8,4);
  sub_08128B5C(auStack_10,&DAT_08129dec,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = sub_08073D4C(auStack_10,4);
    *(undefined *)(param_1 + 0xb5) = auStack_14[iVar1];
    *(undefined4 *)(param_1 + 0xb8) = 0xc0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar1 = *(int *)(param_1 + 0xb8) + -1;
  *(int *)(param_1 + 0xb8) = iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

