// sub_080773A8 at 0x080773A8 (thumb)

undefined4 sub_080773A8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_08007390(param_1 + 0x74,&DAT_08363a98);
    }
    else {
      sub_08007390(param_1 + 0x74,&DAT_08363b28);
    }
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x10) == '\x01') {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 2;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

