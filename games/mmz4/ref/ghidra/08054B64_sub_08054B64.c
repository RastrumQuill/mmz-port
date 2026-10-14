// sub_08054B64 at 0x08054B64 (thumb)

undefined4 sub_08054B64(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  undefined local_20 [8];
  undefined4 local_18;
  int local_14;
  
  sub_08128B5C(local_20,&DAT_08128eac,5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x57);
    sub_08055058(param_1,4,*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0));
    *(undefined *)(param_1 + 0x12) = 0x6c;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08054FBC(param_1);
  if (*(char *)(param_1 + 0x13) != '\0') {
    uVar1 = sub_08055074(param_1,*(undefined4 *)(param_1 + 0xc0));
    *(undefined *)(param_1 + 0x13) = uVar1;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    cVar2 = sub_08128A9C(*(char *)(param_1 + 0x12),0x24);
    if (cVar2 == '\0') {
      sub_08002B10(0x56);
      local_18 = *(undefined4 *)(param_1 + 0x54);
      local_14 = *(int *)(param_1 + 0x58) + -0x800;
      iVar3 = 0;
      do {
        sub_080BFBEC(param_1,&local_18,0,local_20[iVar3]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 5);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == '\0') {
      *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
    }
  }
  if (*(short *)(param_1 + 0x12) == 0) {
    *(undefined *)(param_1 + 0xe) = 6;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

