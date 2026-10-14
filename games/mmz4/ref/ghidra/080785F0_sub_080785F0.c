// sub_080785F0 at 0x080785F0 (thumb)

undefined4 sub_080785F0(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar2 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    iVar3 = (uint)*(byte *)(param_1 + 0xc5) * 2;
    *pbVar2 = (byte)(1 << (&DAT_08859dfc)[iVar3]) | *pbVar2;
    pbVar2 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    *pbVar2 = (byte)(1 << (&DAT_08859dfd)[iVar3]) | *pbVar2;
    sub_0801D3D0(param_1,6);
    sub_0800249C(0x84,0x2c0);
    sub_08078ED4(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E20(param_1);
  uVar1 = sub_080025D8(0x84);
  if ((uVar1 & 0xff) - 3 < 2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

