// sub_080A1958 at 0x080A1958 (thumb)

undefined4 sub_080A1958(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  local_c = *(undefined4 *)(param_1 + 0x54);
  local_8 = *(undefined4 *)(param_1 + 0x58);
  uStack_4 = in_lr;
  sub_080D4898(&local_c,&DAT_0885e5d8,0,uVar1 | uVar1 << 4);
  return uStack_4;
}

