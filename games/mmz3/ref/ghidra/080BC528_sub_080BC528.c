// sub_080BC528 at 0x080BC528 (thumb)

undefined4 sub_080BC528(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,*(byte *)(param_1 + 0x12) + 0x3302);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar2 = (DAT_020302c0 * 2 + -1) / 2;
  iVar5 = (DAT_020302c4 * 2 + -1) / 2;
  iVar3 = (int)*(short *)(&DAT_0836b5c6 + (uint)*(byte *)(param_1 + 0x12) * 2) *
          (*(int *)(iVar1 + 0x54) - iVar2);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar4 = (int)*(short *)(&DAT_0836b5c6 + (uint)*(byte *)(param_1 + 0x12) * 2) *
          (*(int *)(iVar1 + 0x58) - iVar5);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x54) = iVar2 + (iVar3 >> 8);
  *(int *)(param_1 + 0x58) = iVar5 + (iVar4 >> 8);
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
  iVar2 = sub_0801A9A8(&DAT_02030288,iVar1 + 0x54);
  if ((iVar2 == 0) && ((*(byte *)(param_1 + 0x13) & 1) == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 1;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  }
  if (((*(char *)(iVar1 + 200) != '\0') || (1 < *(byte *)(iVar1 + 0xc))) ||
     (*(byte *)(iVar1 + 0xc) == 4)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_080177F4(param_1);
  return in_lr;
}

