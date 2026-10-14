// sub_0806D9A0 at 0x0806D9A0 (thumb)

undefined4 sub_0806D9A0(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x11) == '\x01') {
    return in_lr;
  }
  iVar4 = sub_08048BE8(param_1);
  if (iVar4 != 0) {
    return in_lr;
  }
  bVar3 = *(byte *)(param_1 + 0xd);
  if (bVar3 == 1) {
    bVar3 = *(char *)(param_1 + 0x1f) - 1;
    *(byte *)(param_1 + 0x1f) = bVar3;
    if (0xcf < bVar3) {
      return in_lr;
    }
    sub_0806D77C(param_1,1);
    sub_08001EAC(0xb);
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  else {
    if (bVar3 < 2) {
      if (bVar3 != 0) {
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar1 + -1;
      if (cVar1 != '\0') {
        return in_lr;
      }
      uVar2 = 0xef;
    }
    else {
      if (bVar3 != 2) {
        if (bVar3 != 3) {
          return in_lr;
        }
        bVar3 = *(char *)(param_1 + 0x1f) + 1;
        *(byte *)(param_1 + 0x1f) = bVar3;
        if (bVar3 < 0xef) {
          return in_lr;
        }
        sub_0806D77C(param_1,1);
        sub_08001EAC(0xb);
        *(undefined *)(param_1 + 0x12) = 0x20;
        *(undefined *)(param_1 + 0xd) = 0;
        return in_lr;
      }
      cVar1 = *(char *)(param_1 + 0x12);
      *(char *)(param_1 + 0x12) = cVar1 + -1;
      if (cVar1 != '\0') {
        return in_lr;
      }
      uVar2 = 0xcf;
    }
    *(undefined *)(param_1 + 0x1f) = uVar2;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

