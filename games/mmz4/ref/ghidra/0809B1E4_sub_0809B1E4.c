// sub_0809B1E4 at 0x0809B1E4 (thumb)

undefined4 sub_0809B1E4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 in_lr;
  short local_48 [6];
  int local_3c [2];
  int local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined *local_28;
  int *local_24;
  undefined4 uStack_4;
  
  psVar3 = local_48;
  sub_08128B5C(local_48,&DAT_08129554,0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  sub_08002B10(0x3f);
  if (*(char *)(param_1 + 0xb6) != '\0') {
    sub_080663B4(uVar2,param_1);
  }
  sub_08066468(param_1 + 0x54,1,0);
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  psVar5 = local_48 + 1;
  local_30 = (undefined4 *)(param_1 + 0x8c);
  local_2c = (undefined4 *)(param_1 + 0x90);
  local_28 = (undefined *)(param_1 + 0x94);
  local_34 = uVar1 * 2 + -1;
  local_24 = local_3c;
  iVar6 = 0;
  iVar4 = 2;
  uStack_4 = in_lr;
  do {
    local_3c[0] = *(int *)(param_1 + 0x54) + local_34 * *psVar3;
    local_24[1] = *(int *)(param_1 + 0x58) + (int)*psVar5;
    sub_080D4898(local_24,&DAT_0885db98 + iVar6,0,uVar1 | uVar1 << 4);
    iVar6 = iVar6 + 0x1c;
    psVar5 = psVar5 + 2;
    psVar3 = psVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *local_30 = 0;
  *local_2c = 0;
  *local_28 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return uStack_4;
}

