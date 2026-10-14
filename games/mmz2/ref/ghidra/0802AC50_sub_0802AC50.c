// sub_0802AC50 at 0x0802AC50 (thumb)

undefined4 sub_0802AC50(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 1;
  sub_08036A0C(param_1);
  sub_0802AC80(param_1);
  return in_lr;
}

