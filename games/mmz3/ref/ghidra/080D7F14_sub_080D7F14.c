// sub_080D7F14 at 0x080D7F14 (thumb)

undefined4 sub_080D7F14(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x123);
    sub_08017700(param_1,0x7900);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') goto LAB_080d7f68;
  sub_080177F4(param_1);
  if ('\x03' < *(char *)(param_1 + 0x71)) {
    sub_08007390(param_1 + 0x74,&DAT_0836d760);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
LAB_080d7f68:
  iVar1 = DAT_0202e48c - *(int *)(param_1 + 0x58);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar1 >> 3);
  return in_lr;
}

