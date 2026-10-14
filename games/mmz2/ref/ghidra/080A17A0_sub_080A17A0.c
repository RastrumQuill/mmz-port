// sub_080A17A0 at 0x080A17A0 (thumb)

undefined4 sub_080A17A0(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08344534,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    sub_08012738(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0xa719);
    bVar2 = *(byte *)(param_1 + 0xb5);
    if (bVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
    *(undefined *)(param_1 + 0x24) = *(undefined *)(param_1 + 0xb4);
    *(undefined *)(param_1 + 0x12) = 0x26;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar2 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar2;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if ((cVar3 == '\0') || (1 < *(byte *)(iVar4 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  }
  piVar5 = (int *)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0x5c) * *piVar5;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
  iVar4 = *piVar5 * *(int *)(param_1 + 0x60);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
  *piVar5 = *piVar5 + -0x70;
  sub_08012A14(param_1);
  return in_lr;
}

