// sub_08094BEC at 0x08094BEC (thumb)

undefined4 sub_08094BEC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  int local_8;
  undefined4 uStack_4;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(int *)(param_1 + 0x58) + -0x1000;
  uStack_4 = in_lr;
  sub_080D4898(&local_c,&DAT_0885d0f8,0,uVar1 | uVar1 << 4);
  return uStack_4;
}

