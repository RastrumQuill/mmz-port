// sub_08009B28 at 0x08009B28 (thumb)

undefined8 sub_08009B28(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar4 = param_2;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02002c60)
                    [(uint)DAT_02002c60 * ((int)uVar4 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_02002638);
    uVar2 = uVar1 & 0xf;
    uVar5 = uVar4;
    if (((uVar1 & 0xf) == 0) || (uVar1 == 0x800f)) break;
    if (uVar2 == 1) {
      uVar5 = (uVar4 & 0xfffff000) - 1;
    }
    else {
      iVar3 = sub_080FE2C8(param_1 & 0xfff,uVar4 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_083355c0 + uVar2 * 4));
      if ((iVar3 == 0) || (uVar5 = uVar4 + iVar3, ((uVar4 ^ uVar5) & 0x1000) == 0)) break;
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar5;
    if (0xf < iVar6) break;
  }
  if (iVar6 < 0x10) {
    iVar6 = sub_0800AE60(param_1,uVar5);
    iVar6 = iVar6 - param_2;
  }
  else {
    iVar6 = 1;
  }
  return CONCAT44(in_lr,iVar6);
}

