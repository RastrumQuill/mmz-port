// sub_08050C2C at 0x08050C2C (thumb)

undefined4 sub_08050C2C(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_0800393C(&DAT_085d7ed4,(DAT_0202faa6 - 0x2f0) * 0x20 + 0x10000);
    sub_08003E14(&DAT_085d7ee0,(DAT_0202f8a6 - 7) * 0x20 + 0x200);
    uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar2 & 0x7fffffff;
    uVar2 = uVar2 * 2 >> 0x11 & 7;
    if (*(short *)(param_1 + 0xa4) < 0x20) {
      uVar2 = uVar2 + 8;
    }
    *(undefined *)(param_1 + 0x12) = (&DAT_0835fd91)[uVar2];
    *(undefined *)(param_1 + 0x13) = 0x1e;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x13) = 0x60;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe) = 1;
    }
    sub_0800471C(0x55);
    sub_080CD79C(param_1,*(char *)(param_1 + 0x12) == '\0');
  }
  return in_lr;
}

