// sub_080D24E0 at 0x080D24E0 (thumb)

undefined4 sub_080D24E0(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  sub_080032EC(0x2a);
  uVar2 = 0;
  uVar1 = (*(byte *)(param_1 + 10) >> 4 & 1) << 0x1c;
  do {
    local_24 = *(int *)(param_1 + 0x54) + (uVar2 & 3) * 0x1000 + -0x1800;
    local_20 = *(int *)(param_1 + 0x58) + (uVar2 >> 2 & 1) * 0x1000 + -0x1400;
    sub_080B0ACC(&local_24,&DAT_08349d5c + uVar2 * 0x1c,0,uVar1 >> 0x18);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 8);
  local_24 = *(int *)(param_1 + 0x54);
  local_20 = *(int *)(param_1 + 0x58) + -0x2000;
  sub_080B0ACC(&local_24,&DAT_08349e3c,0,uVar1 >> 0x18);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 0xf) * 0x100 + -0x1400;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + (uVar1 * 2 >> 0x11 & 0xf) * 0x100 + -0x1800;
  sub_080AC60C(1,&local_24);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + (uVar1 * 2 >> 0x11 & 0xf) * 0x100 + 0x400;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x1800;
  sub_080AC60C(1,&local_24);
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar1 * 2 >> 0x11 & 0x3f) - 0x1f) * 0x100;
  uVar1 = (uVar1 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar1 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x1800;
  sub_080AC60C(2,&local_24);
  sub_0801DD2C(5,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

