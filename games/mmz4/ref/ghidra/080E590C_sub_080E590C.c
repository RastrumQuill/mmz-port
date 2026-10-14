// sub_080E590C at 0x080E590C (thumb)

undefined4 sub_080E590C(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  undefined2 auStack_c [2];
  
  sub_08128B5C(auStack_c,&DAT_08129bdc,4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    sub_080E57F8(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(undefined4 *)(param_1 + 0x60) = 0;
    sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar1 == 0) {
      *(undefined4 *)(param_1 + 0x60) = 0xffffff00;
    }
  }
  sub_0801CF00(param_1,auStack_c[*(byte *)(param_1 + 0x11)]);
  *(undefined *)(param_1 + 0xd) = 0;
  return in_lr;
}

