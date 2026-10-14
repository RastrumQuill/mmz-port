// sub_080CBD88 at 0x080CBD88 (thumb)

undefined4 sub_080CBD88(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb8) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb8) = 0;
    if (*(byte *)(param_1 + 0x10) < 4) {
      *(undefined *)(param_1 + 0xd) = 0;
      sub_08007390(param_1 + 0x74,&DAT_0836c69c);
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      sub_08007390(param_1 + 0x74,&DAT_0836c66c);
    }
  }
  return in_lr;
}

