// sub_0806A2D4 at 0x0806A2D4 (thumb)

undefined4 sub_0806A2D4(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  int local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    iVar3 = *(int *)(DAT_0202f5c0 + 0x54);
    iVar4 = *(int *)(param_1 + 0x54);
    sub_08017700(param_1,0xd04);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_18 = (uint)(0 < iVar3 - iVar4) * -0xc0 + 0x60;
    local_14 = 0x60;
    sub_080B8168(param_1,param_1 + 0x54,&local_18,0x40,&DAT_08362b92,0x18,1,
                 *(undefined *)(param_1 + 0x11));
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x60) + 0x30;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sub_080177F4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((cVar1 == '\0') ||
     (sVar2 = sub_08009AC0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar2 != 0)) {
    sub_0806A238(param_1);
  }
  return in_lr;
}

