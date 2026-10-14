// sub_080B8C70 at 0x080B8C70 (thumb)

undefined4 sub_080B8C70(int param_1,int param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)(param_2 << 0x18) >> 0x16;
  sub_080033DC(param_1 + 0x6c,*(undefined4 *)(&DAT_085bc000 + uVar1));
  sub_080020A4(param_1 + 0x2c,*(undefined4 *)(&DAT_08594000 + uVar1),param_1 + 0x4c);
  *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(param_1 + 0x1c);
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | *(char *)(param_1 + 0x1e) << 4;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 10) >> 4 & 1;
  *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 10) >> 5 & 1;
  *(undefined *)(param_1 + 0x1f) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined2 *)(param_1 + 0x4a) = 0x100;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x48;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
  return in_lr;
}

