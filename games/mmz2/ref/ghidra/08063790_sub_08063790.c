// sub_08063790 at 0x08063790 (thumb)

undefined4 sub_08063790(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x2500);
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
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 200) + -0x3000;
      uVar2 = 8;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xc4) + 0x3000;
      uVar2 = 0xfffffff8;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar5 = 0x3f;
    do {
      iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar4;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
    *(undefined *)(param_1 + 0xbd) = 0;
    *(undefined *)(param_1 + 0xc3) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar5 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar5;
  if (iVar5 == 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

