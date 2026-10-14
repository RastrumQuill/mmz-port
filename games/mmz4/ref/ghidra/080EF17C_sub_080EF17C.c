// sub_080EF17C at 0x080EF17C (thumb)

undefined4 sub_080EF17C(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
  if (*(char *)(param_1 + 0x11) == '\x01') {
    sub_0801CDBC(param_1);
    *(undefined4 *)(param_1 + 100) = 0x200;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
  }
  else {
    sub_0801CC9C(param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080ED1D8(param_1);
  return in_lr;
}

