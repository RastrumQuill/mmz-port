// sub_0807B0D8 at 0x0807B0D8 (thumb)

undefined4 sub_0807B0D8(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    sub_0807AE7C(param_1,1,0x90);
    sub_0807AE7C(param_1,1,0xa0);
    sub_0807AE7C(param_1,1,0xb0);
    sub_0807AE7C(param_1,1,0xc0);
    sub_0807AE7C(param_1,1,0xd0);
    sub_0807AE7C(param_1,1,0xe0);
    uVar3 = 0xf0;
  }
  else {
    sVar2 = sub_08008CFC(iVar4);
    if (sVar2 == 0) {
      return in_lr;
    }
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    sub_0807AE7C(param_1,1,0x10);
    sub_0807AE7C(param_1,1,0x20);
    sub_0807AE7C(param_1,1,0x30);
    sub_0807AE7C(param_1,1,0x40);
    sub_0807AE7C(param_1,1,0x50);
    sub_0807AE7C(param_1,1,0x60);
    uVar3 = 0x70;
  }
  sub_0807AE7C(param_1,1,uVar3);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  return in_lr;
}

