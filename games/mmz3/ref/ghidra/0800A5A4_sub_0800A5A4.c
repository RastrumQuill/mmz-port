// sub_0800A5A4 at 0x0800A5A4 (thumb)

undefined8 sub_0800A5A4(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) < 0x4f6)) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02002c60)
                    [((int)param_2 >> 0xc) * (uint)DAT_02002c60 + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_02002638);
    iVar2 = sub_080FE2C4(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_083355c0 + (uVar1 & 0xf) * 4));
    if (iVar2 == 0) {
LAB_0800a630:
      uVar4 = sub_0800ADB0(param_1,param_2);
      if ((uVar4 & 0x2000) == 0) goto LAB_0800a642;
      puVar3 = &DAT_020002a8;
    }
    else if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x4000) == 0) goto LAB_0800a630;
      puVar3 = &DAT_0202e484;
    }
    else {
      puVar3 = &DAT_0202e488;
    }
    uVar5 = *puVar3;
  }
  else {
LAB_0800a642:
    uVar5 = 0;
  }
  return CONCAT44(in_lr,uVar5);
}

