// sub_080AE290 at 0x080AE290 (thumb)

undefined4 sub_080AE290(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080AE2E4(param_1);
  }
  else {
    sub_080AE3DC(param_1);
  }
  return in_lr;
}

