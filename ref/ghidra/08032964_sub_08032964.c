// sub_08032964 at 0x08032964 (thumb)

undefined4 sub_08032964(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0xd);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080014E8(&DAT_08500370,(DAT_02023068 - 0x300) * 0x20 + 0x10000);
    sub_0800179C(&DAT_0850037c,(DAT_020230ec - 7) * 0x20 + 0x200);
    sub_08093C9C(param_1,1);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_080297C0(param_1);
  if ((*(ushort *)(param_1 + 0x90) & 0x100) != 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(byte *)(param_1 + 0x12) < 4) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        iVar4 = -0xa00;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x4c);
        iVar4 = 0xa00;
      }
      *(int *)(iVar5 + 0x4c) = iVar2 + iVar4;
      *(int *)(iVar5 + 0x50) = *(int *)(param_1 + 0x50) + -0x1000;
      bVar1 = *(byte *)(param_1 + 0x41) & 0xf3;
      bVar3 = 4;
    }
    else if (*(byte *)(param_1 + 0x12) < 0xc) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        iVar4 = -0x800;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x4c);
        iVar4 = 0x800;
      }
      *(int *)(iVar5 + 0x4c) = iVar2 + iVar4;
      *(int *)(iVar5 + 0x50) = *(int *)(param_1 + 0x50) + -0x1200;
      bVar1 = *(byte *)(param_1 + 0x41) & 0xf3;
      bVar3 = 4;
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x4c);
        iVar4 = -0xa00;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x4c);
        iVar4 = 0xa00;
      }
      *(int *)(iVar5 + 0x4c) = iVar2 + iVar4;
      *(int *)(iVar5 + 0x50) = *(int *)(param_1 + 0x50) + -0x1400;
      bVar1 = *(byte *)(param_1 + 0x41) & 0xf3;
      bVar3 = 8;
    }
    *(byte *)(param_1 + 0x41) = bVar1 | bVar3;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    iVar5 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if (*(char *)(iVar5 + 8) == '\0') {
      sub_0801D540(iVar5,0x99,~(*(byte *)(param_1 + 10) >> 4) & 1,0);
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

