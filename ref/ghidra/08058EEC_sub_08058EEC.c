// sub_08058EEC at 0x08058EEC (thumb)

undefined4 sub_08058EEC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,0);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + 6;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) + -6;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar1;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  if (iVar1 < 8) {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

