// sub_08077104 at 0x08077104 (thumb)

undefined4 sub_08077104(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    if ((*(int *)(param_1 + 0xb4) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
      if ((*(uint *)(param_1 + 0x8c) & 0x20000) == 0) {
        iVar1 = sub_080253D8(0,param_1,&DAT_08363bb8);
        *(int *)(param_1 + 0xb4) = iVar1;
        if (iVar1 != 0) {
          *(undefined *)(param_1 + 0xd) = 0;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 7;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  return in_lr;
}

