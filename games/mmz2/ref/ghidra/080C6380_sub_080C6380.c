// sub_080C6380 at 0x080C6380 (thumb)

undefined4 sub_080C6380(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08012580(param_1);
  *(int *)(param_1 + 0x40) = param_1 + 100;
  sub_08002638(&DAT_08433804,(DAT_0202e6aa - 0x300) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08433810,(DAT_0202e4aa - 6) * 0x20 + 0x200);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080C22E8(param_1);
  return in_lr;
}

