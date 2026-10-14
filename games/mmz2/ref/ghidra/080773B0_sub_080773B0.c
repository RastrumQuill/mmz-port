// sub_080773B0 at 0x080773B0 (thumb)

undefined4 sub_080773B0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
      sub_080128D4(param_1);
      *(undefined *)(param_1 + 0x12) = 0x80;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    }
  }
  else {
    sub_080128D4(param_1);
    if (*(int *)(param_1 + 0x5c) < 0x700) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    }
    *(int *)(param_1 + 0x54) = iVar2;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_08077450(param_1);
    }
  }
  return in_lr;
}

