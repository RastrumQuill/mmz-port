// sub_08078AA8 at 0x08078AA8 (thumb)

undefined4 sub_08078AA8(int param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    pbVar2 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    iVar3 = (uint)*(byte *)(param_1 + 0xc5) * 2;
    *pbVar2 = *pbVar2 & ~(byte)(1 << (&DAT_08859dfc)[iVar3]);
    pbVar2 = (byte *)(*(int *)(param_1 + 0xcc) + 0xba);
    *pbVar2 = *pbVar2 & ~(byte)(1 << (&DAT_08859dfd)[iVar3]);
    sub_08002624(0x85);
    sub_0801D3D0(param_1,5);
    sub_08078ED4(param_1,0);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E20(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

