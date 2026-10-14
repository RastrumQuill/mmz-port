// sub_0806C82C at 0x0806C82C (thumb)

undefined4 sub_0806C82C(int param_1)

{
  byte bVar1;
  undefined uVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1906);
    sub_08007390(param_1 + 0x74,&DAT_08362d58);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar4 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    *(undefined *)(param_1 + 0x12) = 0xff;
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar4 < 0x4001) {
      *(undefined *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_0800471C(0x11f);
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x4000 < uVar4) goto LAB_0806c902;
    uVar2 = 1;
  }
  else {
    uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar4 < 0x4001) goto LAB_0806c902;
    uVar2 = 0;
  }
  *(undefined *)(param_1 + 0x13) = uVar2;
LAB_0806c902:
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar3 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar3, cVar3 == '\0')) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

