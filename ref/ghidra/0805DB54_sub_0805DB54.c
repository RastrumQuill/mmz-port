// sub_0805DB54 at 0x0805DB54 (thumb)

undefined4 sub_0805DB54(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(char *)(iVar1 + 0xf) == '\0') {
    DAT_02004f38 = 0x6446;
    sub_08005214(&DAT_06002000);
    sub_08005214(&DAT_06000800 + (DAT_02004f38 & 0x1f00) * 4);
    uVar3 = 0;
    do {
      FUN_080c88ec(&DAT_082b013c + uVar3 * 0x20,
                   (DAT_02004f38 & 0x1f00) * 8 + uVar3 * 0x40 + 0x6000000,8);
      uVar3 = uVar3 + 1 & 0xffff;
    } while (uVar3 < 9);
    DAT_02004f30 = DAT_02004f30 | 0x2400;
    *(char *)(iVar1 + 0xf) = *(char *)(iVar1 + 0xf) + '\x01';
  }
  iVar2 = (*(int *)(iVar1 + 0x4c) - *(int *)(param_2 + 8)) + 0x600;
  iVar4 = (*(int *)(iVar1 + 0x50) - *(int *)(param_2 + 0xc)) + -0x100;
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = -iVar2;
  }
  if (((iVar1 < 0xf001) && (iVar4 < 0xa001)) && (-0x4801 < iVar4)) {
    DAT_02004f44 = -(short)((uint)(iVar2 * 0x100) >> 0x10);
    DAT_02004f46 = -(short)((uint)(iVar4 * 0x100) >> 0x10);
  }
  else {
    DAT_02004f44 = 0x100;
  }
  return in_lr;
}

