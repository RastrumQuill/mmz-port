// sub_080CB594 at 0x080CB594 (thumb)

undefined4 sub_080CB594(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080127E4(param_1,0x6401);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54) + 0x300;
        *(int *)(param_1 + 0x54) = iVar2;
        iVar3 = *(int *)(param_1 + 0xb4) + 0x7800;
        if (iVar2 <= iVar3) {
          return in_lr;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54) + -0x300;
        *(int *)(param_1 + 0x54) = iVar2;
        iVar3 = *(int *)(param_1 + 0xb4) + -0x7800;
        if (iVar3 <= iVar2) {
          return in_lr;
        }
      }
      *(int *)(param_1 + 0x54) = iVar3;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    if (bVar1 != 2) {
      return in_lr;
    }
  }
  sub_080128D4(param_1);
  return in_lr;
}

