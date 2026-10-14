// sub_080B6F90 at 0x080B6F90 (thumb)

/* WARNING: Removing unreachable block (ram,0x080b703a) */

undefined4 sub_080B6F90(int param_1)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  sub_08018FF8(*(undefined4 *)(param_1 + 0x20),param_1 + 0x4c,0);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8340 + (uint)*(byte *)(param_1 + 0xd) * 4));
    iVar6 = *(int *)(param_1 + 0x54);
    iVar4 = iVar6 - (iVar6 * 0xff >> 8);
    iVar2 = iVar6 * 6 >> 8;
    iVar2 = iVar4 * iVar4 + iVar2 * iVar2;
    if ((iVar2 == 0) || (0xfffff < iVar2)) {
      iVar2 = *(byte *)(param_1 + 0x12) + 1;
    }
    else {
      iVar4 = sub_080C8AD0(0x100000,iVar2);
      iVar2 = sub_080C8B68(0x100000,iVar2);
      if (iVar2 != 0) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = sub_080C88FC(iVar4);
      iVar2 = (uint)*(byte *)(param_1 + 0x12) + (uVar3 & 0xffff);
    }
    iVar2 = iVar2 + (iVar2 >> 8) * -0x100;
    iVar5 = iVar2 + 0x100;
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = iVar2 + 0x1ff;
    }
    iVar5 = iVar5 + (iVar4 >> 8) * -0x100;
    *(char *)(param_1 + 0x12) = (char)iVar5;
    iVar2 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = 1;
    }
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + ((short)(&DAT_080c8e24)[iVar5] * iVar6 >> 8) * iVar2;
    iVar4 = iVar5 + 0x40;
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = iVar5 + 0x13f;
    }
    iVar4 = iVar4 + (iVar2 >> 8) * -0x100;
    iVar5 = iVar4 + 0x100;
    iVar2 = iVar5;
    if (iVar5 < 0) {
      iVar2 = iVar4 + 0x1ff;
    }
    iVar4 = 2;
    if (0x7f < iVar5 + (iVar2 >> 8) * -0x100) {
      iVar4 = 3;
    }
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | (byte)(iVar4 << 2);
    iVar2 = sub_080C8B68(*(byte *)(param_1 + 0xbe) + 1,0x1c);
    *(byte *)(param_1 + 0xbe) = (byte)iVar2;
    iVar2 = sub_080C8AD0(iVar2 << 8,0x1c);
    iVar4 = 0xa00;
    if (iVar6 < 0x1300) {
      iVar4 = sub_080C8AD0((iVar6 + -0xc00) * 0xa00,0x700);
    }
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x50) - (iVar4 * (short)(&DAT_080c8e24)[iVar2] >> 8);
  }
  if (*(char *)(param_1 + 0xc) == '\x02') {
    sub_08099D0C(param_1,2);
  }
  else {
    uVar1 = sub_08099BF8(param_1,*(undefined *)(param_1 + 0x13),2);
    *(undefined *)(param_1 + 0x13) = uVar1;
  }
  sub_080B50EC(param_1);
  return in_lr;
}

