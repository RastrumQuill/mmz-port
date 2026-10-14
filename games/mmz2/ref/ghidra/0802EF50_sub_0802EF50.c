// sub_0802EF50 at 0x0802EF50 (thumb)

undefined4 sub_0802EF50(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x71) == '\x05') && (*(char *)(param_1 + 0x72) < '\x02')) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 3;
    sub_0802EF94(param_1);
  }
  return in_lr;
}

