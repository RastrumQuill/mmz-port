// sub_0800AC90 at 0x0800AC90 (thumb)

undefined4 sub_0800AC90(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x40) != 0) {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar1 = sub_080C8CB0(*(byte *)(param_1 + 0xf) >> 2,3);
  sub_08001574(&UNK_087ddf50 + (uVar1 & 0xff) * 0xc,
               ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  if ((DAT_02022ae0 & 0x80) != 0) {
    sub_08001574(&DAT_087ddf74,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  if ((DAT_02022ae1 & 1) != 0) {
    sub_08001574(&DAT_087ddf80,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0xc) << 0xc);
  }
  return in_lr;
}

