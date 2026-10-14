// sub_0803CD64 at 0x0803CD64 (thumb)

undefined4 sub_0803CD64(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 0x58);
  iVar2 = sub_0801EFE8(uVar4,0);
  iVar3 = sub_0801F004(uVar4,0);
  iVar2 = sub_08038E6C(iVar2 - iVar6,iVar3 - iVar1);
  uVar5 = (uint)*(byte *)(param_1 + 0x13);
  if ((((uVar5 - iVar2) + 4 & 0xff) < 9) || (*(char *)(param_1 + 0xf) != '\0')) {
    uVar5 = sub_08038EEC(iVar2,uVar5,4);
  }
  else {
    if (uVar5 == 0) {
      uVar5 = 0xfffffffc;
    }
    else {
      uVar5 = uVar5 + 4;
    }
    uVar5 = uVar5 & 0xff;
  }
  *(char *)(param_1 + 0x13) = (char)uVar5;
  iVar2 = 0x600 - ((short)(&DAT_080ef450)[uVar5 & 0x7f] * 0x360 >> 8);
  iVar3 = (short)(&DAT_080ef450)[uVar5 + 0x40 & 0xff] * iVar2 >> 8;
  *(int *)(param_1 + 0x5c) = iVar3;
  iVar2 = iVar2 * (short)(&DAT_080ef450)[uVar5 & 0xff] >> 8;
  *(int *)(param_1 + 0x60) = iVar2;
  *(int *)(param_1 + 0x54) = iVar6 + iVar3;
  *(int *)(param_1 + 0x58) = iVar1 + iVar2;
  sub_0803D17C(param_1);
  *(undefined *)(param_1 + 0xf) = 1;
  return in_lr;
}

