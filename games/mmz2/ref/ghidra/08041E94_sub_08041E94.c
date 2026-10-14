// sub_08041E94 at 0x08041E94 (thumb)

undefined4 sub_08041E94(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xe00);
    *(undefined2 *)(param_1 + 0xd8) = 0xe03;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      iVar2 = *(int *)(param_1 + 0xb4);
      *(int *)(param_1 + 0x54) = iVar2;
      *(undefined4 *)(param_1 + 100) = 0x20;
      uVar3 = 0;
      iVar1 = *(int *)(param_1 + 0x5c);
      do {
        iVar1 = iVar1 + 0x20;
        iVar2 = iVar2 - iVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x20);
      *(int *)(param_1 + 0x54) = iVar2;
      *(int *)(param_1 + 0x5c) = iVar1;
    }
    else {
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xb4) + 0xf000;
      *(undefined4 *)(param_1 + 100) = 0xffffffe0;
      uVar3 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x5c) + -0x20;
        *(int *)(param_1 + 0x5c) = iVar1;
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - iVar1;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x20);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x5000;
    *(undefined2 *)(param_1 + 200) = *(undefined2 *)(param_1 + 0xa4);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  if (iVar1 == 0) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

