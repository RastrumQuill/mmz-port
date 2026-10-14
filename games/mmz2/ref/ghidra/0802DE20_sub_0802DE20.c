// sub_0802DE20 at 0x0802DE20 (thumb)

undefined4 sub_0802DE20(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\x01') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
  }
  return in_lr;
}

