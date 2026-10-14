// sub_080D90BC at 0x080D90BC (thumb)

undefined4 sub_080D90BC(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(DAT_0202dbf0 + 0xfa) == '\x02') ||
     ((*(char *)(DAT_0202dbf0 + 0xf8) != '\x02' && (*(char *)(DAT_0202dbf0 + 0xf9) != '\x02')))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  else {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08864d48 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

