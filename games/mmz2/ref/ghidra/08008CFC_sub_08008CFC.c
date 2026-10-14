// sub_08008CFC at 0x08008CFC (thumb)

undefined8 sub_08008CFC(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) < 0x4f6)) {
    uVar1 = (uint)*(ushort *)
                   ((uint)(&DAT_020017e0)
                          [((int)param_2 >> 0xc) * (uint)DAT_020017e0 + ((int)param_1 >> 0xc) + 2] *
                    2 + DAT_020011b8);
    iVar2 = sub_080EF11C(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_08312b8c + (uVar1 & 0xf) * 4));
    if (iVar2 == 0) {
      uVar1 = sub_08009FE4(param_1,param_2);
      uVar1 = uVar1 & 0xffff;
    }
  }
  else {
    uVar1 = 0xe01;
  }
  return CONCAT44(in_lr,uVar1);
}

