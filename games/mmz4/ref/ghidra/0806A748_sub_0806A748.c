// sub_0806A748 at 0x0806A748 (thumb)

undefined4 sub_0806A748(int param_1,int param_2)

{
  int local_10 [4];
  
  local_10[0] = *(int *)(param_1 + 0xd8);
  local_10[1] = *(int *)(param_1 + 0xd8) + 0xcfff;
  local_10[2] = *(int *)(param_1 + 0xdc);
  local_10[3] = *(int *)(param_1 + 0xdc) + 0x7fff;
  return *(undefined4 *)((int)local_10 + ((uint)(param_2 << 0x18) >> 0x16));
}

