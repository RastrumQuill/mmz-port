// sub_08073380 at 0x08073380 (thumb)

undefined4 sub_08073380(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  local_24 = *(int *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    local_20 = -0x1600;
  }
  else {
    local_20 = 0x1600;
  }
  local_20 = *(int *)(param_1 + 0x58) + local_20;
  iVar1 = param_1 + 0x54;
  uVar2 = (*(byte *)(param_1 + 10) >> 4 & 1) << 4 | (uint)*(byte *)(param_1 + 0x13);
  sub_080B0ACC(iVar1,&DAT_0833f304,0,uVar2);
  sub_080B0ACC(iVar1,&DAT_0833f320,0,uVar2);
  sub_080B0ACC(&local_24,&DAT_0833f33c,0,uVar2);
  sub_080B0ACC(&local_24,&DAT_0833f358,0,uVar2);
  sub_080B3FB4(&local_24,3,0,*(byte *)(param_1 + 10) >> 5 & 1);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
  local_1c = &DAT_0202e188;
  sub_080AC60C(1,&local_24);
  uVar2 = *local_1c * 0x343fd + 0x269ec3;
  local_24 = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_1c = uVar2 & 0x7fffffff;
  local_20 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
  sub_080AC60C(2,&local_24);
  sub_080032EC(0x2a);
  sub_0801DD2C(2,iVar1);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,iVar1);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

