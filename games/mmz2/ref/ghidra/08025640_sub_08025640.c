// sub_08025640 at 0x08025640 (thumb)

undefined4 sub_08025640(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x176);
  if (bVar1 == 0) {
    bVar1 = sub_08034A24(param_1);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x380;
  *(undefined4 *)(param_1 + 200) = 0;
  sub_080AD578(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,0x200);
  *(undefined *)(param_1 + 0x12) = 3;
  if ((bVar1 < 3) || (*(char *)(param_1 + 0x2b6) == '\0')) {
    *(undefined *)(param_1 + 0xf) = 1;
    if (bVar1 < 3) {
      sub_0801E9FC(param_1,3);
    }
    *(undefined *)(param_1 + 0x184) = 0x1c;
    sub_080256C4(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  sub_0801E6AC(8);
  return in_lr;
}

