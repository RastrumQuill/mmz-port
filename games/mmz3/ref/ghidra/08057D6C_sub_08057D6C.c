// sub_08057D6C at 0x08057D6C (thumb)

undefined4 sub_08057D6C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) != 0) {
      *(undefined *)(param_1 + 0xd) = 0x14;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
      iVar1 = sub_080253D8(0x19,param_1,&DAT_0836123c);
      *(int *)(param_1 + 0xb8) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

