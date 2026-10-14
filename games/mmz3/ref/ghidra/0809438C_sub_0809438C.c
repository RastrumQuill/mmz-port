// sub_0809438C at 0x0809438C (thumb)

undefined4 sub_0809438C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  int local_18;
  uint local_14;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  uVar5 = (uint)bVar1;
  if (uVar5 == 0) {
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar4 = *(int *)(param_1 + 0x54);
    sub_08017700(param_1,0x8e0a);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(byte *)(param_1 + 0x94) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = (uint)(0 < iVar3 - iVar4) * -0xc0 + 0x60;
    local_14 = uVar5;
    cVar2 = sub_0809357C(param_1,1);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x68) = 0x20;
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_080B7FC0(param_1,param_1 + 0x54,&local_18,0x15,&DAT_0836668e,0x18);
      }
      else {
        sub_080B8048(param_1,param_1 + 0x54,&local_18,0x15,&DAT_0836668e,0x18);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(char *)(param_1 + 0x11) == '\0') {
        sub_080B7E18(param_1,param_1 + 0x54,&local_18,0,&DAT_0836668e,0x18);
      }
      else {
        sub_080B7EA0(param_1,param_1 + 0x54,&local_18,0,&DAT_0836668e,0x18);
      }
    }
    iVar3 = local_18;
    if (local_18 < 0) {
      iVar3 = local_18 + 3;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (uVar5 != 1) {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x68) != 0) {
    iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    sub_0809357C(param_1,*(undefined4 *)(param_1 + 0x60));
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    sub_080942DC(param_1);
  }
  return in_lr;
}

