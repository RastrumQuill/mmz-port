// sub_0802E6A8 at 0x0802E6A8 (thumb)

undefined4 sub_0802E6A8(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_0803D46C(param_1,1,*(undefined *)(param_1 + 0x215));
  }
  return in_lr;
}

