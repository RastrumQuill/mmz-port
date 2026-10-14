// sub_08003274 at 0x08003274 (thumb)

undefined4 sub_08003274(uint param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080032AC(param_1 & 0xffff);
  if (iVar1 != 0) {
    sub_080EDCD4((&DAT_0810097c)[(uint)*(ushort *)(&DAT_08100a28 + (param_1 & 0xffff) * 8) * 3],6);
  }
  return in_lr;
}

