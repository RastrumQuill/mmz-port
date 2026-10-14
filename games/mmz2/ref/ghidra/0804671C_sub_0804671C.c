// sub_0804671C at 0x0804671C (thumb)

undefined4 sub_0804671C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar1 = sub_0801E11C(0xf,param_1,&DAT_0833abfc);
      *(int *)(param_1 + 0xe0) = iVar1;
      if (iVar1 == 0) {
        return in_lr;
      }
    }
    sub_08003338((int)*(short *)(param_1 + 0xde));
    *(short *)(param_1 + 0xde) = -1;
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

