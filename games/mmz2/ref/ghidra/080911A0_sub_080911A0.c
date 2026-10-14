// sub_080911A0 at 0x080911A0 (thumb)

undefined4 sub_080911A0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_24;
  int local_20;
  uint *local_1c;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  bVar1 = *(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0x10) == '\0') {
    local_24 = *(int *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0x1800;
    sub_080032EC(0x2a);
    uVar3 = uVar3 << 4 | (uint)bVar1;
    sub_080B0ACC(&local_24,&DAT_08342494,0,uVar3);
    sub_080B0ACC(&local_24,&DAT_083424b0,0,uVar3);
    sub_080B0ACC(&local_24,&DAT_083424cc,0,uVar3);
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x1800;
    local_1c = &DAT_0202e188;
    sub_080AC60C(1,&local_24);
    uVar3 = *local_1c * 0x343fd + 0x269ec3;
    local_24 = *(int *)(param_1 + 0x54) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
    uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    *local_1c = uVar3 & 0x7fffffff;
    local_20 = *(int *)(param_1 + 0x58) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100 + -0x1800;
    sub_080AC60C(2,&local_24);
    sub_0801DD2C(2,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
  }
  else {
    if (1 < *(byte *)(param_1 + 0xb9)) {
      sub_080032EC(0xed);
    }
    uVar2 = ((uint)*(byte *)(param_1 + 0xb9) << 0x19) >> 0x18;
    if (uVar2 != 0) {
      do {
        sub_080B0ACC(param_1 + 0x54,&UNK_08342558 + (uVar2 & 3) * 0x1c,0,(uint)bVar1 | uVar3 << 4);
        uVar2 = uVar2 - 1 & 0xff;
      } while (uVar2 != 0);
    }
    sub_0801DD2C(0,param_1 + 0x54);
    if (DAT_0202ebfc < 9999) {
      DAT_0202ebfc = DAT_0202ebfc + 1;
    }
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

