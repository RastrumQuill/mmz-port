// sub_0806D6B0 at 0x0806D6B0 (thumb)

undefined4 sub_0806D6B0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar2 = 0;
  do {
    sub_080B0ACC(param_1 + 0x54,&DAT_0833e724 + uVar2 * 0x1c,0,uVar1 | uVar1 << 4);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 3);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  local_1c = &DAT_0202e188;
  sub_080AC60C(1,&local_24);
  uVar1 = *local_1c * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_1c = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0x1f) - 0xf) * 0x100;
  sub_080AC60C(2,&local_24);
  sub_080032EC(0x2a);
  sub_0801DD2C(1,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

