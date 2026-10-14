// sub_080A1750 at 0x080A1750 (thumb)

undefined4 sub_080A1750(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xb8)) {
  case 0:
    *(undefined4 *)(param_1 + 0x60) = 0xfffffe80;
    *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
switchD_080a1770_caseD_1:
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar1 = *(int *)(param_1 + 0xb4) + -0x2000;
    if (iVar2 <= iVar1) {
LAB_080a1870:
      *(int *)(param_1 + 0x58) = iVar1;
LAB_080a1872:
      *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
    }
switchD_080a1770_caseD_8:
    return in_lr;
  case 1:
    goto switchD_080a1770_caseD_1;
  case 2:
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar5 * 2 + -1) * 0x1000;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb9) = 0x21;
    *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
  case 3:
    pbVar4 = (byte *)(param_1 + 0xb9);
    *pbVar4 = *pbVar4 - 1;
    iVar1 = FUN_081288bc((uint)*pbVar4 << 7,0x21);
    uVar3 = iVar1 - 0x80U & 0xff;
    uVar5 = (uVar3 + uVar5 * 2 * (0x140 - uVar3)) * 0x1000000;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         *(short *)((int)&DAT_08128c10 + (uVar5 + 0x40000000 >> 0x17)) * 0x10;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + *(short *)((int)&DAT_08128c10 + (uVar5 >> 0x17)) * 0x10;
    if (*pbVar4 != 0) {
      return in_lr;
    }
    goto LAB_080a1872;
  case 4:
    *(undefined4 *)(param_1 + 0x60) = 0x180;
    *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
  case 5:
    iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar2;
    iVar1 = *(int *)(param_1 + 0xb4) + 0x2000;
    if (iVar2 < iVar1) {
      return in_lr;
    }
    goto LAB_080a1870;
  case 6:
    *(uint *)(param_1 + 100) = *(int *)(param_1 + 0x54) + (uVar5 * 2 + -1) * 0x1000;
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0xb9) = 0x21;
    *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0xb8) + '\x01';
  case 7:
    pbVar4 = (byte *)(param_1 + 0xb9);
    *pbVar4 = *pbVar4 - 1;
    iVar1 = FUN_081288bc((uint)*pbVar4 << 7,0x21);
    uVar3 = -iVar1 - 0x80U & 0xff;
    uVar5 = (uVar3 + uVar5 * 2 * (0x140 - uVar3)) * 0x1000000;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) +
         *(short *)((int)&DAT_08128c10 + (uVar5 + 0x40000000 >> 0x17)) * 0x10;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) + *(short *)((int)&DAT_08128c10 + (uVar5 >> 0x17)) * 0x10;
    if (*pbVar4 == 0) {
      *(char *)(param_1 + 0xba) = *(char *)(param_1 + 0xba) + '\x01';
      *(undefined *)(param_1 + 0xb8) = 0;
    }
  default:
    goto switchD_080a1770_caseD_8;
  }
}

