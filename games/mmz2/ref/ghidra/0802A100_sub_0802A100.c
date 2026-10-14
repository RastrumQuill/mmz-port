// sub_0802A100 at 0x0802A100 (thumb)

undefined4 sub_0802A100(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_08033A1C(param_1,0,0,0,5,*(undefined *)(param_1 + 0x215),*(undefined *)(param_1 + 0x2b7));
  }
  return in_lr;
}

