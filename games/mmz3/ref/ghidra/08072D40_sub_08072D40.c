// sub_08072D40 at 0x08072D40 (thumb)

undefined4 sub_08072D40(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083633f0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xbc));
  if (iVar1 != 0) {
    sub_08007390(param_1 + 0x74,&DAT_083633d8);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

