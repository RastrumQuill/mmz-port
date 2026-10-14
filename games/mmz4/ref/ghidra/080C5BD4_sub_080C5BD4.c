// sub_080C5BD4 at 0x080C5BD4 (thumb)

undefined4 sub_080C5BD4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_30 [2];
  uint local_28;
  int *local_24;
  undefined4 uStack_4;
  
  local_24 = local_30;
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_28 = uVar3;
  uStack_4 = in_lr;
  for (uVar1 = (uVar1 * 2 >> 0x11 & 1) + 5; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_30[0] = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)((int)local_24 + 4) =
         *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0xf) * 0x100 + -0x1700;
    sub_080D4898(local_30,&UNK_088623cc + (uVar1 & 3) * 0x1c,0,(local_28 & 0xf) << 4 | uVar3);
  }
  return uStack_4;
}

