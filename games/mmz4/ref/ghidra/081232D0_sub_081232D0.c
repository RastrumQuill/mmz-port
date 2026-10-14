// sub_081232D0 at 0x081232D0 (thumb)

undefined4 sub_081232D0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  
  DAT_0203587c = DAT_0203587c * 0x41c64e6d + 0x3039;
  uVar1 = sub_08128A9C(DAT_0203587c >> 0x10,0xd);
  uVar5 = 1 << (uVar1 & 0xff);
  uVar1 = uVar1 & 0xff;
joined_r0x08123314:
  do {
    if ((*(uint *)(param_1 + 0xdf4) & uVar5) == 0) {
      local_28 = *(int *)(param_1 + 0xdc4) + *(int *)(&DAT_08886560 + uVar1 * 4) * 0x100 + -0x7800;
      local_24 = *(undefined4 *)(param_1 + 0xdc8);
      if ((*(uint *)(param_1 + 0xdf0) == 0) || ((*(uint *)(param_1 + 0xdf0) & 7) != 0)) {
        sub_080BC3BC(&local_28,uVar1,param_1);
      }
      else {
        if (*(int *)(param_1 + 0xe04) == 0) {
          sub_080BC3BC(&local_28,uVar1 | 0x200,param_1);
        }
        else {
          sub_080BC3BC(&local_28,uVar1 | 0x100,param_1);
        }
        *(uint *)(param_1 + 0xe04) = *(uint *)(param_1 + 0xe04) ^ 1;
      }
      *(uint *)(param_1 + 0xdf4) = *(uint *)(param_1 + 0xdf4) | uVar5;
      *(int *)(param_1 + 0xe00) = *(int *)(param_1 + 0xe00) + 1;
      iVar2 = *(int *)(param_1 + 0xdf0) + 1;
      *(int *)(param_1 + 0xdf0) = iVar2;
      if ((iVar2 != 0) && (iVar2 = sub_08128A9C(iVar2,0x14), iVar2 == 0)) {
        local_24 = *(undefined4 *)(param_1 + 0xdc8);
        local_28 = *(int *)(param_1 + 0xdc4);
        if (local_28 < *(int *)(*(int *)(param_1 + 0xdcc) + 0x54)) {
          local_28 = local_28 + 0x8c00;
          sub_080BC694(&local_28,0,param_1);
        }
        else {
          local_28 = local_28 + -0x8c00;
          sub_080BC694(&local_28,1,param_1);
        }
        *(int *)(param_1 + 0xdf0) = *(int *)(param_1 + 0xdf0) + 1;
      }
      uVar1 = sub_08128A24(*(undefined4 *)(param_1 + 0xdf0),10);
      if ((uVar1 & 0xff) < 5) {
        uVar1 = (uint)(byte)"@80( "[uVar1 & 0xff];
      }
      else {
        uVar1 = 0x20;
      }
      *(uint *)(param_1 + 0xdf8) = uVar1;
      return in_lr;
    }
    uVar4 = DAT_0203587c * 0x41c64e6d + 0x3039;
    uVar3 = (uVar4 >> 0x10 & 3) + 1;
    DAT_0203587c = uVar4 * 0x41c64e6d + 0x3039;
    if ((DAT_0203587c >> 0x10 & 1) == 0) goto LAB_08123368;
    uVar5 = uVar5 << uVar3;
    uVar1 = uVar1 + uVar3 & 0xff;
  } while (uVar1 < 0xe);
  goto LAB_0812337c;
LAB_08123368:
  uVar5 = uVar5 >> uVar3;
  uVar1 = uVar1 - uVar3 & 0xff;
  if (uVar5 == 0) {
    uVar3 = 0xd - uVar3 & 0xff;
LAB_0812337c:
    uVar5 = 1 << uVar3;
    uVar1 = uVar3;
  }
  goto joined_r0x08123314;
}

