// sub_080D904C at 0x080D904C (thumb)

undefined4 sub_080D904C(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(char *)(DAT_0202dbf0 + 0xf8) == '\x02') {
    uVar1 = 1;
  }
  else {
    if (*(char *)(DAT_0202dbf0 + 0xf9) != '\x02') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    uVar1 = 2;
  }
  *(undefined *)(param_1 + 0x22) = uVar1;
  sub_08128884(param_1,*(undefined4 *)(&DAT_08864d3c + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

