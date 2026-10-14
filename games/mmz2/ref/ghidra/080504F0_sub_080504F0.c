// sub_080504F0 at 0x080504F0 (thumb)

undefined4 sub_080504F0(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 200);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc5) = 0x3c;
    sub_080127E4(param_1,0xa413);
    sub_0809F624(uVar4,2);
    sub_08006E08(param_1 + 0x74,&DAT_0833b87c);
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    uVar4 = 0x80;
    if (0 < *(int *)(param_1 + 0xb4)) {
      uVar4 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) * 0xf0;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  sub_0804EBC4(param_1);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
    iVar3 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar3 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 1;
    sub_0804F614(param_1);
  }
  return in_lr;
}

