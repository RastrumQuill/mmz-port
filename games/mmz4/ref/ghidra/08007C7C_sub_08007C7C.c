// sub_08007C7C at 0x08007C7C (thumb)

undefined8 sub_08007C7C(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (DAT_02000c80 == 4) {
    iVar1 = sub_08128954(param_1 - 0xf000,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) < 0x4f6)) {
    uVar2 = (uint)*(ushort *)
                   ((uint)(&DAT_02001290)
                          [((int)param_2 >> 0xc) * (uint)DAT_02001290 + ((int)param_1 >> 0xc) + 2] *
                    2 + DAT_02000c68);
    iVar1 = sub_08128888(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_08827b90 + (uVar2 & 0xf) * 4));
    if (iVar1 == 0) {
      uVar2 = sub_08009370(param_1,param_2);
      uVar2 = uVar2 & 0xffff;
    }
  }
  else {
    uVar2 = 0xa01;
  }
  return CONCAT44(in_lr,uVar2);
}

