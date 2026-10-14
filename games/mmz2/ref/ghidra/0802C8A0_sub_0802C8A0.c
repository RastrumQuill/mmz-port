// sub_0802C8A0 at 0x0802C8A0 (thumb)

undefined4 sub_0802C8A0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_08033A1C(param_1,2,0,0,9,*(undefined *)(param_1 + 0x215),0);
  }
  if (('\0' < *(char *)(param_1 + 0x2b8)) && (*(char *)(param_1 + 0x1fc) != '\x05')) {
    *(char *)(param_1 + 0x2b8) = '\0';
  }
  return in_lr;
}

