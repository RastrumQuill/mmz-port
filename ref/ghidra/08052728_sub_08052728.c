// sub_08052728 at 0x08052728 (thumb)

undefined4 sub_08052728(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
    *(undefined4 *)(param_1 + 0xbc) = 0x4000;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffb00;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar1;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar1 = *(int *)(param_1 + 0xbc) - iVar1;
  *(int *)(param_1 + 0xbc) = iVar1;
  if (iVar1 < 0) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x10) = 1;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x30;
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

