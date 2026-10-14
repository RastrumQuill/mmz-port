// sub_0801EF14 at 0x0801EF14 (thumb)

undefined8 sub_0801EF14(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar1 = DAT_02000c80;
  uVar7 = 0;
  uVar4 = DAT_02000c80 & 0x7f;
  if (uVar4 == 7) {
    uVar7 = 0xd;
  }
  else if (uVar4 == 6) {
    uVar7 = 0x16;
  }
  else if (uVar4 == 4) {
    uVar7 = 0x17;
  }
  else if (uVar4 == 8) {
    uVar7 = 0x19;
  }
  else if (uVar4 == 0x10) {
    uVar7 = 0x1a;
  }
  if (uVar7 < 0x22) {
    iVar6 = uVar7 << 3;
    do {
      if ((uVar1 & 0x7f) == 4) {
        iVar5 = *(int *)(&UNK_0883f380 + iVar6);
        iVar2 = sub_08128954(*param_1 + -0xf000,0x3c000);
        if ((iVar5 - iVar2) - 0xd000U < 0x4001) {
          iVar2 = *(int *)(&UNK_0883f384 + iVar6) - param_1[1];
joined_r0x0801efea:
          if (iVar2 + 0x2000U < 0x4001) break;
        }
      }
      else if ((*(int *)(&UNK_0883f380 + iVar6) - *param_1) + 0x2000U < 0x4001) {
        iVar2 = *(int *)(&UNK_0883f384 + iVar6) - param_1[1];
        goto joined_r0x0801efea;
      }
      iVar6 = iVar6 + 8;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x22);
  }
  if (uVar7 == 0x22) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &UNK_0883f490 + uVar7 * 8;
  }
  return CONCAT44(in_lr,puVar3);
}

