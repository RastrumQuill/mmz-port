// sub_08066998 at 0x08066998 (thumb)

undefined4 sub_08066998(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) < 0xa923) {
        sub_0801CF00(param_1,0xa918);
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xf) = 1;
      }
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    else {
      if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) < 0xa923) {
        sub_0801CF00(param_1,0xa91a);
        uVar4 = sub_0809CA78(param_1,param_1 + 0x54,2,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          *(undefined4 *)(param_1 + 0x5c) = 0xffffffe0;
          uVar4 = 1;
        }
        else {
          *(undefined4 *)(param_1 + 0x5c) = 0x20;
          uVar4 = 0xffffffff;
        }
        *(undefined4 *)(param_1 + 100) = uVar4;
        uVar1 = 0;
      }
      else {
        *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 0xd8) ^ 1) & 1;
        uVar5 = (*(byte *)(param_1 + 0xd8) ^ 1) & 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
        if (uVar5 == 0) {
          bVar2 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar2 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar2;
        sub_0801CF00(param_1,0xa924);
        uVar4 = sub_0809CA78(param_1,param_1 + 0x54,2,1);
        *(undefined4 *)(param_1 + 0x2c) = uVar4;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
        uVar1 = 1;
      }
      *(undefined *)(param_1 + 0xf) = uVar1;
      *(undefined *)(param_1 + 0x12) = 0x20;
      sub_08002B10(0x2f);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    if (DAT_0202e910 == 9) {
      sub_08002B10(0x69);
    }
    else {
      sub_08002B10(0x6a);
    }
    sub_08002B5C(0x61);
    *(undefined4 *)(DAT_0202dbf0 + 0xec) = 0;
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  cVar3 = *(char *)(param_1 + 0xd);
  if (cVar3 == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0x12) = 0x10;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else if (cVar3 == '\x01') {
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) != 0) {
      local_18 = 0;
      if (*(char *)(param_1 + 0xf) == '\0') {
        local_14 = 0xffffec00;
      }
      else {
        local_14 = 0;
      }
      uVar4 = sub_080D2578(param_1,&local_18);
      *(undefined4 *)(param_1 + 0x2c) = uVar4;
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  else {
    if (cVar3 == '\x02') {
      if (*(byte *)(*(int *)(param_1 + 0x2c) + 0xc) < 2) {
        return in_lr;
      }
      DAT_0202e922 = DAT_0202e922 | 2;
      *(undefined *)(param_1 + 0x12) = 0x20;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}

