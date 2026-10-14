// sub_080F1080 at 0x080F1080 (thumb)

undefined4 sub_080F1080(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
LAB_080f10b6:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080f1106;
    uVar3 = 0xa529;
LAB_080f10fa:
    sub_0801CF00(param_1,uVar3);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080f1106;
      sub_0801CF00(param_1,0xa528);
      uVar3 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      goto LAB_080f10b6;
    }
    if (bVar1 != 2) {
      if ((bVar1 != 3) ||
         (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != '\0'))
      goto LAB_080f1106;
      uVar3 = 0xa52a;
      goto LAB_080f10fa;
    }
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0) goto LAB_080f1106;
    sub_0801CF00(param_1,0xa529);
    *(undefined *)(param_1 + 0x12) = 0x3c;
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
LAB_080f1106:
  sub_0801CFF0(param_1);
  return in_lr;
}

