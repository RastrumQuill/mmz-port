// sub_0811B3E4 at 0x0811B3E4 (thumb)

undefined4 sub_0811B3E4(int param_1,int param_2)

{
  undefined2 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x63a8);
  uVar7 = 0;
  pbVar3 = (byte *)(iVar8 + 0xde);
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x54);
    *puVar6 = *puVar6 & 0xfff | (ushort)(byte)(&DAT_08885f68)[(uint)*pbVar3 * 3] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 5);
  uVar7 = 0;
  pbVar2 = (byte *)(iVar8 + 0xdf);
  puVar4 = (undefined2 *)(iVar8 + 0x260);
  puVar5 = (undefined2 *)(iVar8 + 0x262);
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x60);
    *puVar6 = *puVar6 & 0xfff | (ushort)(byte)(&DAT_08885f69)[(uint)*pbVar3 * 3] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 5);
  uVar7 = 0;
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x6c);
    *puVar6 = *puVar6 & 0xfff | (ushort)(byte)(&DAT_08885f6a)[(uint)*pbVar3 * 3] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 6);
  uVar7 = 0;
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x294);
    *puVar6 = *puVar6 & 0xfff | (ushort)(byte)(&DAT_08885f68)[(uint)*pbVar2 * 3] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 5);
  uVar7 = 0;
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x2a0);
    *puVar6 = *puVar6 & 0xfff | (ushort)(byte)(&DAT_08885f69)[(uint)*pbVar2 * 3] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 5);
  uVar7 = 0;
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x2ac);
    *puVar6 = *puVar6 & 0xfff | (ushort)(byte)(&DAT_08885f6a)[(uint)*pbVar2 * 3] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 5);
  uVar7 = 0;
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x41c);
    *puVar6 = *puVar6 & 0xfff |
              (ushort)(byte)(&DAT_08885f99)[(uint)*(byte *)(iVar8 + 0xe1) * 2] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 2);
  uVar7 = 0;
  do {
    puVar6 = (ushort *)(uVar7 * 2 + param_2 + 0x42a);
    *puVar6 = *puVar6 & 0xfff |
              (ushort)(byte)(&DAT_08885f9a)[(uint)*(byte *)(iVar8 + 0xe1) * 2] << 0xc;
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 3);
  pbVar3 = (byte *)(param_1 + 0xde0);
  sub_0811B324(param_2,*puVar4,0x75,(&DAT_08885f71)[(uint)*pbVar3 * 5]);
  sub_0811B324(param_2,*(undefined2 *)(iVar8 + 0x25c),0x95,(&DAT_08885f72)[(uint)*pbVar3 * 5]);
  sub_0811B324(param_2,*(undefined2 *)(iVar8 + 0x25e),0xb5,(&DAT_08885f73)[(uint)*pbVar3 * 5]);
  sub_0811B324(param_2,*puVar5,0xd5,(&DAT_08885f74)[(uint)*pbVar3 * 5]);
  sub_0811B324(param_2,*(undefined2 *)(iVar8 + 0x264),0xf5,(&DAT_08885f75)[(uint)*pbVar3 * 5]);
  if (*pbVar2 == 0) {
    sub_0811B324(param_2,*puVar4,0x18b,6);
    sub_0811B324(param_2,*puVar5,0x1a5,6);
    *(undefined2 *)(param_2 + 0x354) = 0x609e;
    uVar1 = *puVar4;
  }
  else {
    if (*pbVar2 != 1) {
      sub_0811B324(param_2,*puVar4,0x18b,6);
      sub_0811B324(param_2,*puVar5,0x1ab,6);
      *(undefined2 *)(param_2 + 0x364) = 0x612e;
      *(undefined2 *)(param_2 + 0x366) = 0x612f;
      *(undefined2 *)(param_2 + 0x368) = 0x6130;
      *(undefined2 *)(param_2 + 0x36a) = 0x6131;
      *(undefined2 *)(param_2 + 0x36c) = 0x6132;
      *(undefined2 *)(param_2 + 0x36e) = 0x6133;
      *(undefined2 *)(param_2 + 0x370) = 0x6134;
      *(undefined2 *)(param_2 + 0x372) = 0x6135;
      *(undefined2 *)(param_2 + 0x374) = 0x6136;
      *(undefined2 *)(param_2 + 0x376) = 0x6137;
      return in_lr;
    }
    sub_0811B324(param_2,*puVar4,0x18b,6);
    uVar1 = *puVar5;
  }
  sub_0811B324(param_2,uVar1,0x1ab,6);
  return in_lr;
}

