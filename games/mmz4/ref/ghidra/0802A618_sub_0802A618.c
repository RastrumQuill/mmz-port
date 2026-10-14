// sub_0802A618 at 0x0802A618 (thumb)

undefined8 sub_0802A618(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(DAT_020359b8 + 199);
  if ((((cVar1 != '\x01') && (cVar1 != '\x03')) && (cVar1 != '\x02')) &&
     ((ushort)(DAT_0202e910 - 3U) < 8)) {
    if (*(char *)(param_1 + 1) == '\0') {
      bVar2 = *(byte *)(DAT_020359b8 + 0xf4);
      if (7 < bVar2) goto LAB_0802a66e;
      *(byte *)(DAT_020359b8 + 0xf4) = bVar2 + 1;
      sub_0810DFC0(0x114,0);
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
    if (DAT_0202f38a != 0) {
      uVar3 = 1;
      goto LAB_0802a686;
    }
  }
LAB_0802a66e:
  uVar3 = 0;
LAB_0802a686:
  return CONCAT44(in_lr,uVar3);
}

