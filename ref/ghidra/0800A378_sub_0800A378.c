// sub_0800A378 at 0x0800A378 (thumb)

undefined4 sub_0800A378(int param_1)

{
  undefined4 in_lr;
  
  sub_0800696C();
  sub_08001904(0x1a,0);
  sub_08001574(&UNK_087dd7a8 + (uint)*(byte *)(param_1 + 0xf) * 0xc,
               ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  return in_lr;
}

