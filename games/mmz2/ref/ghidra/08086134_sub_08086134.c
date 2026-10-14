// sub_08086134 at 0x08086134 (thumb)

undefined4 sub_08086134(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar2 = *(uint *)(param_1 + 0x5c);
  local_1c = *(int *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1400;
  cVar1 = sub_080862F8();
  if (cVar1 == '\0') {
    sub_080032EC(0x2a);
  }
  else {
    sub_080032EC(0x31);
    local_1c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x800;
    local_18 = *(int *)(param_1 + 0x58) + -0x800;
    sub_08086220(&local_1c,0x1000,6,8);
  }
  uVar2 = uVar3 << 4 | ~uVar2 >> 0x1f;
  sub_080B0ACC(&local_1c,&DAT_08341468,0,uVar2);
  sub_080B0ACC(&local_1c,&DAT_08341484,0,uVar2);
  sub_080B0ACC(&local_1c,&DAT_083414a0,0,uVar2);
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_1c = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar2 * 2 >> 0x11 & 7) - 3) * 0x100;
  sub_080AC60C(1,&local_1c);
  return in_lr;
}

