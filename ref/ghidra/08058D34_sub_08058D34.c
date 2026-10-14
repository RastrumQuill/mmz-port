// sub_08058D34 at 0x08058D34 (thumb)

undefined4 sub_08058D34(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  iVar3 = param_1 + 0x6c;
  sub_08003458(iVar3);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x13);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 2;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54) + 0x10;
      *(int *)(param_1 + 0x54) = iVar2;
      if (iVar2 < 0x41) goto LAB_08058dc2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54) + -0x10;
      *(int *)(param_1 + 0x54) = iVar2;
      if (-0x41 < iVar2) goto LAB_08058dc2;
    }
    *(undefined4 *)(param_1 + 0x54) = 0;
LAB_08058dc2:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_080033F0(iVar3,6);
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar1;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_08003458(iVar3);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined *)(param_1 + 0x13) = 1;
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + -0x10;
    *(int *)(param_1 + 0x54) = iVar3;
    if (-0x41 < iVar3) goto LAB_08058e4e;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + 0x10;
    *(int *)(param_1 + 0x54) = iVar3;
    if (iVar3 < 0x41) goto LAB_08058e4e;
  }
  *(undefined *)(param_1 + 0x13) = 2;
LAB_08058e4e:
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  return in_lr;
}

