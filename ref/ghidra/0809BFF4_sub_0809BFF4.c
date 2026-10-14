// sub_0809BFF4 at 0x0809BFF4 (thumb)

undefined4 sub_0809BFF4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if ((*(char *)(iVar4 + 0xc) == '\x02') && (*(byte *)(iVar4 + 0xd) < 4)) {
    uVar2 = *(undefined4 *)(iVar4 + 0x50);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar4 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar2;
    uVar6 = (uint)*(byte *)(iVar4 + 0xd2);
    iVar4 = *(int *)(iVar4 + 0xd4);
    if (5 < *(byte *)(param_1 + 0x10)) {
      iVar5 = uVar6 + 0x15 + ((int)(uVar6 + 0x15) >> 8) * -0x100;
      iVar3 = iVar5 + 0x100;
      iVar1 = iVar3;
      if (iVar3 < 0) {
        iVar1 = iVar5 + 0x1ff;
      }
      uVar6 = 0x100 - (iVar3 + (iVar1 >> 8) * -0x100);
    }
    iVar1 = sub_080C8CB0(*(byte *)(param_1 + 0x10),6);
    iVar3 = sub_080C8C38(iVar1 << 8,6);
    iVar3 = uVar6 + iVar3;
    iVar1 = iVar3;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 0xff;
    }
    iVar3 = iVar3 + (iVar1 >> 8) * -0x100;
    iVar5 = iVar3 + 0x100;
    iVar1 = iVar5;
    if (iVar5 < 0) {
      iVar1 = iVar3 + 0x1ff;
    }
    iVar5 = iVar5 + (iVar1 >> 8) * -0x100;
    *(int *)(param_1 + 0x4c) =
         *(int *)(param_1 + 0x4c) + ((short)(&DAT_080c8e24)[iVar5 + 0x40] * iVar4 >> 8);
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x50) + ((short)(&DAT_080c8e24)[iVar5] * iVar4 >> 8);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0809C100(param_1);
  }
  return in_lr;
}

