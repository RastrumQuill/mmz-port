// sub_0805F4A8 at 0x0805F4A8 (thumb)

undefined4 sub_0805F4A8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b03a4,param_1 + 0x4c,8);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    sub_08048A54(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0x1f) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar1 < 0) {
      iVar1 = *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c);
    }
    if (iVar1 < 0x6400) {
      iVar1 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
      if (iVar1 < 0) {
        iVar1 = *(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50);
      }
      if (iVar1 < 0x6400) {
        sub_0805F170(param_1);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

