// sub_080845F8 at 0x080845F8 (thumb)

undefined4 sub_080845F8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    sub_08007390(param_1 + 0x74,&DAT_08364af0);
    iVar1 = sub_08063614(param_1);
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

