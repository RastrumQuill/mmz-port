// sub_08083B88 at 0x08083B88 (thumb)

undefined4 sub_08083B88(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  uint *local_18;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0x13);
  local_20 = *(int *)(param_1 + 0x54);
  local_1c = *(int *)(param_1 + 0x58) + -0xc00;
  sub_0808400C(param_1 + 0x54,0x1800,6,8);
  cVar2 = sub_08083FD8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (cVar2 == '\0') {
    sub_080032EC(0x2a);
    uVar3 = uVar3 << 4 | (uint)bVar1;
    sub_080B0ACC(&local_20,&DAT_08341178,0,uVar3);
    sub_080B0ACC(&local_20,&DAT_08341194,0,uVar3);
    sub_080B0ACC(&local_20,&DAT_083411b0,0,uVar3);
  }
  else {
    sub_080032EC(0x31);
    uVar3 = uVar3 << 4 | (uint)bVar1;
    sub_080B0ACC(&local_20,&DAT_083411cc,0,uVar3);
    sub_080B0ACC(&local_20,&DAT_083411e8,0,uVar3);
    sub_080B0ACC(&local_20,&DAT_08341204,0,uVar3);
  }
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  local_18 = &DAT_0202e188;
  sub_080AC60C(1,&local_20);
  uVar3 = *local_18 * 0x343fd + 0x269ec3;
  local_20 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_18 = uVar3 & 0x7fffffff;
  local_1c = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  sub_080AC60C(2,&local_20);
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

