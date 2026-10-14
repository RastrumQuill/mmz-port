// sub_0801E70C at 0x0801E70C (thumb)

undefined8 sub_0801E70C(int param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar2 = *(ushort *)(param_1 + 0x90) & 0x80;
  if ((*(ushort *)(param_1 + 0x90) & 0x80) != 0) {
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 5;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    uVar4 = 5;
    goto LAB_0801e82a;
  }
  *(char *)(param_1 + 0x45) = (char)uVar2;
  uVar5 = *(byte *)(param_1 + 10) & 0xdf;
  *(char *)(param_1 + 10) = (char)uVar5;
  if ((*(byte *)(param_1 + 0x12d) & 0x20) == 0) {
LAB_0801e7c8:
    if (*(byte *)(param_1 + 0xe) < 2) {
      cVar1 = sub_0801BF68(param_1,*(undefined4 *)(param_1 + 0x108));
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
        *(undefined2 *)(param_1 + 0xe) = 0;
        uVar3 = 0;
        goto LAB_0801e7fc;
      }
    }
    uVar4 = 2;
  }
  else {
    uVar3 = sub_0801A69C(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
                         uVar5 >> 4 & 1,0x800,uVar2);
    uVar3 = uVar3 & 0xff;
    if (uVar3 == 0) goto LAB_0801e7c8;
    *(undefined *)(param_1 + 0xbc) = *(undefined *)(param_1 + 0xd);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(ushort *)(param_1 + 0xe) = uVar2;
LAB_0801e7fc:
    *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
    *(undefined *)(param_1 + 0xbe) = 0;
    *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
    *(undefined *)(param_1 + 0xbf) = 0;
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 0;
    *(ushort *)(param_1 + 0x110) = uVar3;
    uVar4 = 1;
  }
LAB_0801e82a:
  return CONCAT44(in_lr,uVar4);
}

