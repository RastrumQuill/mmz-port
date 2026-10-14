// sub_0806D5C8 at 0x0806D5C8 (thumb)

undefined4 sub_0806D5C8(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = *(uint *)(param_1 + 0xb4);
    iVar3 = -((int)(-uVar4 | uVar4) >> 0x1f);
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 == 0) {
      return in_lr;
    }
    if (iVar3 == 1) {
      if (uVar4 == 0) {
        if (*(int *)(param_1 + 0xb8) == 0) {
          if (*(int *)(param_1 + 0xbc) == 0) {
            uVar1 = 3;
          }
          else {
            uVar1 = 2;
          }
          *(undefined *)(param_1 + 0xd8) = uVar1;
        }
        else {
          *(undefined *)(param_1 + 0xd8) = 1;
        }
      }
      else {
        *(undefined *)(param_1 + 0xd8) = 0;
      }
    }
    else {
      do {
        uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar4 & 0x7fffffff;
        uVar4 = uVar4 * 2 >> 0x11 & 3;
        *(char *)(param_1 + 0xd8) = (char)uVar4;
      } while (*(byte *)(param_1 + 0xd9) == uVar4);
    }
    *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd8);
    *(undefined *)(param_1 + 0xd4 + (uint)*(byte *)(param_1 + 0xd8)) = 1;
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

