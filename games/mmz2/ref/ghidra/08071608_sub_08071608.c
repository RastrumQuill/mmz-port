// sub_08071608 at 0x08071608 (thumb)

undefined4 sub_08071608(int param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  uVar3 = uVar3 * 2 >> 0x11 & 1;
  bVar1 = *(byte *)(param_1 + 10);
  local_18 = *(int *)(param_1 + 0x54);
  bVar2 = local_18 < *(int *)(DAT_0202e130 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0x1000;
  uVar4 = 0;
  if (uVar3 != 0xfffffffe) {
    do {
      sub_080B0ACC(&local_18,&UNK_0833edb8 + (uVar4 & 3) * 0x1c,0,
                   (uint)bVar2 | (bVar1 >> 4 & 1) << 4);
      uVar4 = uVar4 + 1 & 0xff;
    } while (uVar4 < uVar3 + 2);
  }
  return in_lr;
}

