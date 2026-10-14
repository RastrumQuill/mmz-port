// sub_080C2FF8 at 0x080C2FF8 (thumb)

undefined4 sub_080C2FF8(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(param_1 + 0x11)) && (1 < *(byte *)(iVar4 + 0xc))) {
    sub_080BF834(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x12) == '\0') {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0xc0;
      }
      else {
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 == '\0') {
          if (*(byte *)(param_1 + 0x11) < 2) {
            uVar3 = *(byte *)(param_1 + 0x11) | 0x2e02;
          }
          else {
            uVar3 = 0x2f02;
          }
          sub_080127E4(param_1,uVar3);
        }
      }
      uVar3 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
      if (uVar3 < 0x1000) {
        return in_lr;
      }
      if (1 < *(byte *)(param_1 + 0x11)) {
        sub_080BF834(param_1);
        return in_lr;
      }
      goto LAB_080c30d0;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x11) < 2) {
      sub_080127E4(param_1,*(byte *)(param_1 + 0x11) | 0x2e00);
    }
    else {
      sub_080127E4(param_1,0x2f01);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_080128D4(param_1);
  if ((*(byte *)(*(int *)(iVar4 + 0x18) + 9) & 1) == 0) {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0x11) < 2) {
    cVar2 = -1;
  }
  else {
    cVar2 = (*(byte *)(param_1 + 0x11) - 2) * ' ' + '\x01';
  }
  *(char *)(param_1 + 0x12) = cVar2;
LAB_080c30d0:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

