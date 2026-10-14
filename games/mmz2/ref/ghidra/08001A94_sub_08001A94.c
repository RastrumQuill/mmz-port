// sub_08001A94 at 0x08001A94 (thumb)

undefined8 sub_08001A94(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar1 = param_1 & 0xfff | (param_2 & 3) << 0xc;
  uVar2 = uVar1 << 0x10;
  return CONCAT44(in_lr,((uint)*(ushort *)(&DAT_08312324 + (uVar2 >> 0x1a) * 2) +
                         (uint)*(ushort *)(&DAT_08312324 + (uVar2 >> 0x15 & 0x1f) * 2) +
                         (uint)*(ushort *)(&DAT_08312324 + (param_1 & 0x1f) * 2) & 3) << 0xe | uVar1
                 );
}

