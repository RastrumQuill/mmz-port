// sub_080D9798 at 0x080D9798 (thumb)

undefined4 sub_080D9798(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 & 0xfb;
  if (*(int *)(param_1 + 0x28) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_0834a1a0)[*(byte *)(param_1 + 9)] + 0x10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfa;
  }
  else {
    sub_080126A0(param_1);
    sub_080127D0(param_1);
    sub_080127E4(param_1,0x9005);
    *(undefined *)(param_1 + 0xc9) = 0x20;
    sub_080D980C(param_1);
  }
  return in_lr;
}

