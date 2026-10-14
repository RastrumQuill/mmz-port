// sub_080550CC at 0x080550CC (thumb)

undefined4 sub_080550CC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        sub_080033F0(param_1 + 0x6c,1);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
      *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      goto LAB_0805519e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(undefined4 *)(param_1 + 0x54) = 0xfffffdf6;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
    *(undefined4 *)(param_1 + 0x60) = 7;
    *(undefined4 *)(param_1 + 0x58) = 0x150;
    sub_080033F0(param_1 + 0x6c,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (((cVar2 == '\0') || (iVar3 == 0)) || (*(int *)(iVar3 + 0xc4) != 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
LAB_0805519e:
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

