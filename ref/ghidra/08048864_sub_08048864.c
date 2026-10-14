// sub_08048864 at 0x08048864 (thumb)

undefined4 sub_08048864(int param_1)

{
  undefined4 in_lr;
  
  sub_08029710();
  sub_08029778(param_1,0);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080297C0(param_1);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3;
  *(undefined2 *)(param_1 + 0x48) = 0x10;
  *(undefined2 *)(param_1 + 0x4a) = 0x10;
  *(undefined2 *)(param_1 + 0xb8) = 0x10;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080488D4(param_1);
  return in_lr;
}

