// sub_080CBD4C at 0x080CBD4C (thumb)

undefined4 sub_080CBD4C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb8) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_0836c6f0);
    *(int *)(param_1 + 0xb8) = iVar1;
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

