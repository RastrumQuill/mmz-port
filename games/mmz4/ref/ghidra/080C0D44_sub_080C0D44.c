// sub_080C0D44 at 0x080C0D44 (thumb)

undefined4 sub_080C0D44(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  cVar1 = *(char *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar4 = 0;
    do {
      sub_080C09B8(param_1,uVar4 & 0xff);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
    if (cVar1 == '\0') {
      piVar2 = (int *)(iVar5 + 0xd8);
    }
    else {
      piVar2 = (int *)(iVar5 + 0xd4);
    }
    iVar5 = *piVar2;
    sub_08005784(param_1 + 0x74,&DAT_08861cd8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) + -0x1800;
    *(int *)(param_1 + 100) = (*(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x54)) / 2;
    *(int *)(param_1 + 0x68) = (*(int *)(iVar5 + 0x58) - *(int *)(param_1 + 0x58)) / 2;
    *(undefined *)(param_1 + 0x12) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  iVar5 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) << 6,0x14);
  iVar3 = *(short *)((int)&DAT_08128c10 + ((uint)((iVar5 + -0x80) * 0x1000000) >> 0x17)) + 0x100;
  iVar5 = iVar3 * *(int *)(param_1 + 100);
  if (iVar5 < 0) {
    iVar5 = iVar5 + 0xff;
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x5c) + (iVar5 >> 8);
  iVar3 = iVar3 * *(int *)(param_1 + 0x68);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x60) + (iVar3 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

