// sub_0802E5AC at 0x0802E5AC (thumb)

undefined4 sub_0802E5AC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 4;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  sub_08036B0C(param_1,0,0);
  sub_0802E4B4(param_1);
  return in_lr;
}

