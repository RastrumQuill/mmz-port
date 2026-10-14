// sub_08070270 at 0x08070270 (thumb)

undefined4 sub_08070270(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  uint *local_18;
  
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58) + -0x1000;
  uVar2 = 0;
  do {
    uVar1 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 0x10;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar1 = uVar1 | 1;
    }
    sub_080B0ACC(&local_20,&DAT_0833ec10 + uVar2 * 0x1c,0,uVar1);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 3);
  sub_080032EC(0x2a);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_20 = local_20 + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  local_1c = local_1c + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  local_18 = &DAT_0202e188;
  sub_080AC60C(1,&local_20);
  uVar2 = *local_18 * 0x343fd + 0x269ec3;
  local_20 = local_20 + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_18 = uVar2 & 0x7fffffff;
  local_1c = local_1c + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080AC60C(2,&local_20);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  sub_0801DD2C(3,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

