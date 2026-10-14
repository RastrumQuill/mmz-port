// sub_080D22B8 at 0x080D22B8 (thumb)

undefined4 sub_080D22B8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080175BC(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0x180;
    *(undefined2 *)(param_1 + 0x52) = 0x180;
    sub_08017700(param_1,0x2100);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + 0x1e00;
    *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x1e00;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  iVar1 = *(int *)(param_1 + 0x54) + 0x400;
  *(int *)(param_1 + 0x54) = iVar1;
  if (DAT_020302c0 + 0xb7ff < iVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

