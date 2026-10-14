// sub_08079E20 at 0x08079E20 (thumb)

undefined4 sub_08079E20(int param_1)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_08017700(param_1,0x3509);
    sub_08007390(param_1 + 0x74,&DAT_08363dc4);
    bVar2 = *(byte *)(DAT_0202f5c0 + 10) >> 4;
    *(byte *)(param_1 + 0xf) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffd80;
      uVar4 = 0x100;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x280;
      uVar4 = 0xffffff00;
    }
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  uVar3 = sub_08009AC0(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c),
                       *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60));
  if ((uVar3 == 0) || ((uVar3 & 0x8000) != 0)) {
    iVar7 = *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x54) + iVar7;
    *(int *)(param_1 + 0x54) = iVar5;
    iVar6 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x5c) = iVar7 + ((*(int *)(param_1 + 100) - iVar7) * 8 >> 8);
    iVar5 = sub_0800A1F4(iVar5,iVar6 + -0x2000);
    if (iVar5 - *(int *)(param_1 + 0x58) < 0x41) {
      *(int *)(param_1 + 0x58) = iVar5;
    }
    sub_0807A18C(param_1);
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
    cVar1 = *(char *)(param_1 + 0x12);
    if (cVar1 != '\0') {
      *(char *)(param_1 + 0x12) = cVar1 + -1;
      if (cVar1 == '\x01') {
        *(char *)(param_1 + 0xb9) = cVar1 + -1;
        sub_08017700(param_1,0x3500);
        sub_08007390(param_1 + 0x74,&DAT_08363d64);
      }
    }
    sub_080177F4(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

