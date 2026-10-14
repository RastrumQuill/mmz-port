// sub_08075B60 at 0x08075B60 (thumb)

undefined4 sub_08075B60(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaf11);
    sub_08002B10(0xd8);
    sub_08005784(param_1 + 0x74,&DAT_08859970);
    *(undefined2 *)(param_1 + 0xd4) = 0x80;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (('\x03' < *(char *)(param_1 + 0x71)) &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    sVar2 = sub_08128A9C(*(undefined2 *)(param_1 + 0xd4),6);
    if (sVar2 == 0) {
      sub_08002B10(0x13c);
      sub_080CBB98(param_1,1,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    sVar2 = *(short *)(param_1 + 0xd4) + -1;
    *(short *)(param_1 + 0xd4) = sVar2;
    if (sVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

