// sub_08001AE0 at 0x08001AE0 (thumb)

undefined8 sub_08001AE0(uint param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  *param_2 = (byte)(param_1 >> 8) >> 4 & 3;
  uVar1 = (param_1 & 0x3fff) << 0x10;
  uVar2 = param_1 & 0xfff;
  if (((uint)*(ushort *)(&DAT_08312364 + (uVar1 >> 0x1a) * 2) +
       (uint)*(ushort *)(&DAT_08312364 + (uVar1 >> 0x15 & 0x1f) * 2) +
       (uint)*(ushort *)(&DAT_08312364 + (param_1 & 0x1f) * 2) & 3) != (param_1 << 0x10) >> 0x1e) {
    uVar2 = (uint)(short)-(short)uVar2;
  }
  return CONCAT44(in_lr,uVar2);
}

