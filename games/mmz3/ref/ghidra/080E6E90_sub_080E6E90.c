// sub_080E6E90 at 0x080E6E90 (thumb)

undefined4 sub_080E6E90(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(iVar7 + 0x64ac);
  bVar1 = *(byte *)(iVar7 + 0xe0b);
  if ((bVar1 & 0xfc) != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_08004230(0x5b);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e764)[*(byte *)(param_1 + 9)] + 0xc)
    ;
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_080041E4(0x5b);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0x10) == *(char *)(iVar7 + 0xe03)) {
    *(byte *)(param_1 + 0x22) = bVar1 & 0xfc;
    if (*(char *)(iVar7 + 0xe07) == '\x10') {
      sub_0801749C(param_1);
    }
    else {
      sub_080175BC(param_1);
      *(undefined2 *)(param_1 + 0x50) = 0x100;
      *(undefined2 *)(param_1 + 0x52) = 0x100;
    }
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e8c4 + (uint)*(byte *)(param_1 + 0x10) * 2));
    if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
LAB_080e6f8a:
      *(int *)(param_1 + 0x58) = iVar4;
    }
  }
  else {
    *(undefined *)(param_1 + 0x22) = 1;
    sub_0801749C(param_1);
    sub_08017700(param_1,*(undefined2 *)(&DAT_0836e8c4 + (uint)*(byte *)(param_1 + 0x10) * 2));
    if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x54)) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      goto LAB_080e6f8a;
    }
  }
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (*(byte *)(iVar7 + 0xe07) == 0x10) {
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3;
  }
  else {
    uVar5 = 0x10 - *(byte *)(iVar7 + 0xe07);
    *(byte *)(param_1 + 0x45) = *(byte *)(param_1 + 0x45) & 0xf3 | 4;
    uVar6 = (uint)*(byte *)(param_1 + 0x10);
    if (uVar6 == *(byte *)(iVar7 + 0xe03)) {
      if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 100)) {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x60);
      }
      sVar2 = (short)(uVar5 & 0xff) * 0x10 + 0x100;
      *(short *)(param_1 + 0x50) = sVar2;
      *(short *)(param_1 + 0x52) = sVar2;
      if (*(char *)(iVar3 + 0xce) == '\x01') {
        iVar3 = (uVar5 * 0x1000000 >> 0x19) << 8;
      }
      else if (*(byte *)(param_1 + 0x10) == 2) {
        iVar3 = (uVar5 * 0x1000000 >> 0x19) << 8;
      }
      else {
        if (*(byte *)(param_1 + 0x10) < 3) goto LAB_080e705a;
        iVar3 = (uVar5 & 0xff) << 8;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - iVar3;
    }
    else {
      iVar3 = uVar6 - *(byte *)(iVar7 + 0xe03);
      if (iVar3 < 0) {
        iVar3 = *(byte *)(iVar7 + 0xe03) - uVar6;
      }
      iVar3 = (int)(char)((char)uVar5 + ((char)iVar3 + -1) * -2);
      if (0 < iVar3) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3 * -0x400;
      }
    }
  }
LAB_080e705a:
  sub_080177F4(param_1);
  return in_lr;
}

