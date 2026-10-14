// sub_08049894 at 0x08049894 (thumb)

undefined4 sub_08049894(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa803);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    bVar1 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar1 & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
    *(undefined *)(param_1 + 0x1d) = *(undefined *)(*(int *)(param_1 + 200) + 0x1c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x200;
    if ((bVar1 & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
      uVar3 = 0xfffffffc;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      uVar3 = 4;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x40;
    sub_08003338((int)*(short *)(param_1 + 0xde));
    *(short *)(param_1 + 0xde) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = -iVar5;
    }
    if (0x10 < iVar4) {
      *(int *)(param_1 + 0x5c) = iVar5 + *(int *)(param_1 + 100);
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(*(int *)(param_1 + 200) + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

