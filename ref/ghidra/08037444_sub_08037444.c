// sub_08037444 at 0x08037444 (thumb)

undefined4 sub_08037444(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    sub_08001EAC(0x41);
    *(undefined *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}

