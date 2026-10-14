// sub_080385C0 at 0x080385C0 (thumb)

undefined4 sub_080385C0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ad7fc);
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_08038A5C(param_1,0x11);
    *(undefined *)(param_1 + 0x12) = 0x46;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x58) = 0x700;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  cVar1 = sub_08038B38(param_1,*(undefined4 *)(param_1 + 0x58));
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(undefined *)(param_1 + 0x13) = 1;
      sub_08038A5C(param_1,4);
    }
    if (*(char *)(param_1 + 0x12) == '\0') {
      if (*(char *)(param_1 + 0xce) == '\x04') {
        sub_08038A5C(param_1,0x12);
        *(undefined *)(param_1 + 0x10) = 0;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined2 *)(param_1 + 0xe) = 0;
      }
      else {
        sub_08001EAC(0xcf);
        sub_080369F0(param_1);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      }
    }
  }
  return in_lr;
}

