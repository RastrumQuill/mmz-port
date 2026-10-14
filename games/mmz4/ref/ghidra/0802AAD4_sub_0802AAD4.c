// sub_0802AAD4 at 0x0802AAD4 (thumb)

undefined8 sub_0802AAD4(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  if (param_1 < 9) {
    if ((DAT_0202e8c5 & 1) != 0) {
      param_1 = 8;
    }
    if ((DAT_0202e8b9 & 2) != 0) {
      param_1 = 5;
    }
    uVar3 = 0;
    uVar1 = *(ushort *)(&DAT_0884f024 + param_1 * 0xe);
    while (((uint)uVar1 <= (uVar2 * 2 >> 0x11 & 0xff) && (uVar3 = uVar3 + 1 & 0xffff, uVar3 < 6))) {
      uVar1 = *(ushort *)(&DAT_0884f024 + uVar3 * 2 + param_1 * 0xe);
    }
    if (uVar3 != 0) {
      sub_08107D6C(uVar3 - 1 & 0xff,param_2,0);
    }
  }
  else {
    uVar3 = 1;
  }
  return CONCAT44(in_lr,uVar3);
}

