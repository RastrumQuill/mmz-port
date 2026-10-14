// sub_080EF994 at 0x080EF994 (thumb)

undefined4 sub_080EF994(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
LAB_080efa04:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080efa40;
    sub_0801CF00(param_1,0xc200);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080efa40;
      DAT_0202e3c4 = 0x200;
      DAT_0202ddc4 = 4;
      sub_0801CF00(param_1,0xc201);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      uVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      goto LAB_080efa04;
    }
    if ((bVar1 != 2) || ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0)) goto LAB_080efa40;
    sub_08112080(&DAT_0202f610,0x40400);
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
LAB_080efa40:
  sub_0801CFF0(param_1);
  return in_lr;
}

