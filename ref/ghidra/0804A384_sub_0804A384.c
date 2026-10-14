// sub_0804A384 at 0x0804A384 (thumb)

undefined4 sub_0804A384(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,2);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x30;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 - 1;
  if (bVar1 != 0x2a) {
    if (bVar1 < 0x2b) {
      if (bVar1 == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 1;
        return in_lr;
      }
      if (bVar1 != 0x25) {
        return in_lr;
      }
    }
    else if (bVar1 != 0x2f) {
      return in_lr;
    }
  }
  local_c = *(int *)(param_1 + 0x50) + -0x1200;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    local_10 = *(int *)(param_1 + 0x4c) + -0x1b00;
    uVar2 = 0;
  }
  else {
    local_10 = *(int *)(param_1 + 0x4c) + 0x1b00;
    uVar2 = 0x80;
  }
  sub_08076710(&local_10,0x240,uVar2);
  sub_08001EAC(0xd);
  return in_lr;
}

