// sub_080C2338 at 0x080C2338 (thumb)

undefined4 sub_080C2338(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080C2300();
  return in_lr;
}

