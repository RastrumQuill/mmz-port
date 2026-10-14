// sub_080499CC at 0x080499CC (thumb)

undefined8 sub_080499CC(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    uVar4 = 0;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_08049b4e;
    cVar1 = sub_08041354(iVar5,param_1 + 0x54);
    if (cVar1 == '\0') {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(int *)(param_1 + 0x54) <= *(int *)(iVar5 + 0x54)) {
          *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
          goto LAB_08049a8e;
        }
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
LAB_08049a6a:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        if (*(int *)(iVar5 + 0x54) < *(int *)(param_1 + 0x54)) goto LAB_08049a6a;
LAB_08049a8e:
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08005760(param_1 + 0x74,&DAT_08853cfc,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0x8049e51;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0803AA58(iVar5);
      *(undefined *)(param_1 + 0xbd) = 1;
      *(undefined *)(param_1 + 0xd) = 1;
      goto LAB_08049ae4;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    uVar4 = 3;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
  }
  else {
LAB_08049ae4:
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar5;
    sub_0801CFF0(param_1);
    sVar2 = sub_08049E28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    cVar1 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar1;
    if ((cVar1 != -1) && (uVar4 = 0x1004, (*(uint *)(param_1 + 0x8c) & 0x1004) == 0))
    goto LAB_08049b4e;
    sub_080D0894(1,param_1 + 0x54);
    sub_08002B10(0x2a);
    uVar4 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar3 = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
LAB_08049b4e:
  return CONCAT44(uVar4,in_lr);
}

