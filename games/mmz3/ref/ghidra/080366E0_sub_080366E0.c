// sub_080366E0 at 0x080366E0 (thumb)

undefined4 sub_080366E0(int param_1)

{
  char cVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  if (*(short *)(*(int *)(param_1 + 0x28) + 4) == 2) {
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\0') {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b440 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b454 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b440 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b454 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  pbVar2 = (byte *)(param_1 + 0x94);
  if (((*(uint *)(param_1 + 0x8c) & 1) != 0) &&
     (sub_0800471C(10), *(char *)(*(int *)(param_1 + 0x28) + 0xc) != '\0')) {
    sub_0800471C(4);
    *(char *)(*(int *)(param_1 + 0x28) + 0xc) = *(char *)(*(int *)(param_1 + 0x28) + 0xc) + -1;
    if (*(char *)(*(int *)(param_1 + 0x28) + 0xc) == '\0') {
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *pbVar2 = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  if (*pbVar2 != 0) {
    cVar1 = *(char *)(param_1 + 0x286);
    if ((cVar1 == '\0') || (cVar1 = cVar1 + -1, *(char *)(param_1 + 0x286) = cVar1, cVar1 == '\0'))
    {
      *pbVar2 = *pbVar2 & 0x7f;
    }
  }
  return in_lr;
}

