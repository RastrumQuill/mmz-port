// sub_0809E1EC at 0x0809E1EC (thumb)

undefined4 sub_0809E1EC(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_30 [2];
  uint local_28;
  int *local_24;
  undefined4 uStack_4;
  
  sub_08002B10(0x3f);
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_28 = uVar3;
  uStack_4 = in_lr;
  local_24 = local_30;
  for (uVar1 = (uVar1 * 2 >> 0x11 & 1) + 5; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_30[0] = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)((int)local_24 + 4) =
         *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0xf) * 0x100 + -0x1700;
    sub_080D4898(local_30,&UNK_0885e098 + (uVar1 & 3) * 0x1c,0,(local_28 & 0xf) << 4 | uVar3);
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return uStack_4;
}

