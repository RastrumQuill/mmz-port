// sub_080F1B70 at 0x080F1B70 (thumb)

undefined4 sub_080F1B70(int param_1)

{
  byte bVar1;
  undefined uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 3) {
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    *(undefined *)(param_1 + 3) = 4;
LAB_080f1c20:
    if (DAT_02030c1a != 0) {
      DAT_02030c18 = DAT_02030c18 | 2;
      return in_lr;
    }
    sub_080EDB10(param_1,0x400);
    return in_lr;
  }
  if (3 < bVar1) {
    if (bVar1 == 0x77) {
      if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
        return in_lr;
      }
      uVar4 = 0x1303;
    }
    else {
      if (bVar1 < 0x78) {
        if (bVar1 == 4) goto LAB_080f1c20;
LAB_080f1b9e:
        sub_080F01B4(param_1);
        return in_lr;
      }
      if (bVar1 != 0x7c) goto LAB_080f1b9e;
      if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
        return in_lr;
      }
      uVar4 = 0x1304;
    }
    sub_080EA2B0(uVar4);
    uVar2 = 3;
    goto LAB_080f1c70;
  }
  if (bVar1 == 1) {
LAB_080f1bb2:
    if ((DAT_02030c1a != 0) && (DAT_02030c1a != 4)) {
      return in_lr;
    }
    sub_080EA244(0x1302);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080f1b9e;
    sub_080EA2B0(0x1301);
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    goto LAB_080f1bb2;
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
    uVar2 = 0x7c;
  }
  else {
    uVar2 = 0x70;
  }
LAB_080f1c70:
  *(undefined *)(param_1 + 3) = uVar2;
  return in_lr;
}

