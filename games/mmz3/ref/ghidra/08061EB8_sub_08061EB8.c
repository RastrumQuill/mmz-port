// sub_08061EB8 at 0x08061EB8 (thumb)

undefined4 sub_08061EB8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_083620f4);
    *(int *)(param_1 + 0xb4) = iVar1;
    if (iVar1 != 0) {
      *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfffffffb;
      *(undefined *)(param_1 + 0xd) = 0xf;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

