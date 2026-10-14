// sub_080D8E38 at 0x080D8E38 (thumb)

undefined4 sub_080D8E38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(int *)(param_1 + 0x60) = (int)*(short *)(iVar1 + 0x2c);
    sub_08017700(param_1,0x8600);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x5c) >> 8;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 100) +
       *(short *)((int)&DAT_080fe64c + ((uint)((iVar2 + 0x40) * 0x1000000) >> 0x17)) * 0x30;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x68) +
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar2 << 0x18) >> 0x17)) * 8;
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar2 = -*(int *)(param_1 + 0x60);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + iVar2;
  if (*(int *)(*(int *)(iVar1 + 8) + 0x58) < *(int *)(param_1 + 0x58) + -0x100) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836d964;
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  sub_080177F4(param_1);
  return in_lr;
}

