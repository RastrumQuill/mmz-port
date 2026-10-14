// sub_0805B7D0 at 0x0805B7D0 (thumb)

undefined4 sub_0805B7D0(int param_1)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa909);
    iVar2 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar2 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0x18;
      uVar5 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar5 & 0x7fffffff;
      cVar4 = sub_080EF330(uVar5 * 2 >> 0x11,3);
      *(char *)(param_1 + 0x13) = cVar4 + '\x01';
      *(char *)(param_1 + 0xf) = cVar4;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 0x19;
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

