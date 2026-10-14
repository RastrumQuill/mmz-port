// sub_080A8DD8 at 0x080A8DD8 (thumb)

undefined4 sub_080A8DD8(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_080177F4();
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        iVar6 = *(int *)(param_1 + 0x5c) + (int)*(short *)(param_1 + 0xbc);
        *(int *)(param_1 + 0x5c) = iVar6;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)*(short *)(param_1 + 0xbe);
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        if (iVar6 < 0x101) {
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
      }
    }
    else if (bVar1 == 2) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      bVar1 = *(byte *)(param_1 + 0x12);
      if ((bVar1 & 3) < 2) {
        bVar3 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar3 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar3;
      *(byte *)(param_1 + 0x12) = bVar1 - 1;
      if (bVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
      }
    }
    goto LAB_080a8ec2;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x58);
  iVar5 = (iVar6 + 0x1800) - *(int *)(DAT_0202f5c0 + 0x58) >> 9;
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      iVar6 = iVar6 + 0x40;
      goto LAB_080a8e64;
    }
  }
  else {
    iVar6 = iVar6 + -0x40;
LAB_080a8e64:
    *(int *)(param_1 + 0x58) = iVar6;
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined *)(param_1 + 0x12) = 0x40;
  }
LAB_080a8ec2:
  sVar4 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar4 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

