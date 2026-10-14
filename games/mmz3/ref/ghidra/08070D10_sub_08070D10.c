// sub_08070D10 at 0x08070D10 (thumb)

undefined4 sub_08070D10(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836326c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = sub_08025794(*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 != 0) {
    sub_08007390(param_1 + 0x74,&DAT_0836320c);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

