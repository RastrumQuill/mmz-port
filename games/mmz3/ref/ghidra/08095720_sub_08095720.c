// sub_08095720 at 0x08095720 (thumb)

undefined4 sub_08095720(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar2 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar3 = *(int *)(param_1 + 0x54);
    sub_08017700(param_1,0xd408);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = (uint)(0 < iVar2 - iVar3) * -0xc0 + 0x60;
    local_14 = 0x60;
    cVar1 = sub_08094AE0(param_1,1);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_080B7FC0(param_1,param_1 + 0x54,&local_18,0x15,&DAT_0836683c,0x18);
      }
      else {
        sub_080B8048(param_1,param_1 + 0x54,&local_18,0x15,&DAT_0836683c,0x18);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_080B7E18(param_1,param_1 + 0x54,&local_18,0,&DAT_0836683c,0x18);
      }
      else {
        sub_080B7EA0(param_1,param_1 + 0x54,&local_18,0,&DAT_0836683c,0x18);
      }
    }
    iVar2 = local_18;
    if (local_18 < 0) {
      iVar2 = local_18 + 3;
    }
    *(int *)(param_1 + 0x5c) = iVar2 >> 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar2 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sub_08094AE0(param_1,*(undefined4 *)(param_1 + 0x60));
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    sub_08095670(param_1);
  }
  return in_lr;
}

