// sub_0804C504 at 0x0804C504 (thumb)

undefined4 sub_0804C504(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa103);
    *(undefined4 *)(param_1 + 0x60) = 0x4c0;
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
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar2 = *(int *)(param_1 + 0x60) + -0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  iVar2 = *(int *)(param_1 + 0x58) + iVar2;
  *(int *)(param_1 + 0x58) = iVar2;
  if (*(int *)(param_1 + 0xcc) < iVar2) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xcc);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 1;
  }
  return in_lr;
}

