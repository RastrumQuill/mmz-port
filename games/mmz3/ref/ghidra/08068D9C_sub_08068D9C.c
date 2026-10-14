// sub_08068D9C at 0x08068D9C (thumb)

undefined4 sub_08068D9C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08362984);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    sub_08007390(param_1 + 0x74,&DAT_0836296c);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

