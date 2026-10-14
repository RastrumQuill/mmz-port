// sub_0804F614 at 0x0804F614 (thumb)

undefined4 sub_0804F614(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809F624(*(undefined4 *)(param_1 + 200),2);
    sub_08006E08(param_1 + 0x74,&DAT_0833b87c);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    iVar6 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = 0 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    bVar1 = 0 < *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_080127E4(param_1,0xa400);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    iVar6 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar6 < 0) {
      iVar6 = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
    }
    do {
      uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar4 & 0x7fffffff;
      uVar4 = uVar4 * 2 >> 0x11 & 0xf;
      if (iVar6 < 0x6401) {
        puVar5 = &DAT_0833c0a2 + uVar4;
      }
      else if (iVar6 < 0xa001) {
        puVar5 = &DAT_0833c0b2 + uVar4;
      }
      else {
        puVar5 = &DAT_0833c0c2 + uVar4;
      }
      *(undefined *)(param_1 + 0xd) = *puVar5;
      bVar1 = false;
      sub_0804EE3C(param_1,*(undefined *)(param_1 + 0xd));
      if (((1 < *(byte *)(param_1 + 0xc6)) && (*(char *)(param_1 + 0xd) != '\x16')) ||
         ((*(byte *)(param_1 + 0xc6) != 0 && (*(char *)(param_1 + 0xd) == '\x16')))) {
        bVar1 = true;
      }
      if (((*(byte *)(DAT_0202ebf0 + 1) < 5) || (0x30 < *(short *)(param_1 + 0xa4))) &&
         (*(char *)(param_1 + 0xd) == '\x16')) {
        bVar1 = true;
      }
    } while (bVar1);
    *(bool *)(param_1 + 0xe) = bVar1;
  }
  sub_080128D4(param_1);
  return in_lr;
}

