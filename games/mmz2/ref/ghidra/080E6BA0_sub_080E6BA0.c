// sub_080E6BA0 at 0x080E6BA0 (thumb)

undefined4 sub_080E6BA0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        if (DAT_0202f65a != 0) {
          if (DAT_0202f65a != 3) {
            return in_lr;
          }
          DAT_0202f658 = DAT_0202f658 | 2;
          return in_lr;
        }
        sub_080E0E64(param_1,0x400);
        return in_lr;
      }
      goto LAB_080e6c0a;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((DAT_0202ebb5 & 4) == 0) {
      sub_080DF038(0);
    }
    else {
      sub_080DF038(6);
    }
    DAT_0202ebb5 = DAT_0202ebb5 | 4;
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
    return in_lr;
  }
  sub_080DEFCC(1);
  *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
LAB_080e6c0a:
  if ((DAT_0202f65a == 0) || (DAT_0202f65a == 3)) {
    uVar2 = sub_080E7A44(param_1);
    if ((uVar2 & 0xffff) != 0) {
      if ((uVar2 & 0xffff) == 0 || (int)((uVar2 & 0xffff) * 0x10000) < 0) {
        sub_080DF038(5);
        *(undefined *)(param_1 + 3) = 3;
      }
      else {
        DAT_0202ebb5 = DAT_0202ebb5 | 8;
        sub_080DF038(2);
        sub_080E0E64(&DAT_0202f8e0,0x69010400);
      }
    }
  }
  return in_lr;
}

