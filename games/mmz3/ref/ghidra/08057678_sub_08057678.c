// sub_08057678 at 0x08057678 (thumb)

undefined4 sub_08057678(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + -0x1000;
    iVar2 = sub_080BCE88(&local_14,1,0);
    piVar4 = (int *)(param_1 + 0xe0);
    *piVar4 = iVar2;
    if (iVar2 == 0) {
      return in_lr;
    }
    *(undefined *)(iVar2 + 0x74) = 0x1f;
    *(undefined *)(*piVar4 + 0x75) = 0x1f;
    *(undefined *)(*piVar4 + 0x76) = 0x1f;
    *(undefined4 *)(*piVar4 + 0x78) = 0;
    *(undefined *)(*piVar4 + 0x7c) = 0x21;
    *(undefined *)(*piVar4 + 0x7d) = 0x1e;
    sub_080040A8(100,0x280);
    DAT_020301b2 = DAT_020301b2 | 2;
    *(undefined *)(param_1 + 0x12) = 0xff;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_08004768(0x39);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if (*(byte *)(param_1 + 0xe) < 2) {
    sub_080041E4(100);
    uVar3 = *(byte *)(param_1 + 0x13) + 4;
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    *(char *)(param_1 + 0x13) = (char)uVar3;
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      iVar2 = (uint)*(byte *)(param_1 + 0x13) * 0x100 + -0xf00;
      if (iVar2 < 1) {
        *(uint *)(*(int *)(param_1 + 0xe0) + 0x78) = *(byte *)(param_1 + 0x12) & 1;
      }
      else {
        *(int *)(*(int *)(param_1 + 0xe0) + 0x78) = iVar2;
      }
    }
    else {
      *(uint *)(*(int *)(param_1 + 0xe0) + 0x78) = (uint)*(byte *)(param_1 + 0x13) << 8;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_08004230(100);
      *(undefined *)(*(int *)(param_1 + 0xe0) + 0x77) = 1;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  return in_lr;
}

