// sub_080D8524 at 0x080D8524 (thumb)

undefined4 sub_080D8524(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_0801749C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined **)(param_1 + 0x30) = &DAT_0836d854;
  *(undefined2 *)(param_1 + 0x26) = 0x2001;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + -0x800;
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_08017700(param_1,0x7c01);
  }
  else {
    sub_08017700(param_1,32000);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080D85AC(param_1);
  return in_lr;
}

