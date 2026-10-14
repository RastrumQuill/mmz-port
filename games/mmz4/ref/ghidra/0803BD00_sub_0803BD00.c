// sub_0803BD00 at 0x0803BD00 (thumb)

undefined4 sub_0803BD00(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) == 0x5800) &&
       (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_0801CF00(param_1,0x5900);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    cVar2 = sub_0803C210(param_1);
    if (cVar2 != '\x02') {
      cVar3 = sub_0803C42C(param_1);
      if (cVar3 != '\0') {
        sub_080D17D8(param_1 + 0x54,6,*(byte *)(param_1 + 10) >> 4 & 1);
        sub_08002B10(0x2b);
        cVar2 = '\x01';
      }
      if (((cVar2 == '\0') &&
          (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
         && ((*(uint *)(param_1 + 0x8c) & 4) == 0)) {
        return in_lr;
      }
      sub_0801CF00(param_1,0x5a00);
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined *)(param_1 + 0x12) = 0;
      sub_08002B10(0x72);
      *(undefined *)(param_1 + 0xe) = 0;
LAB_0803be46:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  else {
    if (*(char *)(param_1 + 0xd) == '\x01') {
      uVar6 = *(undefined4 *)(param_1 + 0xb4);
      if (*(char *)(param_1 + 0xe) == '\0') {
        if (*(char *)(param_1 + 0x71) < '\v') {
          return in_lr;
        }
        iVar4 = sub_0803A4B4(uVar6);
        uVar5 = iVar4 + 2U & 0xff;
        cVar2 = sub_08038A84(uVar6);
        if (cVar2 != '\0') {
          uVar5 = (uVar5 << 0x19) >> 0x18;
        }
        sub_08005794(param_1 + 0x74,&DAT_088506d0,uVar5,0xffffffff,0xffffffff,0xffffffff);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      bVar1 = *(byte *)(param_1 + 0x12);
      *(byte *)(param_1 + 0x12) = bVar1 + 1;
      if (bVar1 < 0x3c) {
        return in_lr;
      }
      sub_0801CF00(param_1,0x5a01);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      goto LAB_0803be46;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 9);
    *(undefined4 *)(param_1 + 0xc) = 2;
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[bVar1] + 8);
  return in_lr;
}

