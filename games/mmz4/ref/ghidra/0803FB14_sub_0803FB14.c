// sub_0803FB14 at 0x0803FB14 (thumb)

undefined4 sub_0803FB14(int param_1,undefined4 *param_2,byte param_3)

{
  bool bVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  iVar4 = sub_08005500(DAT_0202ed88);
  if (iVar4 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined *)(iVar4 + 9) = 7;
      *(undefined4 *)(iVar4 + 0x14) = 0x803fc3d;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = 0;
      uVar2 = 1;
    }
    else {
      *(undefined *)(iVar4 + 9) = 7;
      *(undefined4 *)(iVar4 + 0x14) = 0x803fc3d;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) & 0xbf;
      *(undefined *)(iVar4 + 0x25) = 0x10;
      *(undefined2 *)(iVar4 + 0x20) = 0x30;
      uVar2 = 2;
    }
    *(undefined *)(iVar4 + 0x22) = uVar2;
    *(int *)(iVar4 + 0x2c) = param_1;
    uVar5 = param_2[1];
    *(undefined4 *)(iVar4 + 0x54) = *param_2;
    *(undefined4 *)(iVar4 + 0x58) = uVar5;
    *(undefined *)(iVar4 + 0x10) = 1;
    *(byte *)(iVar4 + 0x11) = param_3;
    uVar6 = param_3 & 1;
    if ((param_3 & 1) == 0) {
      bVar3 = *(byte *)(iVar4 + 10) & 0xef;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 10) | 0x10;
    }
    *(byte *)(iVar4 + 10) = bVar3;
    *(char *)(iVar4 + 0x4c) = (char)uVar6;
    pbVar7 = (byte *)(iVar4 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef | (byte)(uVar6 << 4);
    bVar1 = param_3 < 2;
    if (bVar1) {
      bVar3 = *(byte *)(iVar4 + 10) | 0x20;
    }
    else {
      bVar3 = *(byte *)(iVar4 + 10) & 0xdf;
    }
    *(byte *)(iVar4 + 10) = bVar3;
    *(bool *)(iVar4 + 0x4d) = bVar1;
    *pbVar7 = *pbVar7 & 0xdf | bVar1 << 5;
  }
  return in_lr;
}

