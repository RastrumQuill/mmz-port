// sub_080AAD3C at 0x080AAD3C (thumb)

undefined4 sub_080AAD3C(int param_1)

{
  undefined uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x20;
    if (DAT_0202e130 == 0) {
      iVar4 = iRam00000058 + -0x1000;
      uVar5 = uRam00000054;
    }
    else {
      uVar5 = sub_0801EFE8(DAT_0202e130,0);
      iVar4 = sub_0801F004(DAT_0202e130,0);
    }
    uVar1 = sub_08038F20(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),uVar5,iVar4
                         ,*(undefined *)(param_1 + 0x13),1);
    *(undefined *)(param_1 + 0x13) = uVar1;
    iVar4 = *(int *)(param_1 + 0x5c) *
            (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13) + 0x40 & 0xff];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
    iVar4 = *(int *)(param_1 + 0x5c) * (int)(short)(&DAT_080ef450)[*(byte *)(param_1 + 0x13)];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
  }
  else {
    if (*(char *)(param_1 + 0xd) != '\x01') {
      return in_lr;
    }
    if (DAT_0202e130 != 0) {
      uVar5 = sub_0801EFE8(DAT_0202e130,0);
      *(undefined4 *)(param_1 + 0x54) = uVar5;
      uVar5 = sub_0801F004(DAT_0202e130,0);
      *(undefined4 *)(param_1 + 0x58) = uVar5;
      sVar3 = sub_0801EE9C(DAT_0202e130,1,1,1,1,0);
      *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + sVar3;
    }
    if (*(short *)(param_1 + 0xc2) != 0) {
      return in_lr;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc);
  return in_lr;
}

