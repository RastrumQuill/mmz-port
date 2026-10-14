// sub_08071574 at 0x08071574 (thumb)

undefined4 sub_08071574(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  uVar2 = uVar2 * 2 >> 0x11 & 1;
  bVar1 = *(byte *)(param_1 + 10);
  uVar3 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54));
  local_18 = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x1000;
  local_14 = *(int *)(param_1 + 0x58) + -0x1000;
  uVar4 = 0;
  if (uVar2 != 0xffffffff) {
    do {
      sub_080B0ACC(&local_18,&DAT_0833ed64 + uVar4 * 0x1c,0,uVar3 | (bVar1 >> 4 & 1) << 4);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar2 + 1);
  }
  return in_lr;
}

