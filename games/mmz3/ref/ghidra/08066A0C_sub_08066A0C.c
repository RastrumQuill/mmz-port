// sub_08066A0C at 0x08066A0C (thumb)

undefined4 sub_08066A0C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_083625ec);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_08007390(param_1 + 0x74,&DAT_083625d4);
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

