// sub_0806C900 at 0x0806C900 (thumb)

undefined4 sub_0806C900(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa1b);
    sub_08002B10(0xcd);
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 100) = 0x20;
    if (*(short *)(param_1 + 0xa4) < 0x10) {
      uVar2 = 0x480;
    }
    else if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar2 = 0x440;
    }
    else {
      uVar2 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar1 = 0x73;
    }
    else {
      uVar1 = 0xd;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    sub_08005784(param_1 + 0x74,&DAT_08858f70);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if ('\0' < *(char *)(param_1 + 0x71)) {
      sub_08005784(param_1 + 0x74,&DAT_08858f58);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else {
    if ((*(char *)(param_1 + 0xf) == '\x01') && ('\x03' < *(char *)(param_1 + 0x71))) {
      sub_08002B10(0xd2);
      sub_080CA0E0(param_1,0,3);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) +
         (iVar4 * *(short *)((int)&DAT_08128c10 +
                            ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (iVar4 * (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] >> 8)
    ;
    iVar3 = *(int *)(param_1 + 0x60);
    if (iVar3 < iVar4) {
      iVar3 = iVar4 - *(int *)(param_1 + 100);
    }
    *(int *)(param_1 + 0x5c) = iVar3;
    if (*(int *)(param_1 + 0xb8) < *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x5c) =
           (int)*(short *)((int)&DAT_08128c10 +
                          ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) *
           *(int *)(param_1 + 0x5c) >> 8;
      *(undefined *)(param_1 + 0xd) = 0x1c;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

