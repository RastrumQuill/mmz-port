// sub_0806303C at 0x0806303C (thumb)

undefined4 sub_0806303C(int param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        iVar5 = *(int *)(param_1 + 0x5c);
        iVar4 = -iVar5;
        *(int *)(param_1 + 0x5c) = iVar4;
        uVar6 = 0xffffffe8;
        *(undefined4 *)(param_1 + 100) = 0xffffffe8;
        if (0 < iVar5) {
          uVar6 = 0x18;
        }
        *(undefined4 *)(param_1 + 100) = uVar6;
        *(byte *)(param_1 + 0x12) = (byte)((uint)iVar4 >> 0x1f);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_08063124;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x5c) = iVar4;
      if (iVar4 < 0) {
        if (*(char *)(param_1 + 0x12) == '\x01') goto LAB_08063124;
      }
      else if (*(char *)(param_1 + 0x12) == '\0') goto LAB_08063124;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_08063124;
    }
    if (bVar1 != 0) goto LAB_08063124;
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 0x40;
    *(undefined4 *)(param_1 + 0x5c) = 0x300;
    *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0xc0) * -0x600 + 0x300;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  bVar2 = false;
  if (*(int *)(param_1 + 0x5c) < 0) {
    sVar3 = sub_08009A3C(iVar4 + -0x1600,*(int *)(param_1 + 0x58) + 0x400);
    if (sVar3 != 0) {
LAB_080630c4:
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      goto LAB_080630d0;
    }
LAB_080630d4:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    sVar3 = sub_08009A3C(iVar4 + 0x1600,*(int *)(param_1 + 0x58) + 0x400);
    if (sVar3 != 0) goto LAB_080630c4;
    bVar2 = true;
LAB_080630d0:
    if (bVar2) goto LAB_080630d4;
  }
  sub_080177F4(param_1);
LAB_08063124:
  uVar6 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  return in_lr;
}

