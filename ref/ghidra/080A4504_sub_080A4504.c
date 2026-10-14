// sub_080A4504 at 0x080A4504 (thumb)

undefined4 sub_080A4504(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 in_lr;
  short asStack_2c [2];
  char acStack_28 [4];
  short asStack_24 [4];
  undefined auStack_1c [4];
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0809C980();
    psVar4 = (short *)(param_1 + 0xca);
    *psVar4 = 0;
    psVar7 = (short *)(param_1 + 200);
    *psVar7 = 0;
    *(int *)(param_1 + 0x54) = (int)*psVar7;
    *(int *)(param_1 + 0x58) = (int)*psVar4;
    bVar1 = *(byte *)(param_1 + 0xd);
    if (bVar1 == 1) {
      cVar2 = (&DAT_02023120)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
      *(char *)(param_1 + 0x1e) = cVar2;
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      sub_0809C930(param_1,5);
      sub_0809C980(param_1);
      *(undefined *)(param_1 + 0x13) = 0x10;
    }
    else if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
      sub_08001EAC(5);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b5d9c,param_1 + 0x4c,0x10);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined *)(param_1 + 0x13) = 8;
    }
    else {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x13) + -1;
        *(char *)(param_1 + 0x13) = cVar2;
        if (cVar2 != -1) {
          return in_lr;
        }
        sub_080C8D70(asStack_2c,&DAT_080c94b8,8);
        sub_080C8D70(asStack_24,&DAT_080c94c0,8);
        sub_080C8D70(auStack_1c,&DAT_080c94c8,4);
        sub_0809C930(param_1,auStack_1c[*(byte *)(param_1 + 0x10) >> 4]);
        sub_0809C980(param_1);
        *psVar7 = asStack_2c[*(byte *)(param_1 + 0x10) >> 4];
        *psVar4 = asStack_24[*(byte *)(param_1 + 0x10) >> 4];
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 1;
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x13) + -1;
      *(char *)(param_1 + 0x13) = cVar2;
      if (cVar2 != -1) {
        return in_lr;
      }
      sub_0809C930(param_1,0);
      sub_0809C980(param_1);
      *(undefined *)(param_1 + 0x13) = 0xc;
    }
  }
  else {
    if (*(char *)(param_1 + 0xe) != '\0') {
      sub_080C8D70(asStack_2c,&DAT_080c94c8,4);
      sub_0809C930(param_1,*(undefined *)((int)asStack_2c + (uint)(*(byte *)(param_1 + 0x10) >> 4)))
      ;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    sub_0809C980(param_1);
    iVar5 = (int)*(short *)(param_1 + 200);
    *(int *)(param_1 + 0x54) = iVar5;
    iVar6 = (int)*(short *)(param_1 + 0xca);
    *(int *)(param_1 + 0x58) = iVar6;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar5;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar6;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_080C8D70(asStack_2c,&DAT_080c94cc,4);
    sub_080C8D70(acStack_28,&DAT_080c94d0,2);
    bVar1 = *(byte *)(param_1 + 0x10);
    if ((bVar1 & 1) == 0) {
      *(byte *)(param_1 + 0x10) =
           bVar1 & 0xf | *(byte *)((int)asStack_2c + (((uint)bVar1 << 0x18) >> 0x1c));
      *(undefined *)(param_1 + 0x12) = 0x80;
    }
    else {
      if ((bVar1 & 2) == 0) {
        sub_080C8D70(asStack_24,&DAT_080c94d2,3);
        if (*(byte *)(param_1 + 0xd) < 2) {
          *(byte *)(param_1 + 0x10) =
               *(byte *)(param_1 + 0x10) & 0xf |
               *(byte *)((int)asStack_2c + (uint)(*(byte *)(param_1 + 0x10) >> 4));
        }
        uVar3 = *(undefined *)((uint)*(byte *)(param_1 + 0xd) + (int)asStack_24);
      }
      else {
        *(byte *)(param_1 + 0x10) = bVar1 & 0xf | *(byte *)((int)asStack_2c + (uint)(bVar1 >> 4));
        uVar3 = 0x80;
      }
      *(undefined *)(param_1 + 0x12) = uVar3;
      if (*(char *)(param_1 + 0xd) == acStack_28[*(byte *)(param_1 + 0x10) >> 1 & 1]) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
        sub_080055FC(param_1 + 0x74,&DAT_082b5d80,param_1 + 0x4c,0x10);
        *(int *)(param_1 + 0xb4) = param_1;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        sub_0809C930(param_1,0);
        sub_0809C980(param_1);
        return in_lr;
      }
    }
    *(short *)(param_1 + 200) = -(short)*(undefined4 *)(param_1 + 0x54);
    *(short *)(param_1 + 0xca) = -(short)*(undefined4 *)(param_1 + 0x58);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

