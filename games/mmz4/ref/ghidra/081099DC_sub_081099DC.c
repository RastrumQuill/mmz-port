// sub_081099DC at 0x081099DC (thumb)

undefined4 sub_081099DC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar1 = sub_08109B20(param_1);
  if ((cVar1 == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      return in_lr;
    }
    sub_08002B10(0x2b);
  }
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08869378)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

