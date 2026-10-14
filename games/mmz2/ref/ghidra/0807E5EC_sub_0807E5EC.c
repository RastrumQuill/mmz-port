// sub_0807E5EC at 0x0807E5EC (thumb)

undefined4 sub_0807E5EC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    sub_080EF118(param_1,*(undefined4 *)(&DAT_0834089c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807E634(param_1);
  }
  return in_lr;
}

