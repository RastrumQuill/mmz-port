// sub_080BEF8C at 0x080BEF8C (thumb)

undefined4 sub_080BEF8C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if ((*(char *)(iVar3 + 0xc) == '\x02') && (*(byte *)(iVar3 + 0xd) < 4)) {
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    uVar4 = (uint)*(byte *)(iVar3 + 0xca);
    iVar3 = *(int *)(iVar3 + 0xcc);
    if (5 < *(byte *)(param_1 + 0x10)) {
      uVar4 = 0x100 - (uVar4 + 0x15 & 0xff);
    }
    iVar1 = sub_080EF330(*(byte *)(param_1 + 0x10),6);
    iVar1 = sub_080EF2B8(iVar1 << 8,6);
    uVar4 = uVar4 + iVar1 & 0xff;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + ((short)(&DAT_080ef450)[uVar4 + 0x40 & 0xff] * iVar3 >> 8);
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + ((short)(&DAT_080ef450)[uVar4] * iVar3 >> 8);
    sub_080128D4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BF03C(param_1);
  }
  return in_lr;
}

