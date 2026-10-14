// sub_08030A40 at 0x08030A40 (thumb)

undefined4 sub_08030A40(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_0803D46C(param_1,3,*(undefined *)(param_1 + 0x215));
  }
  return in_lr;
}

