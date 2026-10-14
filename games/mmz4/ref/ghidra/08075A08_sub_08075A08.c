// sub_08075A08 at 0x08075A08 (thumb)

undefined4 sub_08075A08(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf05);
    sub_08002B10(0xd7);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    pcVar3 = (char *)(param_1 + 0x71);
    if ((*pcVar3 < '\x02') && (*(char *)(param_1 + 0x72) < '\x02')) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54) - *(int *)(&DAT_08859bd4 + *pcVar3 * 4);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54) + *(int *)(&DAT_08859bd4 + *pcVar3 * 4);
      }
      *(int *)(param_1 + 0x54) = iVar2;
    }
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) < '\x02') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08859958);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      sub_080CBB98(param_1,3,0x80);
    }
    else {
      sub_080CBB98(param_1,3,0);
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != -1) {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 10;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd9) = 1;
    if (*(char *)(param_1 + 0x71) < '\x05') {
      return in_lr;
    }
    sub_08005784(param_1 + 0x74,&DAT_08859970);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}

