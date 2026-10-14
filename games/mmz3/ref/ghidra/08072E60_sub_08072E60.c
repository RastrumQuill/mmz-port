// sub_08072E60 at 0x08072E60 (thumb)

undefined4 sub_08072E60(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_08363468);
    bVar1 = *(byte *)(DAT_0202f5c0 + 10) >> 4;
    *(byte *)(param_1 + 0xf) = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd80;
      uVar2 = 0x100;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
      uVar2 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar3 = sub_08009A3C(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
  if ((uVar3 & 0xf) == 1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar4 = *(int *)(param_1 + 0x54) + iVar6;
    *(int *)(param_1 + 0x54) = iVar4;
    iVar5 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar5;
    *(int *)(param_1 + 0x5c) = iVar6 + ((*(int *)(param_1 + 100) - iVar6) * 8 >> 8);
    iVar4 = sub_0800A104(iVar4,iVar5 + -0x2000);
    if (iVar4 - *(int *)(param_1 + 0x58) < 0x41) {
      *(int *)(param_1 + 0x58) = iVar4;
    }
    sub_080733A0(param_1);
    if (*(char *)(param_1 + 0xf) == '\0') {
      if (-1 < *(int *)(param_1 + 0x5c)) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x5c) < 1) {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

