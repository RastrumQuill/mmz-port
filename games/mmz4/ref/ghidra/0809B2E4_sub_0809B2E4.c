// sub_0809B2E4 at 0x0809B2E4 (thumb)

undefined4 sub_0809B2E4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_3c [2];
  uint local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 uStack_4;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  sub_08002B10(0x3f);
  if (*(char *)(param_1 + 0xb6) != '\0') {
    sub_080663B4(uVar3,param_1);
  }
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  local_2c = (undefined4 *)(param_1 + 0x8c);
  local_28 = (undefined4 *)(param_1 + 0x90);
  local_24 = (undefined *)(param_1 + 0x94);
  local_34 = uVar4;
  uStack_4 = in_lr;
  local_30 = local_3c;
  for (uVar1 = (uVar1 * 2 >> 0x11 & 1) + 5; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    local_3c[0] = *(int *)(param_1 + 0x54) + ((uVar2 * 2 >> 0x11 & 0xf) - 7) * 0x100;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)((int)local_30 + 4) =
         *(int *)(param_1 + 0x58) + (uVar2 * 2 >> 0x11 & 0xf) * 0x100 + -0x1700;
    sub_080D4898(local_3c,&UNK_0885dbec + (uVar1 & 3) * 0x1c,0,(local_34 & 0xf) << 4 | uVar4);
  }
  *local_2c = 0;
  *local_28 = 0;
  *local_24 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return uStack_4;
}

