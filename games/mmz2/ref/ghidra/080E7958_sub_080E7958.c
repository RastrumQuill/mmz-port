// sub_080E7958 at 0x080E7958 (thumb)

undefined4 sub_080E7958(int param_1)

{
  byte bVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 != 2) {
    if (2 < bVar1) {
      if (bVar1 == 0x3c) {
        if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
          return in_lr;
        }
        sub_080DF038(0x21b);
        *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
      }
      else {
        if (bVar1 < 0x3d) {
          if (bVar1 == 0x37) {
            if (DAT_0202f65a != 0) {
              DAT_0202f658 = DAT_0202f658 | 2;
              return in_lr;
            }
            sub_080E0E64(param_1,0x400);
            return in_lr;
          }
LAB_080e7982:
          sub_080E6C8C(param_1);
          return in_lr;
        }
        if (bVar1 != 0x3d) goto LAB_080e7982;
      }
      if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
        return in_lr;
      }
      uVar2 = 0x37;
      goto LAB_080e7a32;
    }
    if (bVar1 == 0) {
      sub_080DF038(0x219);
      *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
    }
    else if (bVar1 != 1) goto LAB_080e7982;
    if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
      return in_lr;
    }
    sub_080DEFCC(0x21a);
    *(undefined2 *)(param_1 + 10) = 0;
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
  if ((DAT_0202f65a != 0) && (DAT_0202f65a != 3)) {
    return in_lr;
  }
  uVar3 = sub_080E7A44(param_1);
  if ((uVar3 & 0xffff) == 0) {
    return in_lr;
  }
  if ((int)(uVar3 * 0x10000) < 1) {
    uVar2 = 0x3c;
  }
  else {
    uVar2 = 0x30;
  }
LAB_080e7a32:
  *(undefined *)(param_1 + 3) = uVar2;
  return in_lr;
}

