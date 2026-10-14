// sub_08009AC0 at 0x08009AC0 (thumb)

undefined8 sub_08009AC0(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  uVar1 = *(ushort *)
           ((uint)(&DAT_02002c60)
                  [((int)param_2 >> 0xc) * (uint)DAT_02002c60 + ((int)param_1 >> 0xc) + 2] * 2 +
           DAT_02002638);
  uVar2 = (uint)uVar1;
  if (((uVar1 & 0xf) == 0) ||
     (((uVar2 & 0xf) != 1 &&
      (iVar3 = sub_080FE2C4(param_1 & 0xfff,param_2 & 0xfff,
                            *(undefined4 *)(&DAT_083355c0 + (uVar2 & 0xf) * 4)), iVar3 == 0)))) {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

