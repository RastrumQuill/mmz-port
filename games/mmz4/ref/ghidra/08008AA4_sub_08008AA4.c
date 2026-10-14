// sub_08008AA4 at 0x08008AA4 (thumb)

undefined8 sub_08008AA4(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar2 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) < 0x4f6)) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_02001290)
                    [((int)param_2 >> 0xc) * (uint)DAT_02001290 + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_02000c68);
    iVar2 = sub_08128888(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_08827b90 + (uVar1 & 0xf) * 4));
    if (iVar2 == 0) {
LAB_08008b58:
      uVar4 = sub_08009370(param_1,param_2);
      if ((uVar4 & 0x2000) == 0) goto LAB_08008b6a;
      puVar3 = &DAT_02000028;
    }
    else if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x4000) == 0) goto LAB_08008b58;
      puVar3 = &DAT_0202cab4;
    }
    else {
      puVar3 = &DAT_0202cab8;
    }
    uVar5 = *puVar3;
  }
  else {
LAB_08008b6a:
    uVar5 = 0;
  }
  return CONCAT44(in_lr,uVar5);
}

