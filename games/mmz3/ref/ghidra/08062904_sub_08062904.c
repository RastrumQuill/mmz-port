// sub_08062904 at 0x08062904 (thumb)

undefined4 sub_08062904(int param_1)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 0x14;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    if ((*(uint *)(param_1 + 0xbc) & 0x12) == 0) {
      cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_08062a4a:
      *(char *)(param_1 + 0xe) = cVar2;
    }
    break;
  case 2:
    if ((*(uint *)(param_1 + 0xbc) & 8) == 0) {
      uVar5 = 0xffffffe0;
    }
    else {
      uVar5 = 0x20;
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    bVar1 = false;
    if (*(int *)(param_1 + 0x5c) + 0x300U < 0x600) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    }
    if (*(int *)(param_1 + 0x5c) < 0) {
      sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + -0x1600,*(int *)(param_1 + 0x58) + 0x400);
      if (sVar3 != 0) {
LAB_080629de:
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        goto LAB_080629ea;
      }
LAB_080629ee:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else {
      sVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + 0x1600,*(int *)(param_1 + 0x58) + 0x400);
      if (sVar3 != 0) goto LAB_080629de;
      bVar1 = true;
LAB_080629ea:
      if (bVar1) goto LAB_080629ee;
    }
    sub_080177F4(param_1);
    break;
  case 4:
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar6 = -iVar4;
    *(int *)(param_1 + 0x5c) = iVar6;
    uVar5 = 0xfffffff4;
    *(undefined4 *)(param_1 + 100) = 0xfffffff4;
    if (0 < iVar4) {
      uVar5 = 0xc;
    }
    *(undefined4 *)(param_1 + 100) = uVar5;
    *(byte *)(param_1 + 0x12) = (byte)((uint)iVar6 >> 0x1f);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 5:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    if (iVar6 < 0) {
      if (*(char *)(param_1 + 0x12) == '\x01') break;
    }
    else if (*(char *)(param_1 + 0x12) == '\0') break;
    *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfffffffb;
    cVar2 = '\0';
    *(undefined *)(param_1 + 0xd) = 0;
    goto LAB_08062a4a;
  default:
    break;
  }
  uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  return in_lr;
}

