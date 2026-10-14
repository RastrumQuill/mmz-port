// sub_08075C1C at 0x08075C1C (thumb)

undefined4 sub_08075C1C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
      if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
        iVar1 = sub_080253D8(0,param_1,&DAT_083639a8);
        *(int *)(param_1 + 0xb4) = iVar1;
        if (iVar1 != 0) {
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 8;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

