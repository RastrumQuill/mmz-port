// sub_080886A8 at 0x080886A8 (thumb)

undefined4 sub_080886A8(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  uVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = uVar3;
    if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
      uVar2 = uVar3 + 2;
    }
    sub_080D8004(&local_14,2,uVar2);
    sub_0801CF00(param_1,0x1d12);
    *(uint *)(param_1 + 0x5c) = (uVar3 * 2 + -1) * 0x60;
    *(uint *)(param_1 + 100) = (uVar3 * -2 + 1) * 4;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
    sub_08128884(param_1,0x8088821);
  }
  return in_lr;
}

