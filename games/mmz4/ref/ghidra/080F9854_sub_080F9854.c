// sub_080F9854 at 0x080F9854 (thumb)

undefined4 sub_080F9854(int param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  undefined4 in_lr;
  short local_48 [4];
  short local_40 [4];
  short local_38 [2];
  int local_34 [4];
  int local_24;
  
  psVar5 = local_48;
  sub_08128B5C(local_48,&DAT_08129d98,6);
  psVar6 = local_40;
  sub_08128B5C(psVar6,&DAT_08129d9e,6);
  psVar7 = local_38;
  sub_08128B5C(psVar7,&DAT_08129da4,4);
  local_34[0] = 0x8200;
  local_34[1] = 0x8300;
  local_34[2] = 0x8400;
  uVar2 = (uint)*(byte *)(param_1 + 0xb4);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (uVar2 == 1) {
    local_24 = *(int *)(param_1 + 0x58) + -0x1200;
    uVar2 = 0;
    iVar3 = 4;
    do {
      local_34[3] = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * (int)*psVar6;
      sub_080A0D88(param_1,local_34 + 3,1,uVar2 & 0xff);
      psVar6 = psVar6 + 1;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 3);
  }
  else {
    if (uVar2 < 2) {
      if (uVar2 == 0) {
        local_24 = *(int *)(param_1 + 0x58) + -0xc00;
        uVar2 = 0;
        iVar3 = 0;
        do {
          local_34[3] = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * (int)*psVar5;
          sub_0809FA14(param_1,local_34 + 3,1,uVar2 & 0xff);
          psVar5 = psVar5 + 1;
          uVar2 = uVar2 + 1;
        } while ((int)uVar2 < 3);
        goto LAB_080f997c;
      }
    }
    else if (uVar2 == 2) {
      local_24 = *(int *)(param_1 + 0x58) + -0x1000;
      uVar2 = 0;
      iVar3 = 8;
      do {
        local_34[3] = *(int *)(param_1 + 0x54) + (uVar4 * 2 + -1) * (int)*psVar7;
        sub_080A20D4(param_1,local_34 + 3,1,uVar2 & 0xff);
        psVar7 = psVar7 + 1;
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < 2);
      goto LAB_080f997c;
    }
    iVar3 = uVar2 << 2;
  }
LAB_080f997c:
  uVar1 = DAT_0202df42 + 1;
  iVar3 = (*(int *)((int)local_34 + iVar3) << 8) >> 0x10;
  (&DAT_0202e040)[iVar3] = DAT_0202e142 + 0x7f;
  (&DAT_0202de40)[iVar3] = uVar1;
  sub_08001D30(&DAT_08c44000 + iVar3 * 5,
               ((uint)(ushort)(&DAT_0202e040)[iVar3] -
               (uint)((ushort)(&DAT_08c44006)[iVar3 * 10] >> 6)) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4400c + iVar3 * 0x14,
               ((uint)(ushort)(&DAT_0202de40)[iVar3] - (uint)(byte)(&DAT_08c44013)[iVar3 * 0x14]) *
               0x20 + 0x200);
  return in_lr;
}

