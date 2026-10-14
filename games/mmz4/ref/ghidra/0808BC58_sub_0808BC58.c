// sub_0808BC58 at 0x0808BC58 (thumb)

undefined4 sub_0808BC58(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  byte local_5c [4];
  int aiStack_58 [4];
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  
  sub_08128B5C(local_5c,&DAT_0812944c,3);
  uVar1 = sub_081284F8(0xa0000);
  iVar2 = -(uVar1 & 0xffff);
  if ((uVar1 & 0xffff) != 0) {
    iVar2 = iVar2 + 0x1f;
  }
  local_48 = FUN_081288bc(0x3000,-(iVar2 >> 5));
  uVar1 = sub_081284F8(0xa0000);
  local_44 = -(uVar1 & 0xffff);
  uVar1 = sub_081284F8(0x140000);
  iVar2 = -(uVar1 & 0xffff);
  if ((uVar1 & 0xffff) != 0) {
    iVar2 = iVar2 + 0x1f;
  }
  local_40 = FUN_081288bc(0x6000,-(iVar2 >> 5));
  uVar1 = sub_081284F8(0x140000);
  local_3c = -(uVar1 & 0xffff);
  sub_08128B5C(aiStack_58,aiStack_58 + 4,0x10);
  local_28[0] = 0x100;
  local_28[1] = 0x160;
  uVar1 = (uint)((DAT_0202cac0 & 0xf) == 2);
  piVar3 = aiStack_58 + uVar1 * 2;
  iVar2 = (*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1;
  local_38 = *(int *)(param_1 + 0x54) + iVar2 * (0x1000 - *piVar3);
  local_34 = *(int *)(param_1 + 0x58) - (aiStack_58[uVar1 * 2 + 1] + 0x2400);
  local_30 = iVar2 * *piVar3;
  local_2c = aiStack_58[uVar1 * 2 + 1];
  sub_080A4458(&local_38,&local_30);
  local_38 = *(int *)(param_1 + 0x54) + iVar2 * 0x600;
  local_34 = *(int *)(param_1 + 0x58) + -0x1a00;
  iVar5 = 0;
  do {
    iVar4 = (int)*(short *)((int)&DAT_08128c10 + ((local_5c[iVar5] + 0x40) * 0x1000000 >> 0x17)) *
            local_28[uVar1];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    local_2c = (int)(short)(&DAT_08128c10)[local_5c[iVar5]] * local_28[uVar1];
    if (local_2c < 0) {
      local_2c = local_2c + 0xff;
    }
    local_2c = local_2c >> 8;
    local_30 = iVar2 * (iVar4 >> 8);
    sub_080D97A8(&local_38,&local_30,0,0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  return in_lr;
}

