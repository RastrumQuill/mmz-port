// sub_080D7DE8 at 0x080D7DE8 (thumb)

undefined4 sub_080D7DE8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836d670);
    sub_08017700(param_1,0x7902);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080d7e2a;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080177F4(param_1);
LAB_080d7e2a:
  iVar1 = DAT_0202e48c - *(int *)(param_1 + 0x58);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar1 >> 3);
  return in_lr;
}

