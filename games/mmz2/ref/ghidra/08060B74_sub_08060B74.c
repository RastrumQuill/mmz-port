// sub_08060B74 at 0x08060B74 (thumb)

undefined4 sub_08060B74(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0x40;
    DAT_0202e01c = 2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_18 = *(int *)(param_1 + 0x54) + (8 - (uVar2 * 2 >> 0x11 & 0xf)) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    local_14 = *(int *)(param_1 + 0x58) + (0x10 - (uVar2 * 2 >> 0x11 & 0x1f)) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar2 & 0x7fffffff;
    sub_080B87E0(param_1,&local_18,2,uVar2 * 2 >> 0x11 & 0xff);
  }
  if ((*(byte *)(param_1 + 0x12) & 0xf) == 0) {
    sub_080032EC(0x2a);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    DAT_0202ec42 = DAT_0202ec42 | 2;
  }
  return in_lr;
}

