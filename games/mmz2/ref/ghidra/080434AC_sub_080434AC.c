// sub_080434AC at 0x080434AC (thumb)

undefined4 sub_080434AC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar3 = (*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa313);
    *(char *)(*(int *)(param_1 + 0xc4) + 0xd) = *(char *)(*(int *)(param_1 + 0xc4) + 0xd) + '\x01';
    iVar4 = *(int *)(param_1 + 200);
    *(char *)(iVar4 + 0xd) = *(char *)(iVar4 + 0xd) + '\x01';
    pbVar5 = (byte *)(*(int *)(param_1 + 200) + 0x49);
    *pbVar5 = *pbVar5 | 0xc;
    sub_080032EC(0x4d);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x71);
  sub_080128D4(param_1);
  if (((int)(char)*(byte *)(param_1 + 0x71) != (uint)bVar1) &&
     (cVar2 = *(char *)(param_1 + 0xf) + '\x01', *(char *)(param_1 + 0xf) = cVar2, cVar2 == '\x03'))
  {
    iVar4 = *(int *)(param_1 + 0xc4);
    *(byte *)(iVar4 + 10) = *(byte *)(iVar4 + 10) & 0xfc;
    *(undefined4 *)(iVar4 + 0xc) = 3;
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(iVar4 + 9)] + 0xc);
    local_1c = *(int *)(param_1 + 0x54) + (iVar3 * 0x1000000 >> 0xc);
    local_18 = *(int *)(param_1 + 0x58) + -0x1400;
    sub_0809CAD0(param_1,&local_1c,0,0);
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  cVar2 = (char)iVar3;
  if (bVar1 == 2) {
    *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * 0x1000;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + -0x1000;
    *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * -0xe00;
    iVar4 = *(int *)(param_1 + 200);
    iVar3 = *(int *)(param_1 + 0x58);
    iVar6 = -0x1600;
LAB_08043640:
    *(int *)(iVar4 + 0x58) = iVar3 + iVar6;
  }
  else {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * -0x1400;
        *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + -0x800;
        *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * -0x800;
        iVar4 = *(int *)(param_1 + 200);
        iVar3 = *(int *)(param_1 + 0x58);
        iVar6 = -0x1600;
        goto LAB_08043640;
      }
    }
    else {
      if (bVar1 == 3) {
        *(int *)(*(int *)(param_1 + 0xc4) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * 0x1800;
        *(int *)(*(int *)(param_1 + 0xc4) + 0x58) = *(int *)(param_1 + 0x58) + -0x2000;
        *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * -0x1200;
        iVar4 = *(int *)(param_1 + 200);
        iVar3 = *(int *)(param_1 + 0x58);
        iVar6 = -0x1800;
        goto LAB_08043640;
      }
      if (bVar1 == 4) {
        *(int *)(*(int *)(param_1 + 200) + 0x54) = *(int *)(param_1 + 0x54) + cVar2 * -0x1400;
        *(int *)(*(int *)(param_1 + 200) + 0x58) = *(int *)(param_1 + 0x58) + -0x1a00;
        return in_lr;
      }
    }
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      *(undefined *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}

