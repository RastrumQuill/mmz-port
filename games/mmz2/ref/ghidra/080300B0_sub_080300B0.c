// sub_080300B0 at 0x080300B0 (thumb)

undefined4 sub_080300B0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_08033A1C(param_1,5,0,0,0x14,*(undefined *)(param_1 + 0x215),0);
  }
  return in_lr;
}

