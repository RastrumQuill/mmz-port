// sub_080837C8 at 0x080837C8 (thumb)

undefined4 sub_080837C8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080838E8(param_1);
  }
  else {
    sub_08083950(param_1);
  }
  sub_08083818(param_1);
  return in_lr;
}

