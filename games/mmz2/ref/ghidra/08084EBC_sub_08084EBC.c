// sub_08084EBC at 0x08084EBC (thumb)

undefined4 sub_08084EBC(int param_1)

{
  int iVar1;
  char cVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x7209);
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0xb9) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = DAT_0202e130;
  if (cVar2 == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + -0xa00;
    uVar4 = uRam00000054;
    uVar5 = uRam00000058;
    if (DAT_0202e130 != 0) {
      uVar4 = sub_0801EFE8(DAT_0202e130,2);
      uVar5 = sub_0801F004(iVar1,2);
    }
    uVar3 = sub_08038EC0(uVar4,uVar5,local_1c,local_18);
    sub_080032EC(0x2c);
    sub_08098414(&local_1c,0x180,uVar3);
    cVar2 = *(char *)(param_1 + 0xb6);
    if (((cVar2 == '\0') || (cVar2 = cVar2 + -1, *(char *)(param_1 + 0xb6) = cVar2, cVar2 == '\0'))
       || (uVar6 = DAT_0202e188 * 0x343fd + 0x269ec3, DAT_0202e188 = uVar6 & 0x7fffffff,
          (uVar6 * 2 >> 0x11 & 1) == 0)) {
      uVar3 = 0xd;
    }
    else {
      uVar3 = 0xc;
    }
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

