// sub_08091BBC at 0x08091BBC (thumb)

undefined4 sub_08091BBC(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x4900);
    sub_080128D4(param_1);
    uVar2 = sub_08038E6C(*(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54),
                         (*(int *)(DAT_0202e130 + 0x58) + -0x2400) - *(int *)(param_1 + 0x58));
    *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[(uVar2 & 0xff) + 0x40 & 0xff] / 2;
    *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[uVar2 & 0xff] / 2;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    sub_080128D4(param_1);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((((*(int *)(param_1 + 100) - *(int *)(DAT_0202e130 + 0x54)) + 0xf000U < 0x1e001) &&
      ((*(int *)(param_1 + 0x68) - *(int *)(DAT_0202e130 + 0x58)) + 0xa000U < 0x14001)) &&
     (uVar2 = sub_08015188(&DAT_0202ed18,param_1 + 0x54), uVar2 < 0x5000)) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

