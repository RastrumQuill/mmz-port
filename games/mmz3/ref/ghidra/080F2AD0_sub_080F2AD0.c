// sub_080F2AD0 at 0x080F2AD0 (thumb)

undefined4 sub_080F2AD0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 2) {
    if (2 < bVar1) {
      if (bVar1 != 0x77) {
        if (bVar1 < 0x78) {
          if (bVar1 == 3) {
            if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
              return in_lr;
            }
            sub_080EDB10(param_1,0xc0400);
            return in_lr;
          }
LAB_080f2afa:
          sub_080F01B4(param_1);
          return in_lr;
        }
        if (bVar1 != 0x7c) goto LAB_080f2afa;
      }
      if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
        return in_lr;
      }
      sub_080EA2B0(0x1337);
      uVar2 = 3;
      goto LAB_080f2bc0;
    }
    if (bVar1 == 0) {
      sub_080EA2B0(0x1336);
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    }
    else if (bVar1 != 1) goto LAB_080f2afa;
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA244(0x1302);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
    return in_lr;
  }
  sVar3 = sub_080F2DC4(param_1);
  if (sVar3 == 0) {
    return in_lr;
  }
  if (sVar3 < 1) {
    if (sVar3 != -1) {
      sub_0800471C(4);
      return in_lr;
    }
    DAT_02030106 = DAT_02030106 | 2;
    uVar2 = 0x7c;
  }
  else {
    DAT_02030106 = DAT_02030106 | 2;
    uVar2 = 0x70;
  }
LAB_080f2bc0:
  *(undefined *)(param_1 + 3) = uVar2;
  return in_lr;
}

