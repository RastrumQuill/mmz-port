// sub_08009A3C at 0x08009A3C (thumb)

undefined8 sub_08009A3C(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) < 0x4f6)) {
    uVar1 = (uint)*(ushort *)
                   ((uint)(&DAT_02002c60)
                          [((int)param_2 >> 0xc) * (uint)DAT_02002c60 + ((int)param_1 >> 0xc) + 2] *
                    2 + DAT_02002638);
    iVar2 = sub_080FE2C4(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_083355c0 + (uVar1 & 0xf) * 4));
    if (iVar2 == 0) {
      uVar1 = sub_0800ADB0(param_1,param_2);
      uVar1 = uVar1 & 0xffff;
    }
  }
  else {
    uVar1 = 0xa01;
  }
  return CONCAT44(in_lr,uVar1);
}

