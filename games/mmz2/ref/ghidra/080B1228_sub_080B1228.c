// sub_080B1228 at 0x080B1228 (thumb)

undefined4 sub_080B1228(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  uVar1 = (param_2 & 0xf) << 4 | param_2 & 0xff;
  sub_080B0ACC(param_1 + 0x54,&DAT_08346950,0,uVar1);
  sub_080B0ACC(param_1 + 0x54,&DAT_0834696c,0,uVar1);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  sub_080AC60C(1,&local_20);
  return in_lr;
}

