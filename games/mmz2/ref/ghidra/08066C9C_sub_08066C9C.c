// sub_08066C9C at 0x08066C9C (thumb)

undefined4 sub_08066C9C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) != '\x01') && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if (*(int *)(param_1 + 0xc0) == 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833dcfc);
      *(int *)(param_1 + 0xc0) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

