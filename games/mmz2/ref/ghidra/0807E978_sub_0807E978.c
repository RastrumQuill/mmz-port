// sub_0807E978 at 0x0807E978 (thumb)

undefined4 sub_0807E978(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 in_lr;
  int local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(undefined *)(param_1 + 0x10) = 0;
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,0x5f11);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08340a60,param_1 + 0x54,3);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    local_18 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = local_18;
    local_1c = *(int *)(param_1 + 0x54) + -0x1000;
    iVar3 = sub_0807E910(param_1,&local_1c,0);
    piVar6 = (int *)(param_1 + 0xb4);
    *piVar6 = iVar3;
    local_1c = *(int *)(param_1 + 0x54) + 0x1000;
    iVar3 = sub_0807E910(param_1,&local_1c,1);
    *(int *)(param_1 + 0xb8) = iVar3;
    iVar4 = *piVar6;
    if (iVar4 != 0) {
      if (iVar3 == 0) {
        *(undefined4 *)(iVar4 + 0x2c) = 0;
      }
      else {
        *(int *)(iVar4 + 0x2c) = iVar3;
        *(int *)(*(int *)(param_1 + 0xb8) + 0x2c) = *piVar6;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined *)(param_1 + 0x10) = 0;
      sub_08012580(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      sub_080127E4(param_1,0x5f11);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08340a60,param_1 + 0x54,3);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      local_18 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = local_18;
      local_1c = *(int *)(param_1 + 0x54) + (uint)*(byte *)(param_1 + 0x11) * 0x2000 + -0x1000;
      uVar2 = sub_0807E910(param_1,&local_1c,*(undefined *)(param_1 + 0x11));
      *(undefined4 *)(param_1 + 0xb4) = uVar2;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  else if (bVar1 == 2) {
    *(undefined *)(param_1 + 0x10) = 1;
    sub_08012580(param_1);
    uVar5 = *(byte *)(param_1 + 0x11) ^ 1;
    if (uVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar5 & 1) << 4);
    sub_080127E4(param_1,0x5f08);
    *(undefined *)(param_1 + 0xb5) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_08340940,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8080205;
    *(undefined4 *)(param_1 + 0x9c) = 0x8080231;
    uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb4) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080128D4(param_1);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  sub_0807EBB4(param_1);
  return in_lr;
}

