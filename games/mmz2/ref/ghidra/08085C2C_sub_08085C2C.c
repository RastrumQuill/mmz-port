// sub_08085C2C at 0x08085C2C (thumb)

undefined4 sub_08085C2C(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  uint *local_1c;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x13);
  local_2c = *(int *)(param_1 + 0x54);
  local_28 = *(int *)(param_1 + 0x58) + -0x1400;
  cVar3 = sub_080862F8();
  if (cVar3 == '\0') {
    sub_080032EC(0x2a);
  }
  else {
    sub_080032EC(0x31);
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0x800;
    sub_08086220(&local_24,0x1c00,6,8);
  }
  uVar4 = 0;
  do {
    sub_080B0ACC(&local_2c,&DAT_083413c0 + uVar4 * 0x1c,0,(uint)bVar2 | (bVar1 >> 4 & 1) << 4);
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 6);
  uVar4 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_2c = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar4 & 0x7fffffff;
  local_28 = *(int *)(param_1 + 0x58) + ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  local_1c = &DAT_0202e188;
  sub_080AC60C(1,&local_2c);
  uVar4 = *local_1c * 0x343fd + 0x269ec3;
  local_2c = *(int *)(param_1 + 0x54) + ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar4 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
  *local_1c = uVar4 & 0x7fffffff;
  local_28 = *(int *)(param_1 + 0x58) + ((uVar4 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  sub_080AC60C(2,&local_2c);
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

