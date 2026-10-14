// sub_080450D4 at 0x080450D4 (thumb)

undefined4 sub_080450D4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801CF00(param_1,0x820e);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08853644,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      uVar2 = 8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar2 = 0xfffffff8;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    goto LAB_0804521c;
  }
  sub_0801CF00(param_1,0x8210);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08853674,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    *(undefined4 *)(param_1 + 100) = 0xfffffff0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0x10;
  }
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x300;
    *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    uVar2 = 0x10;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x300;
      *(undefined4 *)(param_1 + 0x60) = 0xfffffd00;
      uVar2 = 0x30;
    }
    else {
LAB_0804520a:
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x300;
      *(undefined4 *)(param_1 + 0x60) = 0x300;
      uVar2 = 0xffffffd0;
    }
  }
  else {
    if (bVar1 != 2) goto LAB_0804520a;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x300;
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    uVar2 = 0xfffffff0;
  }
  *(undefined4 *)(param_1 + 0x68) = uVar2;
LAB_0804521c:
  *(undefined *)(param_1 + 0x12) = 0x80;
  sub_0801CFF0(param_1);
  *(undefined4 *)(param_1 + 0x98) = 0x80454d9;
  sub_0804523C(param_1);
  return in_lr;
}

