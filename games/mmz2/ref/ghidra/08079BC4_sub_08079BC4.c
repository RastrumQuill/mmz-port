// sub_08079BC4 at 0x08079BC4 (thumb)

undefined4 sub_08079BC4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08079850(param_1);
  }
  return in_lr;
}

