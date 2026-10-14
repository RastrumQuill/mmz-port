// sub_08075F48 at 0x08075F48 (thumb)

undefined4 sub_08075F48(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar2 = sub_08025794(), iVar2 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08363918);
    iVar2 = sub_08063614(param_1);
    if (iVar2 == 0) {
      if (*(char *)(param_1 + 0xb8) == '\0') {
        uVar1 = 2;
      }
      else {
        uVar1 = 4;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x20001) == 0x20001) {
    *(undefined *)(param_1 + 0xd) = 8;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

