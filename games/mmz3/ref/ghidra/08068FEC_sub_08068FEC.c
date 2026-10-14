// sub_08068FEC at 0x08068FEC (thumb)

undefined4 sub_08068FEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_08362a70);
    *(int *)(param_1 + 0xb4) = iVar1;
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

