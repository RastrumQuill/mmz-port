// sub_080A2A30 at 0x080A2A30 (thumb)

undefined4 sub_080A2A30(int param_1)

{
  short sVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  iVar5 = DAT_0202e130;
  if (((DAT_0202e130 == 0) || ((DAT_0202ec38 & 1) == 0)) || ((DAT_0202ec42 & 1) != 0)) {
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    uVar6 = 0;
    goto LAB_080a2b6e;
  }
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar6 = sub_080230DC(DAT_0202e130,0x18);
    uVar6 = uVar6 & 0xff;
    if (uVar6 != 0) {
      *(short *)(param_1 + 0xbc) = (short)uVar6;
      iVar2 = DAT_0202e130;
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) - *(int *)(DAT_0202e130 + 0x54);
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x58) - *(int *)(iVar2 + 0x58);
      *(byte *)(param_1 + 0xc0) = *(byte *)(iVar2 + 10) >> 4 & 1;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080a2ad2;
    }
LAB_080a2b68:
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
LAB_080a2ad2:
    sub_080128D4(param_1);
    sVar1 = *(short *)(param_1 + 0xbe);
    if (sVar1 != 0) {
      *(short *)(param_1 + 0xbe) = sVar1 + -1;
      if (sVar1 != 1) {
        puVar7 = (ushort *)(param_1 + 0xbc);
        if (((ushort)(sVar1 - 1U) < 0x5a) || (*puVar7 < 9)) {
          bVar3 = *(char *)(param_1 + 0x12) + 1;
          *(byte *)(param_1 + 0x12) = bVar3;
          if ((bVar3 & 1) == 0) {
            bVar3 = *(byte *)(param_1 + 10) & 0xfe;
          }
          else {
            bVar3 = *(byte *)(param_1 + 10) | 1;
          }
          *(byte *)(param_1 + 10) = bVar3;
          sub_080128D4(param_1);
        }
        uVar4 = sub_0801EE9C(iVar5,1,1,1,1,0);
        uVar6 = sub_080230FC(iVar5,uVar4);
        iVar5 = (uint)*puVar7 - (uVar6 & 0xff);
        if (iVar5 < 0) {
          *puVar7 = 0;
        }
        else {
          *puVar7 = (ushort)iVar5;
        }
        uVar6 = (uint)*puVar7;
        if (uVar6 != 0) {
          if (*(byte *)(param_1 + 0xc0) == (*(byte *)(DAT_0202e130 + 10) >> 4 & 1)) {
            iVar5 = *(int *)(DAT_0202e130 + 0x54) + *(int *)(param_1 + 0xb4);
          }
          else {
            iVar5 = *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0xb4);
          }
          *(int *)(param_1 + 0x54) = iVar5;
          *(int *)(param_1 + 0x58) = *(int *)(DAT_0202e130 + 0x58) + *(int *)(param_1 + 0xb8);
          return in_lr;
        }
        goto LAB_080a2b68;
      }
    }
    sub_080230FC(iVar5,*(undefined2 *)(param_1 + 0xbc));
    bVar3 = *(byte *)(param_1 + 10) & 0xfe;
    uVar6 = 0;
  }
LAB_080a2b6e:
  *(byte *)(param_1 + 10) = bVar3 & 0xfd;
  *(uint *)(param_1 + 0x8c) = uVar6;
  *(uint *)(param_1 + 0x90) = uVar6;
  *(char *)(param_1 + 0x94) = (char)uVar6;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

