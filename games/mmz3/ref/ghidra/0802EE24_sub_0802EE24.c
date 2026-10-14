// sub_0802EE24 at 0x0802EE24 (thumb)

undefined4 sub_0802EE24(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 == '\0') {
    cVar1 = *(char *)(param_1 + 299);
    if (cVar1 == -1) {
      *(char *)(param_1 + 299) = -1;
      return in_lr;
    }
    *(char *)(param_1 + 0x128) = cVar1;
    if ((*(ushort *)(param_1 + 0x216) & 0x8000) != 0) goto LAB_0802eeb0;
    cVar1 = *(char *)(param_1 + 0xc5);
  }
  else {
    *(undefined *)(param_1 + 299) = 0xff;
    if ((*(ushort *)(param_1 + 0x216) & 0x8000) != 0) goto LAB_0802eeb0;
    cVar1 = *(char *)(param_1 + 0xc5);
  }
  if ((cVar1 == '\x03') || (cVar1 == '\a')) {
    uVar2 = sub_08032F3C(param_1);
    sub_080258F0(param_1,uVar2);
    *(undefined *)(param_1 + 0x147) = 1;
  }
LAB_0802eeb0:
  *(undefined *)(param_1 + 0xec) = 3;
  *(undefined *)(param_1 + 0xed) = 0;
  sub_0802EEE4(param_1);
  return in_lr;
}

