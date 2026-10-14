// sub_080C4560 at 0x080C4560 (thumb)

undefined4 sub_080C4560(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080126A0(param_1);
  sub_08002638(&DAT_084337a0,(DAT_0202e6a0 - 0x300) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_084337ac,(DAT_0202e4a0 - 9) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

