// sub_081015A4 at 0x081015A4 (thumb)

undefined4 sub_081015A4(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(param_1 + 0x11) + 0x45;
  if (((int)(uint)(byte)(&DAT_0202e8b4)[(int)uVar1 >> 3] >> (uVar1 & 7) & 1U) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08101158(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    sub_08101140(param_1);
  }
  return in_lr;
}

