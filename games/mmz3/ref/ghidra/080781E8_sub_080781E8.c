// sub_080781E8 at 0x080781E8 (thumb)

undefined4 sub_080781E8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = sub_08025794(), iVar1 != 0)) {
    sub_08007390(param_1 + 0x74,&DAT_08363cd0);
    *(int *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

