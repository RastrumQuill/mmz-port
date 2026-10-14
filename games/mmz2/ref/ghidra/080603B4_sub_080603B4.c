// sub_080603B4 at 0x080603B4 (thumb)

undefined4 sub_080603B4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab00);
    sub_08006E08(param_1 + 0x74,&DAT_0833d13c);
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    uVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if (uVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x5000;
      uVar2 = 0xffffffe0;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc0) + -0x5000;
      uVar2 = 0x20;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 200) + -0x5400;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    uVar3 = 0;
    do {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x30);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar4 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
  if (iVar4 == 0) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x80;
  }
  return in_lr;
}

