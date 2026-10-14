// sub_0802D804 at 0x0802D804 (thumb)

undefined4 sub_0802D804(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x72) < '\x02') {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_08033A1C(param_1,3,0,0,0xc,*(undefined *)(param_1 + 0x215),0);
  }
  if ((*(char *)(param_1 + 0x1fc) == '\x05') &&
     (bVar1 = sub_08036CBC(param_1,1), (*(byte *)(param_1 + 0x196) & bVar1) != 0)) {
    *(undefined *)(param_1 + 0x2b8) = 1;
  }
  return in_lr;
}

