// sub_080D8DD8 at 0x080D8DD8 (thumb)

undefined4 sub_080D8DD8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x8600);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(int *)(*(int *)(iVar1 + 8) + 0x58) < *(int *)(param_1 + 0x58) + -0x100) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836d95c;
    *(undefined2 *)(param_1 + 0x26) = 1;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  sub_080177F4(param_1);
  return in_lr;
}

