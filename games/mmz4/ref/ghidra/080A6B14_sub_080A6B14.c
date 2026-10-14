// sub_080A6B14 at 0x080A6B14 (thumb)

undefined4 sub_080A6B14(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(iVar7 + 0xbe) != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      uVar5 = *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      goto LAB_080a6c8a;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0x8b08);
    uVar5 = *(undefined4 *)(iVar7 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           *(short *)((int)&DAT_08128c10 + ((*(byte *)(iVar7 + 0xbd) + 0x40) * 0x1000000 >> 0x17)) *
           -0x1a;
      uVar1 = 0x12;
    }
    else {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           *(short *)((int)&DAT_08128c10 + ((*(byte *)(iVar7 + 0xbd) + 0x40) * 0x1000000 >> 0x17)) *
           0x1a;
      uVar1 = 0xee;
    }
    *(undefined *)(param_1 + 0x13) = uVar1;
    *(int *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x58) + (short)(&DAT_08128c10)[*(byte *)(iVar7 + 0xbd)] * -0x1a;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffb80;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0xbd) = *(byte *)(iVar7 + 0xbd);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar3 = *(char *)(param_1 + 0x13) + *(char *)(param_1 + 0xbd);
  *(char *)(param_1 + 0xbd) = cVar3;
  *(char *)(param_1 + 0x24) = cVar3;
  iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar6;
  iVar7 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar7;
  if (iVar7 < 1) {
    return in_lr;
  }
  sVar4 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar6 + 0xa00);
  if (sVar4 == 0) {
    return in_lr;
  }
  sub_080D0894(1,param_1 + 0x54);
  sub_08002B10(0x2a);
  *(undefined4 *)(param_1 + 0xc) = 4;
  uVar5 = *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
LAB_080a6c8a:
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}

