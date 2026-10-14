// sub_08043AD4 at 0x08043AD4 (thumb)

undefined4 sub_08043AD4(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa317);
    *(char *)(*(int *)(param_1 + 0xc4) + 0xd) = *(char *)(*(int *)(param_1 + 0xc4) + 0xd) + '\x01';
    *(char *)(*(int *)(param_1 + 200) + 0xd) = *(char *)(*(int *)(param_1 + 200) + 0xd) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar3 = (*(byte *)(param_1 + 10) >> 4 & 1) * '\x02' + -1;
  bVar1 = *(byte *)(param_1 + 0x71);
  sub_080128D4(param_1);
  if (((int)(char)*(byte *)(param_1 + 0x71) != (uint)bVar1) &&
     (cVar2 = *(char *)(param_1 + 0xf) + '\x01', *(char *)(param_1 + 0xf) = cVar2, cVar2 == '\x03'))
  {
    sub_08006E08(param_1 + 0x74,&DAT_0833a6f0);
    pbVar5 = (byte *)(*(int *)(param_1 + 200) + 0x49);
    *pbVar5 = *pbVar5 | 0xc;
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 2) {
    *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * -0x1c00;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + -0x2400;
    *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * 0x1400;
    iVar6 = *(int *)(param_1 + 200);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar7 = -0x2700;
  }
  else if (bVar1 < 3) {
    if (bVar1 != 1) {
      return in_lr;
    }
    *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * -0x1a00;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
    *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * 0x1400;
    iVar6 = *(int *)(param_1 + 200);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar7 = -0x2200;
  }
  else {
    if (bVar1 != 3) {
      if (bVar1 != 4) {
        return in_lr;
      }
      *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * 0xc00;
      *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + 0x400;
      *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * 0x1800;
      *(int *)(*(int *)(param_1 + 200) + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
      cVar3 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar3;
      if (cVar3 != '\0') {
        return in_lr;
      }
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * 0x200;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar3 * 0x1200;
    iVar6 = *(int *)(param_1 + 200);
    iVar4 = *(int *)(param_1 + 0x58);
    iVar7 = -0x800;
  }
  *(int *)(iVar6 + 0x58) = iVar4 + iVar7;
  return in_lr;
}

