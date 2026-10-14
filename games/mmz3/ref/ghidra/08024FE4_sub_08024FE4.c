// sub_08024FE4 at 0x08024FE4 (thumb)

undefined8 sub_08024FE4(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar2 & 0x7fffffff;
  if (param_1 < 9) {
    if ((DAT_02030104 & 0x10) != 0) {
      param_1 = 8;
    }
    if ((DAT_02030108 & 0x20) != 0) {
      param_1 = 5;
    }
    uVar3 = 0;
    uVar1 = *(ushort *)(&DAT_0835a424 + param_1 * 0xe);
    while (((uint)uVar1 <= (uVar2 * 2 >> 0x11 & 0xff) && (uVar3 = uVar3 + 1 & 0xffff, uVar3 < 6))) {
      uVar1 = *(ushort *)(&DAT_0835a424 + uVar3 * 2 + param_1 * 0xe);
    }
    if (uVar3 != 0) {
      sub_080E04D8(uVar3 - 1 & 0xff,param_2,0);
    }
  }
  else {
    uVar2 = (int)(char)(&DAT_0835a4a2)[param_1 - 9 & 0xffff] - 1;
    if (((int)(*(byte *)(DAT_0203df90 + ((int)uVar2 >> 2)) & 0xf) >> (uVar2 & 3) & 1U) == 0) {
      sub_080E0A70((&DAT_0835a4a2)[param_1 - 9 & 0xffff],param_2,1);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return CONCAT44(in_lr,uVar3);
}

