// sub_080C81D0 at 0x080C81D0 (thumb)

undefined4 sub_080C81D0(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080126A0(param_1);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  DAT_0202e69a = 0x390;
  DAT_0202e49a = 7;
  sub_08002638(&DAT_08433764,0x11000);
  sub_08002AEC(&DAT_08433770,(DAT_0202e49a - 6) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

