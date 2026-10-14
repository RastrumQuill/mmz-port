// sub_08102B00 at 0x08102B00 (thumb)

undefined4 sub_08102B00(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_08868830;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xb5) = (char)DAT_0202dae0;
  *(undefined *)(param_1 + 0xb4) = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
  }
  else {
    sub_08102CC4(param_1);
  }
  sub_08102B98(param_1);
  return in_lr;
}

