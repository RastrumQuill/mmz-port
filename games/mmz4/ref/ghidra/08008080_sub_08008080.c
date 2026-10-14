// sub_08008080 at 0x08008080 (thumb)

undefined8 sub_08008080(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar2 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  iVar2 = 0;
  uVar5 = param_2;
  do {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02001290)
                    [(uint)DAT_02001290 * ((int)uVar5 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_02000c68);
    uVar4 = uVar1 & 0xf;
    uVar6 = uVar5;
    if ((((uVar1 & 0xf) == 0) || (uVar4 == 0xf)) || ((uVar1 & 0x8400) != 0)) {
LAB_08008142:
      iVar2 = uVar6 - param_2;
      goto LAB_0800815e;
    }
    if (uVar4 == 1) {
      uVar6 = uVar5 + 0x1000 & 0xfffff000;
    }
    else {
      iVar3 = sub_0812888C(param_1 & 0xfff,~uVar5 & 0xfff,0xfff,
                           *(undefined4 *)(&DAT_08827bd0 + uVar4 * 4));
      if ((iVar3 == 0) || (uVar6 = uVar5 - iVar3, ((uVar5 ^ uVar6) & 0x1000) == 0))
      goto LAB_08008142;
    }
    iVar2 = iVar2 + 1;
    uVar5 = uVar6;
  } while (iVar2 < 0x10);
  iVar2 = -1;
LAB_0800815e:
  return CONCAT44(in_lr,iVar2);
}

