// sub_080AFB0C at 0x080AFB0C (thumb)

undefined4 sub_080AFB0C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08345d64 + (uint)*(byte *)(param_1 + 0x10) * 4));
  uVar1 = sub_080AFCA0(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  sub_080128D4(param_1);
  return in_lr;
}

