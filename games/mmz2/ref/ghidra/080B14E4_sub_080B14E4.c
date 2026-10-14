// sub_080B14E4 at 0x080B14E4 (thumb)

undefined4 sub_080B14E4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((DAT_0202ebbb & 0x20) == 0) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_080B1550(param_1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

