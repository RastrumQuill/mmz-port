// sub_080C6518 at 0x080C6518 (thumb)

undefined4 sub_080C6518(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CFF0(param_1);
    if ('\x02' < *(char *)(param_1 + 0x71)) {
      sub_08005784(param_1 + 0x74,
                   &DAT_088625ec + (uint)(byte)(&DAT_08862980)[*(byte *)(param_1 + 0x11)] * 0x18);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_08862972 + (uint)*(byte *)(param_1 + 0x11) * 2));
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_0801CFF0(param_1);
  }
  else {
    sub_0801CFF0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

