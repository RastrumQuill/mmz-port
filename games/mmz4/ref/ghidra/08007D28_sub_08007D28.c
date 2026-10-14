// sub_08007D28 at 0x08007D28 (thumb)

undefined8 sub_08007D28(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar2 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  uVar1 = *(ushort *)
           ((uint)(&DAT_02001290)
                  [((int)param_2 >> 0xc) * (uint)DAT_02001290 + ((int)param_1 >> 0xc) + 2] * 2 +
           DAT_02000c68);
  uVar3 = (uint)uVar1;
  if (((uVar1 & 0xf) == 0) ||
     (((uVar3 & 0xf) != 1 &&
      (iVar2 = sub_08128888(param_1 & 0xfff,param_2 & 0xfff,
                            *(undefined4 *)(&DAT_08827b90 + (uVar3 & 0xf) * 4)), iVar2 == 0)))) {
    uVar3 = 0;
  }
  return CONCAT44(in_lr,uVar3);
}

