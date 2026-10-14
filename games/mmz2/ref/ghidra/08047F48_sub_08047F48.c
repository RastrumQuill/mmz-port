// sub_08047F48 at 0x08047F48 (thumb)

undefined4 sub_08047F48(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa504);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) {
      DAT_0202ec38 = DAT_0202ec38 & 0xfffe | 0x20;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x80;
      uVar3 = 0xfffffffc;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
      uVar3 = 4;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x200;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
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
  }
  else if (bVar1 == 2) {
    if (*(char *)(param_1 + 0xf) == '\0') {
      local_14 = *(int *)(param_1 + 0xc0) - (*(int *)(param_1 + 0x54) + -0x7800);
      local_10 = 0xffffec00;
      uVar3 = sub_080B878C(param_1,&local_14);
      *(undefined4 *)(param_1 + 0x28) = uVar3;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
      DAT_0202ec42 = DAT_0202ec42 | 2;
    }
  }
  return in_lr;
}

