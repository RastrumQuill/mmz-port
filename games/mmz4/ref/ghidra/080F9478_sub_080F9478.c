// sub_080F9478 at 0x080F9478 (thumb)

undefined4 sub_080F9478(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x810a);
    *(undefined *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0x1f) * 0x100 + -0x1f00;
    sub_080D0894(2,&local_20);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08002B10(0x2a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 7) * 0x100 + -0x2b00;
    sub_080D0894(1,&local_20);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_20 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    local_1c = *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 7) * 0x100 + -0x1300;
    sub_080D0894(1,&local_20);
    sub_080F97D0(param_1);
    sub_0802AB70(4,0x1a,param_1 + 0x54);
    if (DAT_0202e8d6 != '\0') {
      DAT_0202e8d6 = DAT_0202e8d6 + -1;
    }
    if (DAT_0202e8ec < 9999) {
      DAT_0202e8ec = DAT_0202e8ec + 1;
    }
    sub_0802ABC8(param_1,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

