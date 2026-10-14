// sub_080463E8 at 0x080463E8 (thumb)

undefined4 sub_080463E8(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8306);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_0885375c,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8046949;
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = *(int *)(param_1 + 0x58) + -0xa00;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x58) + 0xa00;
  }
  *(int *)(param_1 + 0x58) = iVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar1 = 0x94;
    }
    else {
      uVar1 = 0x6c;
    }
  }
  else if (*(char *)(param_1 + 0x11) == '\0') {
    uVar1 = 0xec;
  }
  else {
    uVar1 = 0x14;
  }
  *(undefined *)(param_1 + 0x12) = uVar1;
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x12) + 0x40) * 0x1000000 >> 0x17)) * 6
  ;
  *(int *)(param_1 + 0x60) = (short)(&DAT_08128c10)[*(byte *)(param_1 + 0x12)] * 6;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  sub_080462B0(*(undefined4 *)(param_1 + 0x2c),param_1,0);
  sub_0804636C(param_1);
  return in_lr;
}

