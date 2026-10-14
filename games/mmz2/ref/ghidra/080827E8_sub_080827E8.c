// sub_080827E8 at 0x080827E8 (thumb)

undefined4 sub_080827E8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar2 = *(byte *)(param_1 + 0x11);
    if (bVar2 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar2 & 1) << 4);
    sub_080127E4(param_1,0x6e00);
    sub_08006E08(param_1 + 0x74,&DAT_083410e8);
    *(undefined *)(param_1 + 0x12) = 0x50;
    uVar4 = 0xfffffe00;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    uVar4 = sub_080EF150(*(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58),0x50);
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar2 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if (((bVar2 & 7) == 0) &&
     (uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar3 & 0x7fffffff,
     (uVar3 * 2 >> 0x11 & 3) == 0)) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar5 = -0xc00;
    }
    else {
      iVar5 = 0xc00;
    }
    sub_080AC8A4(*(int *)(param_1 + 0x54) + iVar5,*(undefined4 *)(param_1 + 0x58),0);
  }
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if (0x14000 < (*(int *)(param_1 + 0xb4) - iVar5) + 0xa000U) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

