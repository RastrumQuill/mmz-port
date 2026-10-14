// sub_0811E424 at 0x0811E424 (thumb)

undefined4 sub_0811E424(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = (uint)param_2;
  *(byte *)(param_1 + 0xdd2) = param_2;
  sub_08001EA4(&DAT_08bfc000,(DAT_02000a04 & 0xc) * 0x1000 + 0x5800);
  if (uVar1 != 0) {
    sub_08001EA4(&DAT_08bfc000 + uVar1 * 0x14,(DAT_02000a04 & 0xc) * 0x1000 + 0x4c00);
    sub_08002208(&UNK_08bfc00c + uVar1 * 0x14,0x20);
    if (uVar1 == 0x29) {
      *(undefined *)(param_1 + 0xdd4) = 0;
    }
    if ((uVar1 - 0x2c & 0xff) < 2) {
      *(undefined *)(param_1 + 0xdd2) = 0x29;
    }
  }
  return in_lr;
}

