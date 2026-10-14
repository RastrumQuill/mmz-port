// sub_080BAAD8 at 0x080BAAD8 (thumb)

undefined4 sub_080BAAD8(int param_1)

{
  undefined4 in_lr;
  
  sub_080BAE68();
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080B8AA4(param_1);
  sub_080BAB00(param_1);
  return in_lr;
}

