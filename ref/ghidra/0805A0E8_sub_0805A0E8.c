// sub_0805A0E8 at 0x0805A0E8 (thumb)

undefined4 sub_0805A0E8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    piVar4 = (int *)(param_1 + 0xc4);
    iVar6 = *(int *)(param_1 + 0x4c);
    iVar7 = iVar6 - *piVar4;
    if (iVar7 < 0) {
      iVar7 = *piVar4 - iVar6;
    }
    if (0x10000 < iVar7) {
      if (*(char *)(param_1 + 0xd) == '\x02') {
        bVar1 = *(byte *)(param_1 + 10) >> 4;
        if (iVar6 - *piVar4 < 0) {
          if ((bVar1 & 1) == 1) {
            return in_lr;
          }
        }
        else if ((bVar1 & 1) == 0) {
          return in_lr;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        *(byte *)(param_1 + 0x44) = (byte)((uint)(iVar6 - *piVar4) >> 0x1f);
        if (iVar6 - *piVar4 < 0) {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        *(byte *)(param_1 + 10) = bVar1;
      }
      *(undefined *)(param_1 + 0xc1) = 1;
      return in_lr;
    }
  }
  uVar5 = sub_08013D9C(&DAT_02022c44,param_1 + 0x4c);
  if ((0x6000 < uVar5) && (*(char *)(param_1 + 0x10) == '\x01')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  cVar2 = sub_080598F0(param_1);
  if (cVar2 == '\0') {
    uVar3 = 1;
  }
  else if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    if ((*(ushort *)(param_1 + 0x90) & 0x100) == 0) {
      return in_lr;
    }
    iVar7 = *(int *)(DAT_0202286c + 0x50) - *(int *)(param_1 + 0x50);
    if (iVar7 < 0) {
      iVar7 = *(int *)(param_1 + 0x50) - *(int *)(DAT_0202286c + 0x50);
    }
    if (0xfff < iVar7) {
      return in_lr;
    }
    iVar8 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    iVar6 = *(int *)(iVar8 + 0x4c);
    iVar7 = iVar6 + 0x800;
    *(int *)(param_1 + 0x4c) = iVar7;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar7 = iVar6 + -0x800;
    }
    *(int *)(param_1 + 0x4c) = iVar7;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar8 + 0x50);
    sub_080599B0(param_1);
    uVar3 = 5;
  }
  else {
    uVar3 = 8;
  }
  *(undefined *)(param_1 + 0xd) = uVar3;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

