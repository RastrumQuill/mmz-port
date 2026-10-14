// sub_08012C04 at 0x08012C04 (thumb)

undefined4 sub_08012C04(int param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xb) & 4) == 0) {
    puVar1 = &DAT_0202e390;
  }
  else {
    puVar1 = (undefined2 *)&DAT_0202e190;
  }
  uVar2 = (uint)(ushort)puVar1[*(byte *)(param_1 + 0x1e)] + (uint)*(byte *)(param_1 + 0x22) & 0xffff
  ;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar2 << 4);
  *(char *)(param_1 + 0x23) = (char)uVar2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xdf;
  return in_lr;
}

