// sub_080CCE50 at 0x080CCE50 (thumb)

undefined4 sub_080CCE50(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  uVar2 = *(byte *)(param_1 + 10) >> 4 & 1;
  sub_080032EC(0x56);
  uVar1 = 0;
  do {
    local_24 = *(int *)(param_1 + 0x54) + (uVar2 * 2 + -1) * 0xe00;
    local_20 = *(int *)(param_1 + 0x58) + -0x2000;
    sub_080B0ACC(&local_24,&DAT_083494ec + uVar1 * 0x1c,0,(uVar2 << 0x1c) >> 0x18);
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x2000;
  local_1c = &DAT_0202e188;
  sub_080AC60C(1,&local_24);
  uVar1 = *local_1c * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_1c = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x2000;
  sub_080AC60C(2,&local_24);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

