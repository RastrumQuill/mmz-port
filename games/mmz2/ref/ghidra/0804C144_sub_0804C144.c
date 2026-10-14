// sub_0804C144 at 0x0804C144 (thumb)

undefined4 sub_0804C144(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa114);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833b2b0);
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined *)(*(int *)(param_1 + 0x28) + 0x11) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    if (*(char *)(param_1 + 0xbd) != '\0') {
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
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar2 = 0xffffff80;
    }
    else {
      uVar2 = 0x80;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar5 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar5;
  iVar4 = *(int *)(param_1 + 0x60) + 0x80;
  *(int *)(param_1 + 0x60) = iVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x1c;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

