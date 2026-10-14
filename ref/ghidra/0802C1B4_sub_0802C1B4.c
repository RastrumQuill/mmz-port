// sub_0802C1B4 at 0x0802C1B4 (thumb)

undefined4 sub_0802C1B4(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082ace14);
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_0802B670(param_1);
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 1) == 0) {
      uVar3 = 0xd;
    }
    else {
      uVar3 = 0xc;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

