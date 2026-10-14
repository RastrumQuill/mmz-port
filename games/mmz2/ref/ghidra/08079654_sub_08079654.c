// sub_08079654 at 0x08079654 (thumb)

undefined8 sub_08079654(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e130;
  iVar2 = iRam00000054;
  iVar3 = iRam00000058;
  if (DAT_0202e130 != 0) {
    iVar2 = sub_0801EFE8(DAT_0202e130,0);
    iVar3 = sub_0801F004(iVar1,0);
  }
  uVar4 = sub_08038E6C(iVar2 - *param_1,iVar3 - param_1[1]);
  uVar5 = uVar4 & 0xff;
  if (uVar4 * 0x1000000 + 0xf0000000 >> 0x18 < 0xb1) {
    if (0x70 < uVar5) {
      uVar5 = 0x70;
    }
  }
  else {
    uVar5 = 0x10;
  }
  return CONCAT44(in_lr,uVar5);
}

