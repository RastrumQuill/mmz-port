// sub_08007DB4 at 0x08007DB4 (thumb)

undefined8 sub_08007DB4(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar2 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  iVar2 = 0;
  uVar5 = param_2;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02001290)
                    [(uint)DAT_02001290 * ((int)uVar5 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_02000c68);
    uVar3 = uVar1 & 0xf;
    uVar6 = uVar5;
    if (((uVar1 & 0xf) == 0) || (uVar1 == 0x800f)) break;
    if (uVar3 == 1) {
      uVar6 = (uVar5 & 0xfffff000) - 1;
    }
    else {
      iVar4 = sub_0812888C(param_1 & 0xfff,uVar5 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_08827b90 + uVar3 * 4));
      if ((iVar4 == 0) || (uVar6 = uVar5 + iVar4, ((uVar5 ^ uVar6) & 0x1000) == 0)) break;
    }
    iVar2 = iVar2 + 1;
    uVar5 = uVar6;
    if (0xf < iVar2) break;
  }
  if (iVar2 < 0x10) {
    iVar2 = sub_08009420(param_1,uVar6);
    iVar2 = iVar2 - param_2;
  }
  else {
    iVar2 = 1;
  }
  return CONCAT44(in_lr,iVar2);
}

