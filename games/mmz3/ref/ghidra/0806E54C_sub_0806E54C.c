// sub_0806E54C at 0x0806E54C (thumb)

undefined4 sub_0806E54C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
      iVar1 = sub_080253D8(0,param_1,&DAT_083630dc);
      *(int *)(param_1 + 0xb4) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

