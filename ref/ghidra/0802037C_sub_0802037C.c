// sub_0802037C at 0x0802037C (thumb)

undefined4 sub_0802037C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  cVar1 = *(char *)(param_1 + 0x115);
  if ((cVar1 == -0x69) || (cVar1 == -0x67)) {
    *(undefined *)(param_1 + 0x129) = 0xff;
    goto LAB_080203fa;
  }
  *(undefined *)(param_1 + 0x129) = 4;
  if (cVar1 == -0x6a) {
LAB_080203d6:
    sub_08018BE8(param_1,0x97);
  }
  else {
    if (cVar1 != -0x68) {
      if ((int)*(char *)(param_1 + 299) == 0) {
        sub_08018BE8(param_1,0x97);
        goto LAB_080203fa;
      }
      if (-(~(int)*(char *)(param_1 + 299) >> 0x1f) != (*(byte *)(param_1 + 10) >> 4 & 1))
      goto LAB_080203d6;
    }
    sub_08018BE8(param_1,0x99);
  }
LAB_080203fa:
  if (*(char *)(param_1 + 0xbc) == '\0') {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 1;
    sub_08020430(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 2;
    sub_080204A0(param_1);
  }
  return in_lr;
}

