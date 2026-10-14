// sub_080F75E8 at 0x080F75E8 (thumb)

undefined4 sub_080F75E8(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\x03') {
    sub_0801CF00(param_1,0x670b);
  }
  else {
    sub_0801CF00(param_1,0x670a);
  }
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(undefined *)(param_1 + 0x25) = 0;
  *(uint *)(param_1 + 0x5c) = (uint)(byte)(&DAT_08866d98)[*(byte *)(param_1 + 0x11)] << 8;
  *(undefined4 *)(param_1 + 0x60) = 0xfffff000;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080F701C(param_1);
  return in_lr;
}

