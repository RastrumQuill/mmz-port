// sub_080C2134 at 0x080C2134 (thumb)

undefined4 sub_080C2134(int param_1)

{
  undefined4 in_lr;
  
  sub_080128D4();
  sub_08006E08(param_1 + 0x74,&DAT_08348958);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  sub_080C1D1C(param_1);
  return in_lr;
}

