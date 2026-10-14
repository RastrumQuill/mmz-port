// sub_0800D1A0 at 0x0800D1A0 (thumb)

undefined4 sub_0800D1A0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080C8AD0(*(int *)(param_1 + 0x34) + -0x690,0x3c);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (7 < iVar1) {
    iVar1 = 7;
  }
  sub_0800696C(param_1,param_2);
  sub_08001904(iVar1 + 0x54U & 0xffff,0);
  return in_lr;
}

