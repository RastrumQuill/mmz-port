// sub_0805A7F4 at 0x0805A7F4 (thumb)

undefined4 sub_0805A7F4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar1 = sub_0801E11C(0x14,param_1,&DAT_0833cd9c);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) {
        return in_lr;
      }
    }
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

