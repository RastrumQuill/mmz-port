// sub_0800EFE0 at 0x0800EFE0 (thumb)

undefined8 sub_0800EFE0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if ((*param_1 - 0x80000U < 0x1a000) && (iVar1 = sub_080C8AD0(param_1[1],0xa000), iVar1 == 8)) {
    uVar2 = 3;
    goto LAB_0800f0a2;
  }
  iVar3 = *param_1;
  iVar1 = sub_080C8AD0(iVar3,0xf000);
  iVar4 = param_1[1];
  if ((iVar1 != 0xe) || (iVar1 = sub_080C8AD0(iVar4,0xa000), 8 < iVar1)) {
    if (0x6dfff < iVar4) {
      if ((iVar4 < 0x78000) && (iVar1 = sub_080C8AD0(iVar3,0xf000), iVar1 == 0xf)) {
        uVar2 = 5;
      }
      else if ((DAT_02022ab0 == 0x400) || (0x108fff < iVar3)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 6;
      }
      goto LAB_0800f0a2;
    }
    if (0xb3fff < iVar3) {
      if (iVar3 < 0xff001) {
        uVar2 = 2;
        goto LAB_0800f0a2;
      }
      if (iVar4 < 0x5a000) {
        uVar2 = 4;
        goto LAB_0800f0a2;
      }
    }
  }
  uVar2 = 1;
LAB_0800f0a2:
  return CONCAT44(in_lr,uVar2);
}

