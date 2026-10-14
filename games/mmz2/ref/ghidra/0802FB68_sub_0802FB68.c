// sub_0802FB68 at 0x0802FB68 (thumb)

undefined4 sub_0802FB68(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = sub_08034B50(param_1);
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        sub_0802FCB8(param_1);
        return in_lr;
      }
      sub_0802FCBC(param_1);
      return in_lr;
    }
  }
  *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
  *(undefined *)(param_1 + 0x176) = 1;
  *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
  *(undefined *)(param_1 + 0x177) = 0;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 0;
  *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
  *(undefined *)(param_1 + 0x179) = 0;
  *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) & 0x7f;
  sub_0802FBFC(param_1);
  return in_lr;
}

