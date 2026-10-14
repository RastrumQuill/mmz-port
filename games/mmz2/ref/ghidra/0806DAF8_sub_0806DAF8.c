// sub_0806DAF8 at 0x0806DAF8 (thumb)

undefined4 sub_0806DAF8(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar1 = 0;
  do {
    sub_080B0ACC(param_1 + 0x54,&DAT_0833e778 + uVar1 * 0x1c,0,(param_2 & 0xf) << 4 | param_2 & 0xff
                );
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 3);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  sub_080AC60C(1,&local_1c);
  sub_080032EC(0x2a);
  return in_lr;
}

