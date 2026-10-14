// sub_0807D894 at 0x0807D894 (thumb)

undefined4 sub_0807D894(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 6;
    *(undefined *)(param_1 + 0xb8) = 4;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    pcVar5 = (char *)(param_1 + 0xb8);
    uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar3 & 0x7fffffff;
    *pcVar5 = *pcVar5 + '\x01' + ((byte)(uVar3 * 2 >> 0x11) & 7);
    cVar1 = sub_080FE4D8(*pcVar5,9);
    *pcVar5 = cVar1;
    iVar6 = *(int *)(param_1 + 100);
    cVar1 = *pcVar5;
    iVar4 = sub_080FE4D8(cVar1,3);
    iVar7 = (iVar6 + -0x1000 + ((uint)(iVar4 << 0x18) >> 0xc)) - *(int *)(param_1 + 0x54);
    iVar6 = *(int *)(param_1 + 0x68);
    iVar4 = sub_080FE460(cVar1,3);
    iVar8 = (iVar6 + -0x1000 + ((uint)(iVar4 << 0x18) >> 0xc)) - *(int *)(param_1 + 0x58);
    iVar4 = iVar7 >> 8;
    iVar6 = iVar8 >> 8;
    iVar4 = sub_080FE124(iVar4 * iVar4 + iVar6 * iVar6);
    uVar3 = (uint)(iVar4 << 0x10) >> 8;
    iVar4 = FUN_080fe2f8(iVar7 * 0x100,uVar3);
    iVar6 = FUN_080fe2f8(iVar8 * 0x100,uVar3);
    iVar4 = iVar4 * 0x380;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    iVar6 = iVar6 * 0x380;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    *(int *)(param_1 + 0x60) = iVar6 >> 8;
    uVar2 = FUN_080fe2f8(uVar3,0x380);
    *(undefined *)(param_1 + 0x13) = uVar2;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 2:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    sub_080177F4(param_1);
    break;
  case 3:
    *(undefined *)(param_1 + 0x13) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 == '\0') {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 == '\0') {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xe) = 1;
      }
    }
    sub_080177F4(param_1);
  }
  return in_lr;
}

