// sub_0800DEFC at 0x0800DEFC (thumb)

undefined4 sub_0800DEFC(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  sub_080033DC(param_1 + 0x6c,*(undefined4 *)(param_2 + 0x6c));
  sub_08002030(param_1 + 0x2c,*(undefined4 *)(param_2 + 0x34),param_1 + 0x4c);
  uVar1 = *(undefined2 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 0x1c) = uVar1;
  *(undefined2 *)(param_1 + 0x42) = uVar1;
  *(undefined *)(param_1 + 0x1e) = *(undefined *)(param_2 + 0x1e);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | *(char *)(param_2 + 0x1e) << 4;
  *(undefined *)(param_1 + 0x1f) = *(undefined *)(param_2 + 0x1f);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  return in_lr;
}

