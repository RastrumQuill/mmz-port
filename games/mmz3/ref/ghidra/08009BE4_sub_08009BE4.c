// sub_08009BE4 at 0x08009BE4 (thumb)

undefined8 sub_08009BE4(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  uVar4 = param_2;
  do {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02002c60)
                    [(uint)DAT_02002c60 * ((int)uVar4 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_02002638);
    uVar3 = uVar1 & 0xf;
    uVar5 = uVar4;
    if (((uVar1 & 0xf) == 0) || (uVar1 == 0x800f)) {
LAB_08009c6e:
      iVar6 = uVar5 - param_2;
      goto LAB_08009c84;
    }
    if (uVar3 == 1) {
      uVar5 = (uVar4 & 0xfffff000) - 1;
    }
    else {
      iVar2 = sub_080FE2C8(param_1 & 0xfff,uVar4 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_083355c0 + uVar3 * 4));
      if ((iVar2 == 0) || (uVar5 = uVar4 + iVar2, ((uVar4 ^ uVar5) & 0x1000) == 0))
      goto LAB_08009c6e;
    }
    iVar6 = iVar6 + 1;
    uVar4 = uVar5;
  } while (iVar6 < 0x10);
  iVar6 = 1;
LAB_08009c84:
  return CONCAT44(in_lr,iVar6);
}

