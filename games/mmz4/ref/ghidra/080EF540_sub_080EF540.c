// sub_080EF540 at 0x080EF540 (thumb)

undefined4 sub_080EF540(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
LAB_080ef5bc:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080ef62a;
    *(undefined *)(param_1 + 0x12) = 8;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080ef62a;
      DAT_0202e12e = 0x200;
      DAT_0202df2e = 5;
      sub_08001D30(&DAT_08c4494c,0x10000);
      sub_08002208(&DAT_08c44958,(DAT_0202df2e - 4) * 0x20 + 0x200);
      sub_0801CF00(param_1,0x7700);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
      uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      goto LAB_080ef5bc;
    }
    if (bVar1 != 2) {
      if (bVar1 == 3) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
      }
      goto LAB_080ef62a;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != '\0') goto LAB_080ef62a;
    sub_0801CF00(param_1,0x7701);
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
LAB_080ef62a:
  sub_0801CFF0(param_1);
  return in_lr;
}

